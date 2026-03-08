/*
 * XREFs of ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18027777C
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x180278244 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x1801B1984 (-GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x180275900 (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ??0?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBitmap@@@Z @ 0x180275960 (--0-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBit.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180276DF8 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18027DD60 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 */

_QWORD *__fastcall CCursorState::ScaleShape(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // eax
  CComposition *v12; // rcx
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  CSystemMemoryBitmap *v14; // rax
  CSystemMemoryBitmap *v15; // rax
  CSystemMemoryBitmap *v16; // rbx
  struct WICRect *v17; // r8
  bool v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  bool v22; // cf
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-50h]
  struct IWICImagingFactory *v27; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-34h] BYREF
  struct IWICBitmapSource *v30; // [rsp+40h] [rbp-30h] BYREF
  struct IBitmapSource *v31; // [rsp+48h] [rbp-28h] BYREF
  CSystemMemoryBitmap *v32; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v35; // [rsp+B0h] [rbp+40h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**(_QWORD **)(*a3 + 24) + 24LL))(
         *(_QWORD *)(*a3 + 24),
         &v28,
         &v29);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      948LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v8,
      v26);
  v9 = *a3;
  v27 = 0LL;
  v10 = *(_DWORD *)(v9 + 12) >> 1;
  v28 = (v10 + a4 * v28) / *(_DWORD *)(v9 + 12);
  v11 = (v10 + a4 * v29) / *(_DWORD *)(v9 + 12);
  v12 = *(CComposition **)(a1 + 56);
  v29 = v11;
  if ( (int)CComposition::GetImagingFactory(v12, &v27) >= 0 )
  {
    lpVtbl = v27->lpVtbl;
    v35 = 0LL;
    if ( ((int (__fastcall *)(struct IWICImagingFactory *, __int64 *))lpVtbl->CreateBitmapScaler)(v27, &v35) < 0
      || (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v35 + 64LL))(
           v35,
           *(_QWORD *)(*a3 + 24),
           v28,
           v29,
           *(_BYTE *)(a1 + 72) == 0 ? 3 : 0) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v30 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v35)(
             v35,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v30) >= 0 )
      {
        v31 = 0LL;
        if ( (int)HrCreateBitmapFromWICBitmapSource(v30, &v31) >= 0 )
        {
          v14 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
          if ( v14 )
            v15 = CSystemMemoryBitmap::CSystemMemoryBitmap(v14, 1);
          else
            v15 = 0LL;
          wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
            &v32,
            (__int64)v15);
          v16 = v32;
          if ( (int)CSystemMemoryBitmap::HrInit(v32, v31, v17, v18) >= 0 )
          {
            std::make_shared<CCursorState::ShapeData,>(v33);
            v19 = v33[0];
            HIDWORD(v20) = 0;
            *(_DWORD *)v33[0] = (unsigned int)(v10 + *(_DWORD *)*a3 * a4) / *(_DWORD *)(*a3 + 12);
            LODWORD(v20) = (unsigned int)(v10 + *(_DWORD *)(*a3 + 4) * a4) % *(_DWORD *)(*a3 + 12);
            *(_DWORD *)(v19 + 4) = (unsigned int)(v10 + *(_DWORD *)(*a3 + 4) * a4) / *(_DWORD *)(*a3 + 12);
            *(_DWORD *)(v19 + 8) = *(_DWORD *)(*a3 + 8);
            *(_DWORD *)(v19 + 12) = a4;
            *(_BYTE *)(v19 + 16) = 1;
            v21 = (unsigned __int64)v16 + 48;
            *(_BYTE *)(v19 + 17) = *(_BYTE *)(*a3 + 17);
            v22 = v16 != 0LL;
            v23 = *(_QWORD *)(v19 + 24);
            v24 = v21 & -(__int64)v22;
            *(_QWORD *)(v19 + 24) = v24;
            if ( v24 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, v20);
            if ( v23 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, v20);
            a2[1] = v33[1];
            *a2 = v19;
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
        }
        else
        {
          *a2 = 0LL;
          a2[1] = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  return a2;
}
