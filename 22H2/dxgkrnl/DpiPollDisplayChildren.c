/*
 * XREFs of DpiPollDisplayChildren @ 0x1C03995E0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0172AF0 (DxgkSetDisplayMode.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF990 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0313C80 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03CADB0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F5100 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiPollDisplayChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  __int64 v9; // r8

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(3LL, a1, v7);
    return v8;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    v8 = -1073741823;
    v9 = -1073741823LL;
LABEL_11:
    WdLogSingleEntry2(3LL, a1, v9);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 4000) == 1 || *(_DWORD *)(v3 + 284) != 1 )
  {
    v9 = -1073741661LL;
    v8 = -1073741661;
    goto LABEL_11;
  }
  v8 = DpiFdoInvalidateChildRelations(a1, a2, a3);
LABEL_12:
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  return v8;
}
