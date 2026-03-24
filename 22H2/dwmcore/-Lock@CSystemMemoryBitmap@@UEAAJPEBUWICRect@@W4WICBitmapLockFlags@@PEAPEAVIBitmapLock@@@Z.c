/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18003BD64 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003BDA4 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003C06C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18003C2CC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180217D88 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned __int8 PixelFormatSize; // al
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  enum DXGI_FORMAT v14; // ecx
  void *v15; // rbx
  unsigned int RequiredBufferSize; // eax
  int v17; // r11d
  const struct PixelFormatInfo *v18; // r9
  int v19; // eax
  unsigned int v20; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  void *v24; // [rsp+30h] [rbp-59h]
  int v26; // [rsp+64h] [rbp-25h]
  WICRect v28; // [rsp+70h] [rbp-19h] BYREF
  char *v29; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp-1h] BYREF

  v29 = (char *)this + 104;
  v30 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = CBitmap::HrCheckPixelRect((char *)this - 32, a2, &v30);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Eu, 0LL);
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 42));
  v10 = v30 * PixelFormatSize;
  v11 = ((_BYTE)v30 * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 60);
    v13 = DWORD2(v30) - v30;
    v28.X = 0;
    v28.Y = 0;
    v26 = HIDWORD(v30) - DWORD1(v30);
    v28.Height = HIDWORD(v30) - DWORD1(v30);
    v14 = *((_DWORD *)this + 42);
    v28.Width = DWORD2(v30) - v30;
    v15 = (void *)(*((_QWORD *)this + 29) + v10 / 8 + (__int64)(int)(DWORD1(v30) * v12));
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v28);
    v18 = (CSystemMemoryBitmap *)((char *)this + 168);
    if ( v11 )
    {
      LODWORD(v24) = *((_DWORD *)this + 60);
      v22 = CBitmap::HrLockUnaligned(
              (CSystemMemoryBitmap *)((char *)this - 32),
              v13,
              v26,
              v18,
              v11,
              DWORD2(v30) * v17 - v10,
              v24,
              RequiredBufferSize,
              v15,
              a3,
              a4);
      v8 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xA5u, 0LL);
    }
    else
    {
      v19 = CBitmap::HrLock(
              (CSystemMemoryBitmap *)((char *)this - 32),
              v13,
              v26,
              v18,
              *((_DWORD *)this + 60),
              RequiredBufferSize,
              v15,
              a3,
              a4,
              0,
              (struct IUnknown *)this - 4);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x91u, 0LL);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return (unsigned int)v8;
}
