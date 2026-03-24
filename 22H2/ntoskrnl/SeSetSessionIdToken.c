/*
 * XREFs of SeSetSessionIdToken @ 0x14069D5A0
 * Callers:
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C690 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C81C (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091C990 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140206324 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     SepSetTokenSessionById @ 0x140604300 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406355DC (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x14070F0FC (SepSetTokenLowboxNumber.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int64 v9; // rdx
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
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v9 = *((_QWORD *)Token + 135);
      if ( v9 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &DmaAdapter);
      SessionObjectById = 0LL;
    }
    v7 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v7 )
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
