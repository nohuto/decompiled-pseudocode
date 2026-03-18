/*
 * XREFs of VrpGetNextToken @ 0x14077EBE0
 * Callers:
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x14077E168 (VrpPreOpenOrCreate.c)
 *     VrpCountPathComponents @ 0x14077E5C0 (VrpCountPathComponents.c)
 *     VrpTranslatePath @ 0x14077E628 (VrpTranslatePath.c)
 *     VrpComparePath @ 0x14077EAF0 (VrpComparePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  *(_WORD *)a3 = 0;
  v5 = *a2;
  if ( 2 * v5 < (unsigned __int64)*a1 )
  {
    v7 = v5;
    do
    {
      if ( *(_WORD *)(2 * v7 + *((_QWORD *)a1 + 1)) != 92 )
        break;
      v5 = v7 + 1;
      v13 = 2 * v7 + 2;
      *a2 = ++v7;
    }
    while ( v13 < *a1 );
  }
  *(_QWORD *)(a3 + 8) = *((_QWORD *)a1 + 1) + 2 * v5;
  result = *a2;
  v9 = *a1;
  if ( 2 * *a2 < v9 )
  {
    v10 = *a2;
    LOWORD(v11) = *a1;
    do
    {
      LOWORD(v9) = v11;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v10) == 92 )
        break;
      *(_WORD *)a3 += 2;
      result = *a2 + 1;
      *a2 = result;
      v10 = result;
      v11 = *a1;
      LOWORD(v9) = *a1;
    }
    while ( 2 * result < v11 );
  }
  if ( 2 * result < (unsigned __int64)(unsigned __int16)v9 )
  {
    do
    {
      v12 = 2 * result;
      if ( *(_WORD *)(2 * result + *((_QWORD *)a1 + 1)) != 92 )
        break;
      *a2 = ++result;
    }
    while ( v12 + 2 < (unsigned __int64)*a1 );
  }
  return result;
}
