/*
 * XREFs of NtGdiExtCreatePen @ 0x1C014C760
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreatePen @ 0x1C00F2B80 (GreExtCreatePen.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        char *Src,
        unsigned int a7,
        char *a8,
        size_t Size,
        int a10,
        __int64 a11)
{
  void *v14; // rbx
  char *v15; // rdi
  __int64 Pen; // rsi
  char *v17; // rcx
  size_t v18; // r8

  v14 = 0LL;
  v15 = 0LL;
  Pen = 1LL;
  if ( a8 )
  {
    if ( a7 <= 0x9C4000 && 4 * a7 )
      v14 = (void *)Win32AllocPool(4 * a7, 1886221383LL);
    Pen = -(__int64)(v14 != 0LL) & 1;
  }
  if ( a3 == 6 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v15 = (char *)AllocFreeTmpBuffer((unsigned int)Size);
    Pen &= -(__int64)(v15 != 0LL);
  }
  if ( Pen )
  {
    if ( a8 )
    {
      v18 = 4LL * a7;
      if ( &a8[v18] < a8 || (unsigned __int64)&a8[v18] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v14, a8, v18);
    }
    if ( a3 == 6 )
    {
      v17 = &Src[(unsigned int)Size];
      if ( v17 < Src || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, Src, (unsigned int)Size);
      Src = v15;
    }
    Pen = (__int64)GreExtCreatePen(a1, a2, a3, a4, a5, (__int64)Src, a7, (int *)v14, Size, a10, a11);
  }
  if ( v15 )
    FreeTmpBuffer(v15);
  if ( v14 )
    Win32FreePool(v14);
  return Pen;
}
