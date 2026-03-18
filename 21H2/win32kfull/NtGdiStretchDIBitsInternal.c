/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C0029900
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C002BBA0 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        HDC a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a12,
        int a13,
        size_t a14,
        SIZE_T Size,
        __int64 a16)
{
  HDC v16; // r10
  struct tagBITMAPINFO *v17; // r14
  unsigned int v18; // ebx
  HANDLE v19; // r15
  __int64 v20; // rdi
  int v21; // esi
  struct tagBITMAPINFO *v23; // [rsp+88h] [rbp-50h] BYREF
  HANDLE v24; // [rsp+90h] [rbp-48h]
  int v26; // [rsp+E8h] [rbp+10h]

  v26 = a2;
  v16 = a1;
  v17 = 0LL;
  v23 = 0LL;
  v18 = 1;
  v19 = 0LL;
  v24 = 0LL;
  v20 = (__int64)Address;
  if ( !Address || !Src || !(_DWORD)a14 )
  {
    v20 = 0LL;
    v21 = Size;
    goto LABEL_16;
  }
  if ( (unsigned int)bCaptureBitmapInfo(Src, a12, (unsigned int)a14, &v23) )
  {
    v21 = Size;
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v24 = v19;
    if ( v19 )
      goto LABEL_15;
  }
  else
  {
    v21 = Size;
  }
  v18 = 0;
LABEL_15:
  v17 = v23;
  a2 = v26;
  v16 = a1;
LABEL_16:
  if ( v18 )
  {
    v18 = GreStretchDIBitsInternal(v16, a2, a5, a6, a7, a8, a9, v20, (__int64)v17, a12, a13, a14, v21, a16);
    if ( v19 )
      MmUnsecureVirtualMemory(v19);
  }
  if ( v17 )
    FreeThreadBufferWithTag(v17);
  return v18;
}
