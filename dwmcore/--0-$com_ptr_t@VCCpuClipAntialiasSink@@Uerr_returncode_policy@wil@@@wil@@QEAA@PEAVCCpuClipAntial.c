/*
 * XREFs of ??0?$com_ptr_t@VCCpuClipAntialiasSink@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800B11F4
 * Callers:
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B1130 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
