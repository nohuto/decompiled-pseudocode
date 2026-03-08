/*
 * XREFs of CacheRGBToXYZ @ 0x1C0256490
 * Callers:
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0019A58 (ComputeChecksum.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     MulFD6 @ 0x1C014B146 (MulFD6.c)
 */

__int64 __fastcall CacheRGBToXYZ(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v7; // eax
  _DWORD *v8; // r10
  const void *v9; // rdx
  unsigned int v11; // r12d
  int *v12; // rdi
  unsigned int v13; // r15d
  int v14; // r13d
  int v15; // esi
  int v16; // ebp
  int v17; // ebx
  __int64 v18; // [rsp+28h] [rbp-40h]

  v4 = a4 + 124;
  v7 = ComputeChecksum((char *)(a4 + 124), 0x4358595Au, 0x24u);
  v9 = *(const void **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 == v7 )
  {
    memmove(a2, v9, *(unsigned __int16 *)(a1 + 18));
    return 0LL;
  }
  else
  {
    v11 = *(unsigned __int16 *)(a1 + 16);
    v12 = (int *)(v4 + 24);
    *v8 = v7;
    v18 = 3LL;
    do
    {
      v13 = 0;
      v14 = *(v12 - 6);
      v15 = *(v12 - 3);
      v16 = *v12;
      do
      {
        v17 = DivFD6(v13, v11);
        *a2 = MulFD6(v14, v17);
        a2[1] = MulFD6(v15, v17);
        a2[2] = MulFD6(v16, v17);
        ++v13;
        a2 += 3;
      }
      while ( v13 <= v11 );
      ++v12;
      --v18;
    }
    while ( v18 );
    return a1;
  }
}
