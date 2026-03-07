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
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  unsigned int v13; // r13d
  enum DXGI_FORMAT v14; // ecx
  void *v15; // rbx
  unsigned int RequiredBufferSize; // r8d
  int v17; // r11d
  struct IUnknown *v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  void *v24; // [rsp+30h] [rbp-59h]
  int v26; // [rsp+64h] [rbp-25h]
  struct WICRect v28; // [rsp+70h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp-1h] BYREF

  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v30 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = CBitmap::HrCheckPixelRect((char *)this - 24, a2, &v30);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Eu, 0LL);
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 24));
  v10 = v30 * PixelFormatSize;
  v11 = ((_BYTE)v30 * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 36);
    v13 = DWORD2(v30) - v30;
    v28.X = 0;
    v28.Y = 0;
    v26 = HIDWORD(v30) - DWORD1(v30);
    v28.Height = HIDWORD(v30) - DWORD1(v30);
    v14 = *((_DWORD *)this + 24);
    v28.Width = DWORD2(v30) - v30;
    v15 = (void *)(*((_QWORD *)this + 17) + v10 / 8 + (__int64)(int)(DWORD1(v30) * v12));
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v28);
    if ( v11 )
    {
      LODWORD(v24) = *((_DWORD *)this + 36);
      v22 = CBitmap::HrLockUnaligned(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v26,
              (CSystemMemoryBitmap *)((char *)this + 96),
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
      if ( this == (CSystemMemoryBitmap *)24 )
        v18 = 0LL;
      else
        v18 = (struct IUnknown *)((char *)this + *(int *)(*((_QWORD *)this - 2) + 4LL) - 16);
      v19 = CBitmap::HrLock(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v26,
              (CSystemMemoryBitmap *)((char *)this + 96),
              *((_DWORD *)this + 36),
              RequiredBufferSize,
              v15,
              a3,
              a4,
              0,
              v18);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x91u, 0LL);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return (unsigned int)v8;
}
