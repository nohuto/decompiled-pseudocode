/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140AD82CC
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140AD7288 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140AD7C74 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1407F7298 (MmIsDriverLoadedCurrentSession.c)
 *     MmQuitNextSession @ 0x14087FF10 (MmQuitNextSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140AD858C (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(__int64 a1)
{
  int v2; // edi
  struct _KPROCESS *i; // rcx
  struct _KPROCESS *NextSession; // rax
  struct _KPROCESS *v6; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  if ( !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyPristineCurrentSession(a1);
  for ( i = 0LL; ; i = v6 )
  {
    NextSession = (struct _KPROCESS *)MmGetNextSession(i);
    v6 = NextSession;
    if ( !NextSession )
      break;
    v2 = MmAttachSession(NextSession, &ApcState);
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
      MmDetachSession((__int64)v6, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
  }
  return (unsigned int)v2;
}
