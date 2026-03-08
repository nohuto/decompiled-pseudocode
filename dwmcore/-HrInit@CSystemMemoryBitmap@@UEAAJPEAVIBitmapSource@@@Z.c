/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x18027DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x18027E218 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  __int64 v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  void *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-48h]
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v6 = inited;
    if ( inited >= 0 )
    {
      PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 30));
      v9 = (unsigned int *)((char *)this + 104);
      if ( PixelFormatSize && *v9 <= 0x7FFFFFF8u / PixelFormatSize )
      {
        v6 = 0;
        v10 = (((*v9 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      }
      else
      {
        v6 = -2147024362;
        v10 = 0;
      }
      *((_DWORD *)this + 42) = v10;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, 0x16Au, 0LL);
        goto LABEL_17;
      }
      inited = HrMalloc(v10, *((unsigned int *)this + 27), (void **)this + 20);
      v6 = inited;
      if ( inited >= 0 )
      {
        v11 = *v9;
        v12 = *((_DWORD *)this + 27);
        v13 = *((unsigned int *)this + 42);
        v14 = *((_DWORD *)this + 42);
        v19[0] = 0;
        v19[1] = 0;
        v19[2] = v11;
        v15 = *(_QWORD *)a2;
        v19[3] = v12;
        inited = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v15 + 24))(
                   a2,
                   v19,
                   v13,
                   (unsigned int)(v12 * v14),
                   *((_QWORD *)this + 20));
        v6 = inited;
        if ( inited >= 0 )
          return (unsigned int)v6;
        v18 = 380;
      }
      else
      {
        v18 = 370;
      }
    }
    else
    {
      v18 = 356;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, v18, 0LL);
  }
  else
  {
    v6 = -2147024809;
  }
LABEL_17:
  v16 = (void *)*((_QWORD *)this + 20);
  if ( v16 )
  {
    operator delete(v16);
    *((_QWORD *)this + 20) = 0LL;
  }
  return (unsigned int)v6;
}
