/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C193C
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NI@Z @ 0x1800CA460 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NI@Z.c)
 * Callees:
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18001D700 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB860 (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801C17E8 (--$_Emplace_reallocate@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180262344 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180262C20 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  char *v1; // rsi
  __int64 *v2; // r15
  __int64 *v4; // rbx
  int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct IBitmapRealization *v16; // rbx
  struct IBitmapRealization *v17; // rdx
  struct IBitmapRealization *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  struct CComposition *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char *v25; // rdx
  char *v26; // rcx
  char *v27; // rcx
  __int64 *v28; // r14
  __int64 *v29; // rbx
  struct IBitmapRealization *v31; // [rsp+40h] [rbp-40h] BYREF
  struct CBitmapResource *v32; // [rsp+48h] [rbp-38h] BYREF
  struct IBitmapRealization *v33; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-20h]
  unsigned int v36; // [rsp+64h] [rbp-1Ch]
  _DWORD v37[4]; // [rsp+68h] [rbp-18h] BYREF

  v1 = (char *)this + 488;
  v2 = (__int64 *)*((_QWORD *)this + 62);
  v4 = (__int64 *)*((_QWORD *)this + 61);
  v5 = 0;
  if ( v4 != v2 )
  {
    do
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v4++);
    while ( v4 != v2 );
    v4 = *(__int64 **)v1;
  }
  *((_QWORD *)v1 + 1) = v4;
  v6 = 0;
  v7 = *((_DWORD *)this + 116);
  v8 = *((_DWORD *)this + 117);
  v34 = 0LL;
  v35 = v7;
  v36 = v8;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = v7 - v6;
      v10 = 2048;
      v11 = 0;
      if ( v9 < 0x800 )
        v10 = v9;
      if ( v8 )
        break;
LABEL_25:
      v7 = *((_DWORD *)this + 116);
      v6 += 2048;
      if ( v6 >= v7 )
        goto LABEL_35;
    }
    v37[0] = v6;
    v37[2] = v10 + v6;
    while ( 1 )
    {
      v12 = v8 - v11;
      v32 = 0LL;
      v33 = 0LL;
      v13 = 2048;
      v37[1] = v11;
      if ( v12 < 0x800 )
        v13 = v12;
      v31 = 0LL;
      v37[3] = v11 + v13;
      wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset((__int64 *)&v31);
      v14 = CGDISubSectionBitmapRealization::Create(
              *((_QWORD *)this + 50),
              (unsigned int)&v34,
              (unsigned int)v37,
              *((_DWORD *)this + 118),
              *((_DWORD *)this + 24),
              *((_DWORD *)this + 25),
              (__int64)&v31);
      v5 = v14;
      if ( v14 < 0 )
        break;
      v16 = v31;
      (**(void (__fastcall ***)(struct IBitmapRealization *, char *))v31)(v31, (char *)this + 108);
      if ( *((_BYTE *)this + 132) )
      {
        v19 = *((_QWORD *)v16 + 1);
        v31 = 0LL;
        v20 = CColorKeyBitmapRealization::Create(
                (struct IBitmapRealization *)((char *)v16 + *(int *)(v19 + 12) + 8),
                (CGdiSpriteBitmap *)((char *)this + 408),
                &v31);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x20Du, 0LL);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
          goto LABEL_28;
        }
        v18 = v31;
        v31 = 0LL;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
      }
      else
      {
        v17 = v16;
        v16 = 0LL;
        if ( v17 )
          v18 = (struct IBitmapRealization *)((char *)v17 + *(int *)(*((_QWORD *)v17 + 1) + 12LL) + 8);
        else
          v18 = 0LL;
      }
      v22 = (struct CComposition *)*((_QWORD *)this + 2);
      v33 = v18;
      v23 = CBitmapResource::Create(v22, v18, &v32);
      v5 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x217u, 0LL);
LABEL_28:
        if ( !v16 )
          goto LABEL_34;
        v27 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
        goto LABEL_33;
      }
      v25 = (char *)*((_QWORD *)v1 + 1);
      if ( *((char **)v1 + 2) == v25 )
      {
        std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>(
          (__int64 **)v1,
          v25,
          (__int64 *)&v32);
      }
      else
      {
        *(_QWORD *)v25 = v32;
        *((_QWORD *)v1 + 1) += 8LL;
        v32 = 0LL;
      }
      if ( v16 )
      {
        v26 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      v8 = *((_DWORD *)this + 117);
      v11 += 2048;
      if ( v11 >= v8 )
        goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1FFu, 0LL);
    if ( !v31 )
      goto LABEL_34;
    v27 = (char *)v31 + *(int *)(*((_QWORD *)v31 + 1) + 4LL) + 8;
LABEL_33:
    (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_34:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_35:
    if ( v5 < 0 )
    {
      v28 = (__int64 *)*((_QWORD *)v1 + 1);
      v29 = *(__int64 **)v1;
      if ( *(__int64 **)v1 != v28 )
      {
        do
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v29++);
        while ( v29 != v28 );
        v29 = *(__int64 **)v1;
      }
      *((_QWORD *)v1 + 1) = v29;
    }
  }
  return (unsigned int)v5;
}
