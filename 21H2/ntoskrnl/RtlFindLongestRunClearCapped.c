/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x140587380
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140250048 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r13d
  int v6; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  unsigned int v13; // r11d
  unsigned int v14; // edi
  __int64 v15; // r9
  unsigned int v16; // r15d
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r10
  unsigned __int8 *v19; // rsi
  unsigned int v20; // edx
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int8 i; // r10
  __int64 v24; // rdx
  char v25; // cl
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 result; // rax
  int v32; // [rsp+0h] [rbp-48h]
  unsigned int v34; // [rsp+60h] [rbp+18h]
  unsigned int v35; // [rsp+68h] [rbp+20h]

  v3 = *a1;
  v6 = *a1 & 7;
  v32 = v6;
  v8 = (v3 >> 3) + (v6 != 0);
  v9 = *a3;
  v10 = -(*a3 < v3);
  v11 = 0;
  v34 = 0;
  v12 = v9 & v10 & 0xFFFFFFF8;
  v13 = 0;
  v14 = v12 >> 3;
  LODWORD(v15) = 0;
  v16 = v12;
  v17 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + (v12 >> 3));
  v18 = *v17;
  v19 = v17 + 1;
  if ( v12 >> 3 == v8 - 1 && v6 )
    v18 |= byte_14001B620[v3 & 7];
  v20 = 0;
  v35 = 0;
  if ( v8 )
  {
    while ( !v18 )
    {
      LODWORD(v15) = v15 + 8;
      if ( (unsigned int)v15 >= a2 )
        goto LABEL_45;
LABEL_22:
      ++v14;
      v27 = v15;
      if ( v14 >= v8 )
      {
        if ( (_DWORD)v15 )
        {
          v28 = v16;
          if ( (unsigned int)v15 <= v11 )
          {
            LODWORD(v15) = v11;
            v28 = v13;
          }
          v11 = v15;
          v13 = v28;
          LODWORD(v15) = 0;
          if ( v16 != v12 )
            v27 = v34;
          v34 = v27;
        }
        v14 = 0;
        v19 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
      }
      v18 = *v19++;
      if ( v14 == v8 - 1 && v32 )
        v18 |= byte_14001B620[v3 & 7];
      v35 = ++v20;
      if ( v20 >= v8 )
        goto LABEL_34;
    }
    v21 = *((unsigned __int8 *)RtlpBitsClearLow + v18);
    v22 = v21 + v15;
    if ( (_DWORD)v21 + (_DWORD)v15 )
    {
      if ( v22 >= a2 )
      {
LABEL_45:
        *a3 = v16;
        return a2;
      }
      if ( v22 > v11 )
      {
        v11 = v21 + v15;
        v13 = v16;
      }
    }
    if ( v16 != v12 )
      v22 = v34;
    v34 = v22;
    v15 = *((unsigned __int8 *)RtlpBitsClearHigh + v18);
    v16 = 8 * v14 - v15 + 8;
    for ( i = *((_BYTE *)&qword_14001B628 - v15) | byte_14001E890[v21] | v18; ; i |= v25 )
    {
      if ( i == 0xFF || (v24 = *((unsigned __int8 *)RtlpBitsClearAnywhere + i), v11 >= (unsigned int)v24) )
      {
        v20 = v35;
        goto LABEL_22;
      }
      v25 = byte_14001E890[v24];
      v26 = 0;
      while ( ((unsigned __int8)v25 & i) != 0 )
      {
        v25 *= 2;
        ++v26;
      }
      v13 = v26 + 8 * v14;
      if ( (unsigned int)v24 >= a2 )
        break;
      v11 = *((unsigned __int8 *)RtlpBitsClearAnywhere + i);
    }
    result = a2;
    goto LABEL_43;
  }
LABEL_34:
  v29 = v13;
  if ( (_DWORD)v15 )
  {
    v30 = v15 + v34;
    v13 = v16;
    if ( v16 + (_DWORD)v15 != v12 )
      v30 = v15;
    if ( v30 <= v11 )
    {
      v30 = v11;
      v13 = v29;
    }
    v11 = v30;
    goto LABEL_40;
  }
  if ( v11 )
  {
LABEL_40:
    if ( v11 > a2 )
      v11 = a2;
    result = v11;
LABEL_43:
    *a3 = v13;
    return result;
  }
  *a3 = 0;
  return 0LL;
}
