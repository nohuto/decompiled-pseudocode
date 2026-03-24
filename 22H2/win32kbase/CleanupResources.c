/*
 * XREFs of CleanupResources @ 0x1C00085EC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C0008550 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 *     CleanupPowerRequestList @ 0x1C00779E0 (CleanupPowerRequestList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 CleanupResources()
{
  __int64 i; // rbx
  __int64 v1; // rcx
  int v2; // eax

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 320); i; i = *(_QWORD *)(i + 664) )
  {
    v1 = *(_QWORD *)(i + 432);
    if ( v1 )
    {
      if ( qword_1C02560F8 )
        qword_1C02560F8(v1, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( qword_1C0256AE8 )
    v2 = qword_1C0256AE8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C0256AF0 )
    qword_1C0256AF0();
  return CleanupGDI();
}
