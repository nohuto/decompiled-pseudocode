__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *lpMem,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  CBitmapLock *v11; // rsi
  const unsigned __int8 *v12; // r13
  enum WICBitmapLockFlags v13; // r12d
  __int64 v14; // rbp
  unsigned __int8 PixelFormatSize; // al
  __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned __int8 *v18; // rdi
  unsigned __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  unsigned __int8 *v24; // rbx
  __int64 v25; // r12
  unsigned int v26; // ebp
  unsigned int v27; // edi
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v35; // [rsp+F0h] [rbp+38h]

  v11 = this;
  v12 = lpMem;
  v13 = a9;
  *((_DWORD *)this + 38) = a6;
  *((_DWORD *)this + 39) = a7;
  *((_DWORD *)this + 41) = a10;
  *((_DWORD *)this + 40) = a11;
  *((_QWORD *)this + 18) = v12;
  *((_DWORD *)this + 32) = v13;
  v14 = a4;
  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a5);
  v18 = 0LL;
  if ( !PixelFormatSize || v17 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v22 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0x95u, 0LL);
    goto LABEL_13;
  }
  lpMem = 0LL;
  v19 = (((v17 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v20 = HrMalloc(v19, (unsigned int)v14, (void **)&lpMem);
  v22 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9Fu, 0LL);
    v18 = lpMem;
LABEL_13:
    operator delete(v18);
    return v22;
  }
  v18 = lpMem;
  v23 = v14 * v19;
  v35 = v14 * v19;
  if ( (v13 & 1) != 0 )
  {
    v24 = lpMem;
    if ( (_DWORD)v14 )
    {
      v25 = v14;
      v26 = a11;
      v27 = a10;
      do
      {
        ReadUnalignedScanline(v24, v12, v26, v27);
        v12 += a6;
        v24 += v19;
        --v25;
      }
      while ( v25 );
      v18 = lpMem;
      v11 = this;
      LODWORD(v14) = a4;
      v23 = v35;
      v13 = a9;
    }
  }
  v28 = CBitmapLock::HrInit(
          v11,
          (struct IBitmapUnlock *)(((unsigned __int64)a2 + 40) & -(__int64)(a2 != 0LL)),
          a3,
          (unsigned int)v14,
          a5,
          v19,
          v23,
          v18,
          v13,
          0,
          0LL);
  v22 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xCCu, 0LL);
    goto LABEL_13;
  }
  return v22;
}
