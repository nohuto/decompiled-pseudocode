/*
 * XREFs of PipSortDeviceObjectList @ 0x140862464
 * Callers:
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 * Callees:
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     PipVisitDeviceObjectListEntry @ 0x140862510 (PipVisitDeviceObjectListEntry.c)
 */

__int64 __fastcall PipSortDeviceObjectList(unsigned int **a1)
{
  __int64 v1; // r11
  size_t v3; // rbx
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = **a1;
  v4 = *a1 + 4;
  if ( (_DWORD)v3 )
  {
    v5 = *a1 + 8;
    v6 = (unsigned int)v3;
    do
    {
      *v5 &= ~2u;
      v5 += 6;
      --v6;
    }
    while ( v6 );
  }
  v9 = 1;
  v7 = v4 + 4;
  if ( (_DWORD)v3 )
  {
    do
    {
      if ( (*v7 & 4) != 0 )
        PipVisitDeviceObjectListEntry(&v4[6 * v1], *a1, &v9);
      v1 = (unsigned int)(v1 + 1);
      v7 += 6;
    }
    while ( (unsigned int)v1 < (unsigned int)v3 );
  }
  qsort(v4, v3, 0x18uLL, (int (__cdecl *)(const void *, const void *))PipSortDevicesByOrdinal);
  return 0LL;
}
