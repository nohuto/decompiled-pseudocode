/*
 * XREFs of SeSetSessionIdToken @ 0x140619180
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091CAA0 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSessionObjectById @ 0x1402AAC94 (MmGetSessionObjectById.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     SepSetTokenLowboxNumber @ 0x1406C65AC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1406F3A30 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  bool v8; // zf
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  DmaAdapter = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v10, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 && *((_QWORD *)Token + 135) )
    {
      SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30));
      *((_QWORD *)Token + 135) = 0LL;
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v7) = 1;
      SepSetTokenSessionById((_DWORD)Token, SessionId, v7, (_DWORD)SessionObjectById, (__int64)&DmaAdapter);
      SessionObjectById = 0LL;
    }
    v8 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v8 )
      v2 = SepSetTokenLowboxNumber(Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    HalPutDmaAdapter(SessionObjectById);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v2;
}
