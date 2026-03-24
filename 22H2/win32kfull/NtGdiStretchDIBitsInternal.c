/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00ADAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0080254 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        char *Src,
        unsigned int a12,
        int a13,
        size_t Size,
        SIZE_T a15,
        __int64 a16)
{
  struct tagBITMAPINFO *v16; // rbx
  unsigned int v17; // edi
  HANDLE v18; // r12
  __int64 v19; // r15
  int v20; // esi
  __int64 v21; // rdx
  unsigned int biSize; // r8d
  int v23; // r14d
  HDC v25; // [rsp+E0h] [rbp+8h]
  unsigned int v26; // [rsp+E8h] [rbp+10h]

  v26 = a2;
  v25 = a1;
  v16 = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src )
  {
    v20 = Size;
    goto LABEL_31;
  }
  v20 = Size;
  if ( !(_DWORD)Size )
  {
LABEL_31:
    v19 = 0LL;
    v23 = a15;
    goto LABEL_24;
  }
  if ( (unsigned int)(Size - 4) <= 0x270FFFC )
  {
    v16 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL, a4);
    if ( v16 )
    {
      if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, Src, (unsigned int)Size);
      biSize = v16->bmiHeader.biSize;
      if ( v16->bmiHeader.biSize >= 0x28
        && (unsigned int)Size >= biSize
        && (_DWORD)Size == (unsigned int)GreGetBitmapSizeInternal(v16, a12, biSize) )
      {
        v23 = a15;
        if ( (_DWORD)a15 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Address[(unsigned int)a15] > MmUserProbeAddress
            || &Address[(unsigned int)a15] < Address )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
        }
        v18 = MmSecureVirtualMemory(Address, (unsigned int)a15, 2u);
        if ( v18 )
          goto LABEL_23;
        goto LABEL_22;
      }
      FreeThreadBufferWithTag(v16, v21);
      v16 = 0LL;
    }
  }
  v23 = a15;
LABEL_22:
  v17 = 0;
LABEL_23:
  a2 = v26;
  a1 = v25;
LABEL_24:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(a1, a5, a6, a7, a8, a9, v19, (__int64)v16, a12, a13, v20, v23, a16);
    if ( v18 )
      MmUnsecureVirtualMemory(v18);
  }
  if ( v16 )
    FreeThreadBufferWithTag(v16, a2);
  return v17;
}
