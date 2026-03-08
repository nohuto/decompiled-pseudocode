/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapRealization@@@Z @ 0x18003390C (-attach@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapReali.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021A1B0 (--$_Emplace_reallocate@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18021A388 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802ACCF8 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AD584 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  char *v1; // rdi
  __int64 *v2; // r15
  int v3; // esi
  __int64 *i; // rbx
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
  void (__fastcall **v17)(struct IBitmapRealization *, __int128 *); // rax
  struct IBitmapRealization *v18; // rdx
  __int64 v19; // rdx
  struct IBitmapRealization *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct IBitmapRealization *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  char *v26; // rdx
  char *v27; // rcx
  char *v28; // r14
  char *j; // rbx
  char *v30; // rcx
  struct IBitmapRealization *v32; // [rsp+48h] [rbp-19h] BYREF
  struct CBitmapResource *v33; // [rsp+50h] [rbp-11h] BYREF
  struct IBitmapRealization *v34; // [rsp+58h] [rbp-9h] BYREF
  __int64 v35; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v36; // [rsp+68h] [rbp+7h]
  unsigned int v37; // [rsp+6Ch] [rbp+Bh]
  _DWORD v38[4]; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v39; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (char *)this + 448;
  v2 = (__int64 *)*((_QWORD *)this + 57);
  v3 = 0;
  for ( i = (__int64 *)*((_QWORD *)this + 56); i != v2; ++i )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(i);
  v6 = 0;
  *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  v7 = *((_DWORD *)this + 106);
  v8 = *((_DWORD *)this + 107);
  v35 = 0LL;
  v36 = v7;
  v37 = v8;
  if ( v7 )
  {
    do
    {
      v9 = v7 - v6;
      v10 = 2048;
      v11 = 0;
      if ( v9 < 0x800 )
        v10 = v9;
      if ( v8 )
      {
        v38[0] = v6;
        v38[2] = v10 + v6;
        while ( 1 )
        {
          v12 = v8 - v11;
          v33 = 0LL;
          v34 = 0LL;
          v13 = 2048;
          v38[1] = v11;
          if ( v12 < 0x800 )
            v13 = v12;
          v32 = 0LL;
          v38[3] = v11 + v13;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v32);
          v14 = CGDISubSectionBitmapRealization::Create(
                  *((_QWORD *)this + 45),
                  &v35,
                  v38,
                  *((unsigned int *)this + 108),
                  *((_DWORD *)this + 32),
                  *((_DWORD *)this + 33),
                  &v32);
          v3 = v14;
          if ( v14 < 0 )
            break;
          v16 = v32;
          v17 = *(void (__fastcall ***)(struct IBitmapRealization *, __int128 *))v32;
          v39 = *((_OWORD *)this + 5);
          (*v17)(v32, &v39);
          if ( *((_BYTE *)this + 146) )
          {
            v32 = 0LL;
            if ( v16 )
              v20 = (struct IBitmapRealization *)((char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 12LL) + 8);
            else
              v20 = 0LL;
            v21 = CColorKeyBitmapRealization::Create(v20, (CGdiSpriteBitmap *)((char *)this + 368), &v32);
            v3 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1BBu, 0LL);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
LABEL_34:
              if ( !v16 )
                goto LABEL_37;
              v30 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
LABEL_36:
              (*(void (__fastcall **)(char *))(*(_QWORD *)v30 + 16LL))(v30);
              goto LABEL_37;
            }
            v23 = v32;
            v32 = 0LL;
            wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach((__int64 *)&v34, (__int64)v23);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
          }
          else
          {
            v18 = v16;
            v16 = 0LL;
            if ( v18 )
              v19 = (__int64)v18 + *(int *)(*((_QWORD *)v18 + 1) + 12LL) + 8;
            else
              v19 = 0LL;
            wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach((__int64 *)&v34, v19);
          }
          v24 = CBitmapResource::Create(*((struct CComposition **)this + 2), v34, &v33);
          v3 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1C5u, 0LL);
            goto LABEL_34;
          }
          v26 = (char *)*((_QWORD *)v1 + 1);
          if ( v26 == *((char **)v1 + 2) )
          {
            std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>(
              (char **)v1,
              v26,
              (__int64 *)&v33);
          }
          else
          {
            *(_QWORD *)v26 = v33;
            *((_QWORD *)v1 + 1) += 8LL;
            v33 = 0LL;
          }
          if ( v16 )
          {
            v27 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
          v8 = *((_DWORD *)this + 107);
          v11 += 2048;
          if ( v11 >= v8 )
            goto LABEL_29;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1ADu, 0LL);
        if ( v32 )
        {
          v30 = (char *)v32 + *(int *)(*((_QWORD *)v32 + 1) + 4LL) + 8;
          goto LABEL_36;
        }
LABEL_37:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
        goto LABEL_31;
      }
LABEL_29:
      v7 = *((_DWORD *)this + 106);
      v6 += 2048;
    }
    while ( v6 < v7 );
    if ( v3 >= 0 )
      return (unsigned int)v3;
LABEL_31:
    v28 = (char *)*((_QWORD *)v1 + 1);
    for ( j = *(char **)v1; j != v28; j += 8 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)j);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  return (unsigned int)v3;
}
