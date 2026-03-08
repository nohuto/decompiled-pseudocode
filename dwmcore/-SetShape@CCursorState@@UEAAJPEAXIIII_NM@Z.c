/*
 * XREFs of ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180277CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x180275900 (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ??0?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBitmap@@@Z @ 0x180275960 (--0-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBit.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18027DC4C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CCursorState::SetShape(
        CCursorState *this,
        void *Src,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        float a8)
{
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  char *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  size_t Size; // [rsp+38h] [rbp-48h] BYREF
  CSystemMemoryBitmap *v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v31; // [rsp+50h] [rbp-30h]
  void *v32; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  EnterCriticalSection(&g_CursorManager);
  v12 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
  if ( v12 )
    v12 = CSystemMemoryBitmap::CSystemMemoryBitmap(v12, 1);
  wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
    &v29,
    (__int64)v12);
  v13 = v29;
  LODWORD(v31) = 0;
  v30 = 0x100000057LL;
  v14 = CSystemMemoryBitmap::HrInit(v29, a3, a4, (const struct PixelFormatInfo *)&v30, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x469,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_19;
  }
  v33[0] = 0;
  v33[1] = 0;
  v33[2] = a3;
  v33[3] = a4;
  v16 = *((_QWORD *)v13 + 3);
  v27 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(v16 + 24))((__int64)v13 + 24, v33, 2LL, &v27);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 1133LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
    goto LABEL_19;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, size_t *, void **))(*(_QWORD *)v27 + 24LL))(v27, &Size, &v32);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 1137LL;
    goto LABEL_7;
  }
  memcpy_0(v32, Src, (unsigned int)Size);
  v19 = (char *)this + 32;
  v20 = std::make_shared<CCursorState::ShapeData,>(&v30);
  std::shared_ptr<CRegion>::operator=((_QWORD *)this + 4, v20);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  **(_DWORD **)v19 = a5;
  *(_DWORD *)(*(_QWORD *)v19 + 4LL) = a6;
  v21 = 0LL;
  *(_DWORD *)(*(_QWORD *)v19 + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)v19 + 12LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)v19 + v21++ + 16) = 0;
  while ( v21 < 2 );
  v22 = (unsigned __int64)v13 + 48;
  v23 = -(__int64)(v13 != 0LL);
  v24 = *(_QWORD *)(*(_QWORD *)v19 + 24LL);
  v25 = v22 & v23;
  *(_QWORD *)(*(_QWORD *)v19 + 24LL) = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  *((float *)this + 7) = a8;
  *((_BYTE *)this + 18) = a7;
  *((_BYTE *)this + 21) = 1;
  CCursorState::ScheduleCompositionPass(this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  v15 = 0;
LABEL_19:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  LeaveCriticalSection(&g_CursorManager);
  return v15;
}
