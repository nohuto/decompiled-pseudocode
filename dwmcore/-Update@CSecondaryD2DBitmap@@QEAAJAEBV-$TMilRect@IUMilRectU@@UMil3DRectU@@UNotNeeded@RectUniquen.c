/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D844
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8170 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800B795C (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F76E4 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012A6F8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802B193C (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802B1DC8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B2014 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryD2DBitmap *this, __int64 a2, __int64 *a3)
{
  char *v3; // r15
  __int64 v7; // rdx
  unsigned int v8; // ecx
  struct tagRECT *v9; // rdx
  struct tagRECT v10; // xmm0
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  enum DXGI_FORMAT v14; // r14d
  struct ID3D11Resource *v15; // rcx
  int v17; // r9d
  struct tagRECT v18; // xmm0
  int v19; // eax
  unsigned int v20; // ecx
  struct IBitmapLock *v21; // rdx
  struct IBitmapLock *v22; // rax
  __int64 v23; // rcx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v25; // [rsp+20h] [rbp-49h]
  struct IBitmapLock *v26; // [rsp+30h] [rbp-39h] BYREF
  struct ID3D11Resource *v27; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v29[4]; // [rsp+44h] [rbp-25h] BYREF
  void *v30; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT v32; // [rsp+60h] [rbp-9h] BYREF
  struct IBitmapLock *v33[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = (char *)this + 248;
  *(_QWORD *)&v32.left = 0LL;
  *(_QWORD *)&v32.right = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((char *)this + 248)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v13 = -2147024809;
    v17 = -2147024809;
    v25 = 57;
    goto LABEL_30;
  }
  if ( *((float *)this + 52) == 96.0 && *((float *)this + 53) == 96.0 )
  {
    v10 = *v9;
    v11 = *a3;
    v26 = 0LL;
    v32 = v10;
    v12 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, struct IBitmapLock **))(v11 + 32))(a3, &v32, &v26);
    v13 = v12;
    if ( v12 >= 0 )
      goto LABEL_6;
    v25 = 64;
LABEL_18:
    v17 = v12;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v17, v25, 0LL);
    goto LABEL_15;
  }
  *(struct tagRECT *)v33 = *v9;
  v18 = *(struct tagRECT *)CSecondaryD2DBitmap::GetPrefilteredRect(this, v31, v33);
  v26 = 0LL;
  v32 = v18;
  v12 = CSecondaryD2DBitmap::CreateScaledLock(this, &v32, a3, &v26);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 70;
    goto LABEL_18;
  }
LABEL_6:
  v14 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct IBitmapLock *, struct IBitmapLock **))v26)(v26, v33);
  if ( v14 != *((_DWORD *)this + 42) )
  {
    v33[0] = 0LL;
    v19 = CSecondaryD2DBitmap::FormatConvertLock(this, v26, v33);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x50u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v33);
      goto LABEL_15;
    }
    v21 = v26;
    v22 = v33[0];
    v33[0] = 0LL;
    v26 = v22;
    if ( v21 )
    {
      v23 = (__int64)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v33);
  }
  v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v26 + 16LL))(v26, &v28);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 86;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v26 + 24LL))(v26, v29, &v30);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 90;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v14);
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v32.right - v32.left,
      v32.bottom - v32.top,
      v14,
      PixelFormatSize >> 3);
  }
  v15 = v27;
  v27 = 0LL;
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Resource *))v15->lpVtbl->Release)(v15);
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v27);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 97;
    goto LABEL_18;
  }
  CD3DDevice::UpdateSubresource(
    (CD3DDevice *)((*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                             + 24LL) != 0LL)),
    v27,
    &v32,
    v30,
    v28,
    0);
  CSecondaryBitmap::AddValidRect(v3, a2);
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
  return v13;
}
