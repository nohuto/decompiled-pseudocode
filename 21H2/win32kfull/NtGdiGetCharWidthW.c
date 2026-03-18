/*
 * XREFs of NtGdiGetCharWidthW @ 0x1C013B640
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharWidthW @ 0x1C013B81C (GreGetCharWidthW.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, __int64 a2, unsigned int a3, const void *a4, int a5, char *a6)
{
  __int64 v7; // rdi
  unsigned int CharWidthW; // r14d
  const void *v9; // rsi
  void *v10; // rbx
  int v11; // r15d
  ULONG64 v12; // rcx
  size_t v13; // r8

  v7 = a3;
  CharWidthW = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !a3 )
    return 0LL;
  if ( a4 )
  {
    v11 = 1;
    if ( a3 <= 0x1388000 )
    {
      if ( 2 * a3 )
        v10 = (void *)Win32AllocPool(2 * a3, 1886221383LL);
    }
  }
  if ( !v11 || v10 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v9 = (const void *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v9 )
    {
      if ( v11 )
      {
        v12 = (ULONG64)a4 + 2 * v7;
        if ( v12 < (unsigned __int64)a4 || v12 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, a4, 2 * v7);
      }
      CharWidthW = GreGetCharWidthW(a1, a5, (__int64)v9);
      if ( CharWidthW )
      {
        v13 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v13] > MmUserProbeAddress || &a6[v13] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v9, v13);
      }
      FreeTmpBuffer(v9);
    }
    if ( v11 )
      Win32FreePool(v10);
  }
  return CharWidthW;
}
