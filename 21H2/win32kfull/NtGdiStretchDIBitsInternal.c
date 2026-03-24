/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00ADDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00802D8 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
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
  void *v18; // rsi
  __int64 v19; // r15
  int v20; // r14d
  ULONG64 v21; // rdx
  unsigned int biSize; // r8d
  char *v23; // rcx
  int v24; // r12d
  HANDLE v25; // rax
  __int64 v26; // rcx
  HDC v28; // [rsp+E0h] [rbp+8h]
  unsigned int v29; // [rsp+E8h] [rbp+10h]

  v29 = a2;
  v28 = a1;
  v16 = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src )
  {
    v20 = Size;
    goto LABEL_28;
  }
  v20 = Size;
  if ( !(_DWORD)Size )
  {
LABEL_28:
    v19 = 0LL;
    v24 = a15;
    goto LABEL_29;
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
        v24 = a15;
        if ( (_DWORD)a15 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = &Address[(unsigned int)a15];
          v21 = MmUserProbeAddress;
          if ( (unsigned __int64)v23 > MmUserProbeAddress || v23 < Address )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v23, v21) )
          v25 = (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)a15, 2LL);
        else
          v25 = MmSecureVirtualMemory(Address, (unsigned int)a15, 2u);
        v18 = v25;
        if ( v25 )
          goto LABEL_26;
        goto LABEL_25;
      }
      FreeThreadBufferWithTag(v16, v21);
      v16 = 0LL;
    }
  }
  v24 = a15;
LABEL_25:
  v17 = 0;
LABEL_26:
  a2 = v29;
  a1 = v28;
LABEL_29:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(a1, a5, a6, a7, a8, a9, v19, (__int64)v16, a12, a13, v20, v24, a16);
    if ( v18 )
    {
      if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v26, a2) )
        GrepUnsecureVirtualMemory(v18);
      else
        MmUnsecureVirtualMemory(v18);
    }
  }
  if ( v16 )
    FreeThreadBufferWithTag(v16, a2);
  return v17;
}
