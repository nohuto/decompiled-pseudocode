/*
 * XREFs of ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01E3804
 * Callers:
 *     NtUserReportInertia @ 0x1C0002CA0 (NtUserReportInertia.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C0210154 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall CInputDest::GetDelegateThreadInfo(CInputDest *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( *((_DWORD *)this + 23) == 1 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 64LL);
  if ( *((_DWORD *)this + 23) == 2 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 264LL);
  return (struct tagTHREADINFO *)v1;
}
