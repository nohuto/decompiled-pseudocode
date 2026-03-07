unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r11
  _QWORD *v4; // r10
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 result; // rax

  v2 = a1[2130];
  v3 = 8LL;
  *a2 = a1[320];
  a2[1] = a1[336];
  v4 = a1 + 861;
  a2[2] = a1[2200];
  v5 = a2 + 13;
  a2[3] = a1[2216];
  a2[4] = a1[840];
  v6 = a1 + 368;
  a2[21] = a1[2228];
  do
  {
    v4 = (_QWORD *)((char *)v4 + 4);
    *(v5 - 8) = *v6;
    ++v5;
    v6 += 11;
    *(v5 - 1) = *((unsigned int *)v4 - 1);
    --v3;
  }
  while ( v3 );
  if ( *a2 > v2 )
  {
    *a2 = v2;
    v7 = 0LL;
  }
  else
  {
    v7 = v2 - *a2;
  }
  v8 = a2[1];
  if ( v8 > v7 )
  {
    a2[1] = v7;
    v9 = 0LL;
  }
  else
  {
    v9 = v7 - v8;
  }
  v10 = a2[2];
  v11 = v9;
  if ( v10 > v9 )
  {
    a2[2] = v9;
    v12 = 0LL;
  }
  else
  {
    v12 = v9 - v10;
    v11 = a2[2];
  }
  v13 = a2[3];
  if ( v13 > v12 )
  {
    a2[3] = v12;
    v14 = 0LL;
  }
  else
  {
    v14 = v12 - v13;
  }
  v15 = a2[4];
  if ( v15 > v14 )
  {
    a2[4] = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = v14 - v15;
  }
  v17 = a2[21];
  if ( v17 >= v11 )
    v17 = v11;
  a2[21] = v17;
  v18 = a2[5];
  if ( v18 > v16 )
  {
    a2[5] = v16;
    v19 = 0LL;
  }
  else
  {
    v19 = v16 - v18;
  }
  v20 = a2[6];
  if ( v20 > v19 )
  {
    a2[6] = v19;
    v21 = 0LL;
  }
  else
  {
    v21 = v19 - v20;
  }
  v22 = a2[7];
  if ( v22 > v21 )
  {
    a2[7] = v21;
    v23 = 0LL;
  }
  else
  {
    v23 = v21 - v22;
  }
  v24 = a2[8];
  if ( v24 > v23 )
  {
    a2[8] = v23;
    v25 = 0LL;
  }
  else
  {
    v25 = v23 - v24;
  }
  v26 = a2[9];
  if ( v26 > v25 )
  {
    a2[9] = v25;
    v27 = 0LL;
  }
  else
  {
    v27 = v25 - v26;
  }
  v28 = a2[10];
  if ( v28 > v27 )
  {
    a2[10] = v27;
    v29 = 0LL;
  }
  else
  {
    v29 = v27 - v28;
  }
  v30 = a2[11];
  if ( v30 > v29 )
  {
    a2[11] = v29;
    result = 0LL;
  }
  else
  {
    result = v29 - v30;
  }
  if ( a2[12] > result )
    a2[12] = result;
  return result;
}
