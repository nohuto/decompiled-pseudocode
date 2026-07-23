/*
 * XREFs of RtlAreBitsSetEx @ 0x140586F00
 * Callers:
 *     MiCheckHotPatchApplicable @ 0x1408C9900 (MiCheckHotPatchApplicable.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSetEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rcx
  char v6; // bl
  __int64 *v7; // rdx
  __int64 v8; // r10
  __int64 *v9; // r11

  if ( a2 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  if ( *(_QWORD *)a1 - a2 < a3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2 + a3 - 1;
  v7 = (__int64 *)(v5 + 8 * (a2 >> 6));
  v8 = *v7;
  v9 = (__int64 *)(v5 + 8 * ((a2 + a3 - 1) >> 6));
  if ( v7 == v9 )
    return ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2) & v8) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2;
  if ( ((-1LL << a2) & v8) != -1LL << a2 )
    return 0;
  while ( ++v7 != v9 )
  {
    if ( *v7 != -1 )
      return 0;
  }
  return ((0xFFFFFFFFFFFFFFFFuLL >> ~v6) & *v7) == 0xFFFFFFFFFFFFFFFFuLL >> ~v6;
}
