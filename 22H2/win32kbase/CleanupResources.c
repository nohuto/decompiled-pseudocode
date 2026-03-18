/*
 * XREFs of CleanupResources @ 0x1C009E280
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupPowerRequestList @ 0x1C009E380 (CleanupPowerRequestList.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
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
    if ( v2 && qword_1C0295568 )
      qword_1C0295568(v2, 0LL);
  }
  if ( qword_1C0295880 && (int)qword_1C0295880(v2) >= 0 && qword_1C0295888 )
    qword_1C0295888();
  if ( qword_1C0295EF8 && (int)qword_1C0295EF8(v2) >= 0 && qword_1C0295F00 )
    qword_1C0295F00();
  return CleanupGDI(v2);
}
