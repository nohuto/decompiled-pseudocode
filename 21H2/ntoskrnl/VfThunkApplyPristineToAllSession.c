/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140A93644
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140761DD8 (MmIsDriverLoadedCurrentSession.c)
 *     MmQuitNextSession @ 0x1407FCA70 (MmQuitNextSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140A9391C (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(__int64 a1)
{
  int v2; // edi
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  void *v6; // rbx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = 0;
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  if ( !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyPristineCurrentSession(a1);
  for ( i = 0LL; ; i = v6 )
  {
    NextSession = MmGetNextSession(i);
    v6 = (void *)NextSession;
    if ( !NextSession )
      break;
    v2 = MmAttachSession(NextSession);
    if ( v2 >= 0 )
    {
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      {
        v2 = ViThunkApplyPristineCurrentSession(a1);
        if ( v2 < 0 )
        {
          MmQuitNextSession(v6);
          return (unsigned int)v2;
        }
      }
      MmDetachSession((__int64)v6, (__int64)v7);
    }
  }
  return (unsigned int)v2;
}
