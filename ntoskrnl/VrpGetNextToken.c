/*
 * XREFs of VrpGetNextToken @ 0x1406C24E8
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1406C1A34 (VrpPreOpenOrCreate.c)
 *     VrpCountPathComponents @ 0x1406C1E90 (VrpCountPathComponents.c)
 *     VrpTranslatePath @ 0x1406C1EF8 (VrpTranslatePath.c)
 *     VrpComparePath @ 0x1406C2400 (VrpComparePath.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r10
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx

  *(_WORD *)a3 = 0;
  v5 = *a2;
  if ( 2 * *a2 < (unsigned __int64)*a1 )
  {
    v7 = *a2;
    do
    {
      if ( *(_WORD *)(2 * v7 + *((_QWORD *)a1 + 1)) != 92 )
        break;
      v5 = v7 + 1;
      v15 = 2 * v7 + 2;
      *a2 = ++v7;
    }
    while ( v15 < *a1 );
  }
  *(_QWORD *)(a3 + 8) = *((_QWORD *)a1 + 1) + 2 * v5;
  v8 = *a2;
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
      v8 = *a2 + 1;
      *a2 = v8;
      v10 = v8;
      v11 = *a1;
      LOWORD(v9) = *a1;
    }
    while ( 2 * v8 < v11 );
  }
  v12 = 2 * v8;
  for ( result = (unsigned __int16)v9; v12 < result; result = *a1 )
  {
    result = *((_QWORD *)a1 + 1);
    v14 = 2 * v8;
    if ( *(_WORD *)(2 * v8 + result) != 92 )
      break;
    *a2 = ++v8;
    v12 = v14 + 2;
  }
  return result;
}
