/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180217B4C
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802175F8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802177A0 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003C06C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  INT *v3; // rbp
  unsigned int *v5; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  float v18; // xmm1_4
  double v20; // [rsp+30h] [rbp-48h] BYREF
  double v21[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (INT *)((char *)this + 188);
  v5 = (unsigned int *)((char *)this + 184);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 8LL))(
         a2,
         (char *)this + 184,
         (char *)this + 188);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x355u, 0LL);
  if ( a3 )
  {
    *v5 = a3->Width;
    *v3 = a3->Height;
  }
  v11 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, double *))a2)(a2, v21);
  *((_QWORD *)this + 25) = *(_QWORD *)v11;
  *((_DWORD *)this + 52) = *(_DWORD *)(v11 + 8);
  if ( v10 >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 50));
    if ( PixelFormatSize )
    {
      if ( *v5 >= 0x7FFFFFFFu / PixelFormatSize )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(PixelFormatSize, 0LL, 0, -2147024362, 0x36Fu, 0LL);
      }
      if ( v10 >= 0 )
      {
        v13 = GetPixelFormatSize(*((_DWORD *)this + 50));
        if ( v13 && *v5 <= 0x7FFFFFF8u / v13 )
        {
          v10 = 0;
          v14 = (((*v5 * v13 + 7) >> 3) + 3) & 0xFFFFFFFC;
          if ( *v3 && (unsigned int)v14 >= 0x7FFFFFFFu / *v3 )
          {
            v10 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x382u, 0LL);
          }
          if ( v10 >= 0 )
          {
            v15 = *(_QWORD *)a2;
            v20 = 0.0;
            v21[0] = 0.0;
            v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *, double *))(v15 + 16))(a2, &v20, v21);
            v10 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x38Cu, 0LL);
            v18 = v21[0];
            *((float *)this + 48) = v20;
            *((float *)this + 49) = v18;
          }
        }
        else
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0x37Cu, 0LL);
        }
      }
    }
    else
    {
      v10 = -2003292409;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292409, 0x36Bu, 0LL);
    }
  }
  return (unsigned int)v10;
}
