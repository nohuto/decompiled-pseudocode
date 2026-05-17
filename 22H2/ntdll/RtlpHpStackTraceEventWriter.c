/*
 * XREFs of RtlpHpStackTraceEventWriter @ 0x1801090C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x180108738 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x1801087B4 (RtlpHpStackDbLogStackDbSnapshot.c)
 */

__int64 __fastcall RtlpHpStackTraceEventWriter(char *Src, size_t Size, int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rbx
  int v11; // r8d

  v6 = Size;
  while ( v6 )
  {
    v7 = (unsigned int)a3[2];
    v8 = (_DWORD)v7 == 0x4000;
    if ( (unsigned int)v7 < 0x4000 )
    {
      v9 = 0x4000 - v7;
      if ( 0x4000 - (int)v7 >= v6 )
        v9 = v6;
      v10 = v9;
      memmove((char *)a3 + v7 + 16, Src, v9);
      a3[2] += v10;
      v6 -= v10;
      a3[3] += v10;
      Src += v10;
      v8 = a3[2] == 0x4000;
    }
    if ( v8 )
    {
      RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, 0x4000, (__int64)(a3 + 4));
      a3[2] = 0;
      memset(a3 + 4, 0, 0x4000uLL);
    }
  }
  if ( !Size )
  {
    v11 = a3[2];
    if ( v11 )
    {
      RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, v11, (__int64)(a3 + 4));
      a3[2] = 0;
      memset(a3 + 4, 0, 0x4000uLL);
    }
    RtlpHpStackDbLogStackDbEnd(*a3, a3[3]);
  }
  return 0LL;
}
