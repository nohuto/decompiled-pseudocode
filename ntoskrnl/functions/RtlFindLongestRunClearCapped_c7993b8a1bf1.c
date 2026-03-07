__int64 __fastcall RtlFindLongestRunClearCapped(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  unsigned int v8; // r10d
  unsigned int v9; // edi
  unsigned int v10; // ebp
  __int64 v11; // r11
  unsigned int v12; // esi
  unsigned int v13; // r12d
  unsigned __int8 *v14; // r15
  unsigned int v15; // r8d
  unsigned __int8 v16; // r9
  unsigned __int8 *v17; // r15
  unsigned int v18; // edx
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 result; // rax
  unsigned int v30; // [rsp+0h] [rbp-48h]
  unsigned int v31; // [rsp+4h] [rbp-44h]
  char v32; // [rsp+8h] [rbp-40h]
  int v34; // [rsp+60h] [rbp+18h]
  unsigned int i; // [rsp+68h] [rbp+20h]

  v6 = *a1;
  v32 = v6;
  v34 = v6 & 7;
  v7 = (v6 >> 3) + (v34 != 0);
  v8 = 0;
  v9 = 0;
  v10 = (*a3 < v6 ? *a3 : 0) & 0xFFFFFFF8;
  LODWORD(v11) = 0;
  v12 = v10 >> 3;
  v13 = v10;
  v14 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + (v10 >> 3));
  v15 = 0;
  v16 = *v14;
  v17 = v14 + 1;
  if ( v10 >> 3 == v7 - 1 && (v6 & 7) != 0 )
    v16 |= byte_1400165E0[v6 & 7];
  for ( i = 0; i < v7; ++i )
  {
    v18 = v9;
    if ( v16 )
    {
      v19 = *((unsigned __int8 *)RtlpBitsClearLow + v16);
      v9 = v19 + v11;
      if ( (_DWORD)v19 + (_DWORD)v11 )
      {
        if ( v9 >= a2 )
          goto LABEL_47;
        if ( v9 > v15 )
        {
          v15 = v19 + v11;
          v8 = v13;
        }
      }
      if ( v13 != v10 )
        v9 = v18;
      v11 = *((unsigned __int8 *)RtlpBitsClearHigh + v16);
      v13 = 8 * v12 - v11 + 8;
      v20 = *((_BYTE *)&qword_1400165E8 - v11) | byte_140018DE0[v19];
      while ( 1 )
      {
        v16 |= v20;
        if ( v16 == 0xFF )
          break;
        v21 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v16);
        if ( v15 >= (unsigned int)v21 )
          break;
        v20 = byte_140018DE0[v21];
        v22 = 0;
        while ( ((unsigned __int8)v20 & v16) != 0 )
        {
          v20 *= 2;
          ++v22;
        }
        v8 = v22 + 8 * v12;
        if ( (unsigned int)v21 >= a2 )
        {
          result = a2;
          goto LABEL_45;
        }
        v15 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v16);
      }
    }
    else
    {
      LODWORD(v11) = v11 + 8;
      if ( (unsigned int)v11 >= a2 )
      {
LABEL_47:
        *a3 = v13;
        return a2;
      }
    }
    ++v12;
    v31 = v8;
    v30 = v9;
    v23 = v11;
    v24 = v15;
    v25 = v11;
    if ( v12 >= v7 )
    {
      if ( (_DWORD)v11 )
      {
        LODWORD(v11) = 0;
        v9 = v25;
        v15 = v25;
        v8 = v13;
        if ( v13 != v10 )
          v9 = v30;
        if ( v25 <= v24 )
          v15 = v24;
        if ( v23 <= v24 )
          v8 = v31;
      }
      v12 = 0;
      v17 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    }
    v16 = *v17++;
    if ( v12 == v7 - 1 && v34 )
      v16 |= byte_1400165E0[v32 & 7];
  }
  v26 = v8;
  v27 = v15;
  if ( (_DWORD)v11 )
  {
    v8 = v13;
    v28 = v11 + v9;
    if ( v13 + (_DWORD)v11 != v10 )
      v28 = v11;
    if ( v28 > v15 )
      v15 = v28;
    if ( v28 <= v27 )
      v8 = v26;
  }
  else if ( !v15 )
  {
    *a3 = 0;
    return 0LL;
  }
  if ( v15 > a2 )
    v15 = a2;
  result = v15;
LABEL_45:
  *a3 = v8;
  return result;
}
