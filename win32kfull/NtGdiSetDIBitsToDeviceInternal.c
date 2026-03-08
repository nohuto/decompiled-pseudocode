/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C008D600
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x1C008D8A4 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00CE804 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        char *Src,
        char a12,
        unsigned int a13,
        size_t Size,
        int a15,
        __int64 a16)
{
  struct tagBITMAPINFO *v16; // rdi
  int v17; // r15d
  unsigned int biSize; // r8d
  int v19; // eax
  unsigned int v20; // esi
  __int64 inited; // rax
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int16 v26; // [rsp+A8h] [rbp-60h]
  _BYTE v27[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v28; // [rsp+C8h] [rbp-40h]

  v16 = 0LL;
  memset(v27, 0, sizeof(v27));
  v28 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v17 = a12 & 3;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v16 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        if ( v16 )
        {
          if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v16, Src, (unsigned int)Size);
          biSize = v16->bmiHeader.biSize;
          if ( v16->bmiHeader.biSize >= 0x28
            && (unsigned int)Size >= biSize
            && (_DWORD)Size == GreGetBitmapSizeInternal(v16, v17, biSize) )
          {
            v19 = 1;
            goto LABEL_14;
          }
          FreeThreadBufferWithTag(v16);
          v16 = 0LL;
        }
      }
    }
  }
  v19 = 0;
LABEL_14:
  v20 = v19 != 0;
  if ( v20 == 1 )
  {
    if ( a10 )
    {
      inited = umptr_r<unsigned char>::init_probe(v27, a10, a13, 4LL);
      v23 = *(_QWORD *)inited;
      v24 = *(_QWORD *)(inited + 8);
      v25 = *(_QWORD *)(inited + 16);
      v26 = *(_WORD *)(inited + 24);
      v20 = v23 != 0;
    }
    if ( v20 == 1 )
      v20 = GreSetDIBitsToDeviceInternalImpl(a1, a5, a6, a7, a8, a9, (__int64)&v23, (__int64)v16, v17, Size, a15, a16);
  }
  if ( v16 )
    FreeThreadBufferWithTag(v16);
  return v20;
}
