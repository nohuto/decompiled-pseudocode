/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C017DAF0
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C017DAAC (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1C017FD0C (OutputDuplProcessTerminateForWddm.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BA8B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C017DB80 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGADAPTER *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 11140LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11140LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 365);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v10[0] = *(_QWORD *)((char *)a1 + 404);
    v10[1] = a2;
    v10[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
             v10);
  }
  return result;
}
