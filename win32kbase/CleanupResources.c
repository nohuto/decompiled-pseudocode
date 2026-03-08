/*
 * XREFs of CleanupResources @ 0x1C00B38E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupPowerRequestList @ 0x1C00B39B0 (CleanupPowerRequestList.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C00B56A0 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  __int64 i; // rbx

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
  {
    v2 = *(_QWORD *)(i + 432);
    if ( v2 )
    {
      if ( qword_1C02D66E0 )
        qword_1C02D66E0(v2, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons(v2);
  if ( qword_1C02D7070 && (int)qword_1C02D7070() >= 0 && qword_1C02D7078 )
    qword_1C02D7078();
  return CleanupGDI();
}
