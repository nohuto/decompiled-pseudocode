__int64 __fastcall CSystemMemoryBitmap::HrInit(
        void **this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v11 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v12 = HrMalloc(v11, a3, this + 20);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x144u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 26) = a2;
      *((_DWORD *)this + 27) = a3;
      this[15] = *(void **)a4;
      *((_DWORD *)this + 32) = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 42) = v11;
      if ( a5 )
        memset_0(this[20], 0, a3 * (unsigned int)v11);
    }
  }
  else
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0x13Eu, 0LL);
  }
  return v14;
}
