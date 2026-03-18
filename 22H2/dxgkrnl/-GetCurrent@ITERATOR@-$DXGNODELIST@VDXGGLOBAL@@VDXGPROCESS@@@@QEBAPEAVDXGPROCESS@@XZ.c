/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00223F4
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C0223158 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E64B8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0313500 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0314EAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
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
