/*
 * XREFs of ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00AC054
 * Callers:
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00A97E0 (NtGdiCreateSessionMappedDIBSection.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00A9FA0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C00ABAE0 (NtGdiCreateDIBSection.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00ACA90 (NtGdiSetDIBitsToDeviceInternal.c)
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00802D8 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall bCaptureBitmapInfo(struct tagBITMAPINFO *Src, int a2, size_t Size, const struct tagBITMAPINFO **a4)
{
  __int64 v4; // rbx
  struct tagBITMAPINFO *v8; // rax
  __int64 v9; // rdx
  const struct tagBITMAPINFO *v10; // rdi
  DWORD biSize; // r8d

  v4 = (unsigned int)Size;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v8 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL, a4);
        *a4 = v8;
        if ( v8 )
        {
          if ( (struct tagBITMAPINFO *)((char *)Src + v4) < Src || (unsigned __int64)Src + v4 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v10 = *a4;
          biSize = (*a4)->bmiHeader.biSize;
          if ( biSize >= 0x28
            && (unsigned int)v4 >= biSize
            && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal(*a4, a2, biSize) )
          {
            return 1LL;
          }
          FreeThreadBufferWithTag(v10, v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
