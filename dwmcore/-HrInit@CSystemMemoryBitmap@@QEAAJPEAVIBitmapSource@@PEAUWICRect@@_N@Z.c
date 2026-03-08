/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18027DD60
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x180277498 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18027777C (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B211C (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x18027E218 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rax
  void *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-48h]
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v7 = inited;
    if ( inited >= 0 )
    {
      PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 30));
      v10 = (unsigned int *)((char *)this + 104);
      if ( PixelFormatSize && *v10 <= 0x7FFFFFF8u / PixelFormatSize )
      {
        v7 = 0;
        v11 = (((*v10 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      }
      else
      {
        v7 = -2147024362;
        v11 = 0;
      }
      *((_DWORD *)this + 42) = v11;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x1E8u, 0LL);
        goto LABEL_17;
      }
      inited = HrMalloc(v11, *((unsigned int *)this + 27), (void **)this + 20);
      v7 = inited;
      if ( inited >= 0 )
      {
        v12 = *v10;
        v13 = *((_DWORD *)this + 27);
        v14 = *((unsigned int *)this + 42);
        v19[0] = 0;
        v19[1] = 0;
        v19[2] = v12;
        v15 = *(_QWORD *)a2;
        v19[3] = v13;
        inited = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v15 + 24))(
                   a2,
                   v19,
                   v14,
                   (unsigned int)(v14 * v13),
                   *((_QWORD *)this + 20));
        v7 = inited;
        if ( inited >= 0 )
          return (unsigned int)v7;
        v18 = 515;
      }
      else
      {
        v18 = 496;
      }
    }
    else
    {
      v18 = 481;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inited, v18, 0LL);
  }
  else
  {
    v7 = -2147024809;
  }
LABEL_17:
  v16 = (void *)*((_QWORD *)this + 20);
  if ( v16 )
  {
    operator delete(v16);
    *((_QWORD *)this + 20) = 0LL;
  }
  return (unsigned int)v7;
}
