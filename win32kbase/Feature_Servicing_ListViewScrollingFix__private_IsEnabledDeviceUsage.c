/*
 * XREFs of Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage @ 0x1C00E1050
 * Callers:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00D5EBC (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C0210154 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     Feature_Servicing_ListViewScrollingFix__private_IsEnabledFallback @ 0x1C00E1088 (Feature_Servicing_ListViewScrollingFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_ListViewScrollingFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ListViewScrollingFix__private_featureState & 1;
  else
    return Feature_Servicing_ListViewScrollingFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ListViewScrollingFix__private_featureState,
             3LL);
}
