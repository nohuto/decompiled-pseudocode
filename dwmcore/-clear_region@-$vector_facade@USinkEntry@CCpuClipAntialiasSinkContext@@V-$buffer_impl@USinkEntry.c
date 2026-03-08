/*
 * XREFs of ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180090BE4
 * Callers:
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x1800218C4 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 *     ??_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z @ 0x1800305B0 (--_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090BB4 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB440 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 */

__int64 __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // r10
  __int64 *i; // rdi
  __int64 *v13; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  char v15[32]; // [rsp+40h] [rbp-38h] BYREF

  result = 0x84BDA12F684BDA13uLL;
  v7 = *a1;
  v8 = a2;
  v9 = a3 + a2;
  v11 = 0x84BDA12F684BDA13uLL * ((a1[1] - v7) >> 4);
  if ( v9 > v11 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v4 = 0LL;
    v3 = (__int64 *)(v7 + 16 * ((a1[1] - v7) >> 4));
    if ( v9 == v11 )
      goto LABEL_3;
  }
  if ( v8 && (!v7 || v8 < 0 || v11 < v8) )
    _invalid_parameter_noinfo_noreturn();
  v14[0] = v7;
  v14[2] = v8;
  v14[1] = v11;
  result = ((__int64 (__fastcall *)(char *, unsigned __int64, __int64 *, _QWORD *))std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>)(
             v15,
             v7 + 432 * v9,
             v3,
             v14);
LABEL_3:
  for ( i = &v3[-54 * a3]; i != v3; i += 54 )
  {
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(i + 1);
    v13 = (__int64 *)i[1];
    i[1] = (__int64)v4;
    if ( v13 == i + 4 )
      v13 = v4;
    operator delete(v13);
    result = wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(i);
  }
  a1[1] -= 432 * a3;
  return result;
}
