/*
 * XREFs of NtGdiGetCharWidthW @ 0x1C00A2720
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     GreGetCharWidthW @ 0x1C00A28E4 (GreGetCharWidthW.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, __int64 a2, unsigned int a3, const void *a4, int a5, char *a6)
{
  __int64 v7; // rbx
  unsigned int CharWidthW; // esi
  const void *v9; // rdi
  void *v10; // r15
  int v11; // r14d
  ULONG64 v13; // rcx
  size_t v14; // r8

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
      v10 = PALLOCMEM2(2 * a3, 1886221383LL, 0);
  }
  if ( !v11 || v10 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v9 = (const void *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v9 )
    {
      if ( v11 )
      {
        v13 = (ULONG64)a4 + 2 * v7;
        if ( v13 < (unsigned __int64)a4 || v13 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, a4, 2 * v7);
      }
      CharWidthW = GreGetCharWidthW(a1, a5, (__int64)v9);
      if ( CharWidthW )
      {
        v14 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v14] > MmUserProbeAddress || &a6[v14] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v9, v14);
      }
      FreeTmpBuffer(v9);
    }
    if ( v11 )
      Win32FreePool(v10);
  }
  return CharWidthW;
}
