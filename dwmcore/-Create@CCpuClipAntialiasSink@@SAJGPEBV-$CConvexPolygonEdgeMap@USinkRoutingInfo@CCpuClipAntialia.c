/*
 * XREFs of ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B1130
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800B0F0C (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCpuClipAntialiasSink@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800B11F4 (--0-$com_ptr_t@VCCpuClipAntialiasSink@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntial.c)
 *     ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x1800B1230 (--0CCpuClipAntialiasSink@@AEAA@XZ.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::Create(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  CCpuClipAntialiasSink *v9; // rax
  char v10; // al
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v9 = (CCpuClipAntialiasSink *)operator new(0x40uLL);
  if ( v9 )
    v9 = CCpuClipAntialiasSink::CCpuClipAntialiasSink(v9);
  wil::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>(
    &v16,
    v9);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  v11 = v16;
  if ( v10 || (v12 = CCpuClipAntialiasSink::Initialize(v16, a1, a2, a3), v13 = v12, v12 >= 0) )
  {
    v16 = 0LL;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
      (const char *)(unsigned int)v12,
      a4);
  }
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(&v16);
  return v13;
}
