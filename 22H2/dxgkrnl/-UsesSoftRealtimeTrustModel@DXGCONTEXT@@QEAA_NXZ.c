/*
 * XREFs of ?UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ @ 0x1C0027658
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E4D18 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00E4D80 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall DXGCONTEXT::UsesSoftRealtimeTrustModel(DXGCONTEXT *this)
{
  return DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) != 0;
}
