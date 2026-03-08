/*
 * XREFs of SeSetSessionIdToken @ 0x140743440
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C6570 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C66C0 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1402BE684 (MmGetSessionObjectById.c)
 *     SepSetTokenSessionById @ 0x14070BB80 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x1407398DC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14074438C (SepDereferenceLowBoxNumberEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int64 v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId);
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
        SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &Object);
      SessionObjectById = 0LL;
    }
    v7 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v7 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
