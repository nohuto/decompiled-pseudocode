/*
 * XREFs of ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C008FA28
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C008D400 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C008FB00 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00CE804 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bCaptureBitmapInfo(
        struct tagBITMAPINFO *Src,
        unsigned int a2,
        size_t Size,
        const struct tagBITMAPINFO **a4)
{
  __int64 v4; // rbx
  struct tagBITMAPINFO *v8; // rax
  const struct tagBITMAPINFO *v9; // rdi
  DWORD biSize; // r8d

  v4 = (unsigned int)Size;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v8 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( (struct tagBITMAPINFO *)((char *)Src + v4) < Src || (unsigned __int64)Src + v4 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v9 = *a4;
          biSize = (*a4)->bmiHeader.biSize;
          if ( biSize >= 0x28 && (unsigned int)v4 >= biSize && (_DWORD)v4 == GreGetBitmapSizeInternal(*a4, a2, biSize) )
            return 1LL;
          FreeThreadBufferWithTag(v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
