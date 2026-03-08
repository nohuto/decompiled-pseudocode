/*
 * XREFs of RtlpAddToMergedRange @ 0x14081F7E4
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x14081F234 (RtlpDeleteFromMergedRange.c)
 *     RtlpAddIntersectingRanges @ 0x14081F70C (RtlpAddIntersectingRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAddToMergedRange(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 *v5; // r10
  char v6; // si
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 **v17; // rax
  unsigned __int64 v18; // rax
  char v19; // al
  __int64 v21; // rax

  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = *((_BYTE *)a2 + 33) & 1;
  v9 = (unsigned __int64 *)(v4 - 40);
  if ( v3 != v4 )
  {
    v10 = *a2;
    do
    {
      v11 = *v9;
      v12 = v10 < *v9;
      if ( v10 > *v9 )
      {
        v13 = *v9;
        v14 = v10;
        if ( v9[1] < v10 )
          goto LABEL_5;
        v12 = v10 < v11;
      }
      if ( !v12 || (v13 = *v9, v14 = v10, a2[1] >= v11) )
      {
        if ( !v6 || (v13 = *v9, v14 = v10, (*((_BYTE *)v9 + 33) & 1) == 0) )
        {
          if ( (a3 & 1) == 0 )
            return 3221226114LL;
          *((_BYTE *)v9 + 33) |= 2u;
          v10 = *a2;
          *((_BYTE *)a2 + 33) |= 2u;
          v14 = v10;
          v13 = *v9;
        }
      }
LABEL_5:
      if ( !v5 && v13 > v14 )
        v5 = (__int64 *)v9[6];
      v15 = v9[5];
      v9 = (unsigned __int64 *)(v15 - 40);
    }
    while ( v3 != v15 );
  }
  v16 = a2 + 5;
  if ( v5 )
  {
    v21 = *v5;
    *v16 = *v5;
    a2[6] = (__int64)v5;
    *(_QWORD *)(v21 + 8) = v16;
    *v5 = (__int64)v16;
  }
  else
  {
    v17 = *(__int64 ***)(v3 + 8);
    if ( *v17 != (__int64 *)v3 )
      __fastfail(3u);
    *v16 = v3;
    a2[6] = (__int64)v17;
    *v17 = v16;
    *(_QWORD *)(v3 + 8) = v16;
  }
  if ( (unsigned __int64)*a2 < *(_QWORD *)a1 )
    *(_QWORD *)a1 = *a2;
  v18 = a2[1];
  if ( v18 > *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 8) = v18;
  v19 = *(_BYTE *)(a1 + 33);
  if ( (v19 & 1) != 0 && !v6 )
    *(_BYTE *)(a1 + 33) = v19 & 0xFE;
  return 0LL;
}
