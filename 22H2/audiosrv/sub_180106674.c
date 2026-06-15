/*
 * XREFs of sub_180106674 @ 0x180106674
 * Callers:
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 * Callees:
 *     sub_180106A68 @ 0x180106A68 (sub_180106A68.c)
 */

__int64 __fastcall sub_180106674(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = a1 + 232;
  if ( *(_QWORD *)(a1 + 240) && (v4 = 0LL, *(_DWORD *)(a1 + 248)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v4);
      if ( v5 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v2 + 16) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  result = 0LL;
  *(_QWORD *)(v2 + 72) = v5;
  if ( v5 )
    result = sub_180106A68(v2);
  while ( result && *(_QWORD *)(result + 40) != a2 )
  {
    v7 = *(_QWORD *)(v2 + 72);
    result = 0LL;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 104);
      if ( !v8 )
      {
        v9 = (unsigned int)(*(_DWORD *)(v7 + 112) % *(_DWORD *)(v2 + 16) + 1);
        do
        {
          if ( (unsigned int)v9 >= *(_DWORD *)(v2 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v9) )
            v8 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v9);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( !v8 );
      }
      *(_QWORD *)(v2 + 72) = v8;
      result = v7 + 8;
    }
  }
  return result;
}
