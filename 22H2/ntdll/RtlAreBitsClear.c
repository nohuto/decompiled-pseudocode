/*
 * XREFs of RtlAreBitsClear @ 0x1800EB6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  bool result; // al
  __int64 v5; // rcx
  char v6; // r11
  int *v7; // rdx
  int v8; // ebx
  int *v9; // r10
  int *v11; // rdx

  if ( a2 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest(*(const signed __int32 **)(a1 + 8), a2);
    return 0;
  }
  if ( *(_DWORD *)a1 - a2 < a3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2 + a3 - 1;
  v7 = (int *)(v5 + 4 * ((unsigned __int64)a2 >> 5));
  v8 = *v7;
  v9 = (int *)(v5 + 4 * ((unsigned __int64)(a2 + a3 - 1) >> 5));
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - a3) << a2)) == 0;
  if ( (v8 & (-1 << a2)) != 0 )
    return 0;
  v11 = v7 + 1;
  if ( v11 == v9 )
    return ((0xFFFFFFFF >> ~v6) & *v11) == 0;
  result = 0;
  while ( !*v11 )
  {
    if ( ++v11 == v9 )
      return ((0xFFFFFFFF >> ~v6) & *v11) == 0;
  }
  return result;
}
