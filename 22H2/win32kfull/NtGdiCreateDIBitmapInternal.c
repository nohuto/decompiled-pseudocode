/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C00A9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00ABD84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C84 (GreCreateDIBitmapComp.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a7,
        size_t a8,
        SIZE_T Size)
{
  struct tagBITMAPINFO *v11; // rsi
  __int64 v12; // rdi
  HANDLE v13; // r14
  char *v14; // rdx
  __int64 DIBitmapReal; // rax
  struct tagBITMAPINFO *v17; // [rsp+78h] [rbp-50h] BYREF
  HANDLE v18; // [rsp+80h] [rbp-48h]
  unsigned int v19; // [rsp+D8h] [rbp+10h]

  v19 = a2;
  v11 = 0LL;
  v17 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v18 = 0LL;
  if ( Src && (_DWORD)a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src, a7, (unsigned int)a8, &v17) )
      goto LABEL_10;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = &Address[(unsigned int)Size];
        if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < Address )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v13 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      v18 = v13;
      if ( !v13 )
LABEL_10:
        v12 = 0LL;
    }
    v11 = v17;
    a2 = v19;
  }
  if ( v12 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(a1, a7, a8, Size, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, (__int64)v11, a7, a8, Size);
    v12 = DIBitmapReal;
  }
  if ( v11 )
    FreeThreadBufferWithTag(v11, a2);
  if ( v13 )
    MmUnsecureVirtualMemory(v13);
  return v12;
}
