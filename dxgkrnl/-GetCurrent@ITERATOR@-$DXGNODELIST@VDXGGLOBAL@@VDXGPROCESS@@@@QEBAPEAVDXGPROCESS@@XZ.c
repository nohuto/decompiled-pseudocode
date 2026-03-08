/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00228E4
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C0214B78 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E1728 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C030E6D0 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C031007C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( v1 == *a1 )
    return 0LL;
  else
    return (v1 - 8) & -(__int64)(v1 != 0);
}
