/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x18027E218
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18027DD60 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x18027DF00 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  INT *v3; // rbp
  unsigned int *v5; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  float v19; // xmm1_4
  unsigned int v21; // [rsp+20h] [rbp-58h]
  double v22; // [rsp+30h] [rbp-48h] BYREF
  double v23[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (INT *)((char *)this + 108);
  v5 = (unsigned int *)((char *)this + 104);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 8LL))(
         a2,
         (char *)this + 104,
         (char *)this + 108);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x241u, 0LL);
  if ( a3 )
  {
    *v5 = a3->Width;
    *v3 = a3->Height;
  }
  v11 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, double *))a2)(a2, v23);
  *((_QWORD *)this + 15) = *(_QWORD *)v11;
  *((_DWORD *)this + 32) = *(_DWORD *)(v11 + 8);
  if ( (v10 & 0x80000000) == 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 30));
    if ( !PixelFormatSize )
    {
      v10 = -2003292409;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003292409, 0x257u, 0LL);
      return v10;
    }
    if ( *v5 >= 0x7FFFFFFFu / PixelFormatSize )
    {
      v21 = 603;
LABEL_19:
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, v21, 0LL);
      return v10;
    }
    v14 = GetPixelFormatSize(*((_DWORD *)this + 30));
    if ( !v14 || *v5 > 0x7FFFFFF8u / v14 )
    {
      v21 = 616;
      goto LABEL_19;
    }
    if ( *v3 && ((((*v5 * v14 + 7) >> 3) + 3) & 0xFFFFFFFC) >= v15 / *v3 )
    {
      v21 = 622;
      goto LABEL_19;
    }
    v16 = *(_QWORD *)a2;
    v22 = 0.0;
    v23[0] = 0.0;
    v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *, double *))(v16 + 16))(a2, &v22, v23);
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x278u, 0LL);
    v19 = v23[0];
    *((float *)this + 28) = v22;
    *((float *)this + 29) = v19;
  }
  return v10;
}
