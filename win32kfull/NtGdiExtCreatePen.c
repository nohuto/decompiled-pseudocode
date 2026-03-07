__int64 __fastcall NtGdiExtCreatePen(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        unsigned int a7,
        char *Src,
        size_t Size,
        int a10,
        __int64 a11)
{
  unsigned int v11; // r12d
  int v12; // r15d
  int v13; // r13d
  void *v14; // rbx
  char *v15; // rdi
  __int64 Pen; // rsi
  size_t v17; // r8
  char *v18; // rcx

  v11 = a4;
  v12 = a3;
  v13 = a2;
  v14 = 0LL;
  v15 = 0LL;
  Pen = 1LL;
  if ( Src )
  {
    if ( a7 <= 0x9C4000 && 4 * a7 )
      v14 = (void *)Win32AllocPool(4 * a7, 1886221383LL, a3, a4);
    Pen = -(__int64)(v14 != 0LL) & 1;
  }
  if ( v12 == 6 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v15 = (char *)AllocFreeTmpBuffer((unsigned int)Size);
    a2 = -(__int64)(v15 != 0LL);
    Pen &= a2;
  }
  if ( Pen )
  {
    if ( Src )
    {
      v17 = 4LL * a7;
      if ( &Src[v17] < Src || (unsigned __int64)&Src[v17] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v14, Src, v17);
    }
    if ( v12 == 6 )
    {
      v18 = &a6[(unsigned int)Size];
      if ( v18 < a6 || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, a6, (unsigned int)Size);
      a6 = v15;
    }
    Pen = GreExtCreatePen(a1, v13, v12, v11, a5, (__int64)a6, a7, (int *)v14, Size, a10, a11);
  }
  if ( v15 )
    FreeTmpBuffer(v15, a2, a3);
  if ( v14 )
    Win32FreePool(v14);
  return Pen;
}
