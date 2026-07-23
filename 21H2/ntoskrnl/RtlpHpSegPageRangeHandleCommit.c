/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x1403158E0
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x140315000 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  char v9; // cl
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned int v13; // r12d
  unsigned __int64 v14; // r14
  int v15; // ecx
  unsigned __int64 v16; // r14
  unsigned int v17; // r15d
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v22; // eax
  int v23; // r10d
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // edi
  int v29; // ecx
  int v30; // eax

  v6 = 0;
  v7 = 1 << *(_BYTE *)(a1 + 9);
  v8 = 0;
  v9 = *(_BYTE *)(a1 + 9);
  v10 = (unsigned __int64)(unsigned int)*a3 >> v9;
  v11 = v10 << v9;
  v12 = a2 + 32 * v10;
  v13 = *a3 & (v7 - 1);
  v14 = (unsigned __int64)(v13 + *a4 - 1) >> v9;
  v15 = -1;
  v16 = v12 + 32 * v14;
  v17 = ((v13 + *a4 - 1) & (v7 - 1)) + 1;
  v18 = -1;
  if ( v13 )
  {
    v26 = *(unsigned __int8 *)(v12 + 25);
    v27 = v7;
    if ( v12 == v16 )
      v27 = ((v13 + *a4 - 1) & (v7 - 1)) + 1;
    if ( a5 > 1 || v26 >= v27 )
    {
      if ( a5 != 2 || v26 <= v13 )
      {
LABEL_34:
        v12 += 32LL;
        LODWORD(v11) = v7 + v11;
        goto LABEL_2;
      }
      v28 = v13;
      v27 = *(unsigned __int8 *)(v12 + 25);
    }
    else
    {
      v28 = v27;
      v13 = *(unsigned __int8 *)(v12 + 25);
    }
    v8 = v28 - v26;
    v15 = v11 + v27;
    v18 = v11 + v13;
    if ( v8 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v8 + v26;
    goto LABEL_34;
  }
LABEL_2:
  if ( v12 < v16 )
  {
    while ( 1 )
    {
      v22 = *(unsigned __int8 *)(v12 + 25);
      v23 = v18;
      v24 = 0;
      if ( v22 < v7 && a5 <= 1 )
        break;
      if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
      {
        v29 = v11;
        v24 = -v22;
        if ( v18 != -1 )
          v29 = v18;
        v18 = v29;
        v25 = *(unsigned __int8 *)(v12 + 25);
        goto LABEL_19;
      }
LABEL_22:
      v8 += v24;
      v12 += 32LL;
      LODWORD(v11) = v7 + v11;
      if ( v12 >= v16 )
        goto LABEL_3;
    }
    v18 = v22 + v11;
    v24 = v7 - v22;
    v25 = v7;
    if ( v23 != -1 )
      v18 = v23;
LABEL_19:
    v15 = v11 + v25;
    if ( v24 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v24 + v22;
    goto LABEL_22;
  }
LABEL_3:
  v19 = v18;
  if ( v12 != v16 )
    goto LABEL_12;
  v20 = *(unsigned __int8 *)(v12 + 25);
  if ( a5 <= 1 && v20 < v17 )
  {
    v18 = v11 + v20;
    v6 = v17 - v20;
    if ( v19 != -1 )
      v18 = v19;
LABEL_8:
    v15 = v11 + v17;
    if ( v6 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v6 + v20;
    goto LABEL_11;
  }
  if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
  {
    v30 = v11;
    v6 = -v20;
    v17 = *(unsigned __int8 *)(v12 + 25);
    if ( v18 != -1 )
      v30 = v18;
    v18 = v30;
    goto LABEL_8;
  }
LABEL_11:
  v8 += v6;
LABEL_12:
  if ( v8 )
  {
    *a4 = v15 - v18;
    *a3 = v18;
  }
  return v8;
}
