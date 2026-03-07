__int64 __fastcall PspSubtractAccountingValues(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 result; // rax

  v2 = *a1 - *a2;
  if ( *a2 > *a1 )
    v2 = 0LL;
  *a1 = v2;
  v4 = a2[1];
  v5 = a1[1];
  if ( v4 > v5 )
    v6 = 0LL;
  else
    v6 = v5 - v4;
  a1[1] = v6;
  v7 = a2[3];
  v8 = a1[3];
  if ( v7 > v8 )
    v9 = 0LL;
  else
    v9 = v8 - v7;
  a1[3] = v9;
  v10 = a2[5];
  v11 = a1[5];
  if ( v10 > v11 )
    v12 = 0LL;
  else
    v12 = v11 - v10;
  a1[5] = v12;
  v13 = a2[6];
  v14 = a1[6];
  if ( v13 > v14 )
    v15 = 0LL;
  else
    v15 = v14 - v13;
  a1[6] = v15;
  v16 = a2[7];
  v17 = a1[7];
  if ( v16 > v17 )
    v18 = 0LL;
  else
    v18 = v17 - v16;
  a1[7] = v18;
  v19 = a2[8];
  v20 = a1[8];
  if ( v19 > v20 )
    v21 = 0LL;
  else
    v21 = v20 - v19;
  a1[8] = v21;
  v22 = a2[9];
  v23 = a1[9];
  if ( v22 > v23 )
    v24 = 0LL;
  else
    v24 = v23 - v22;
  a1[9] = v24;
  v25 = a1[10];
  v26 = a2[10];
  result = v25 - v26;
  if ( v26 > v25 )
    result = 0LL;
  a1[10] = result;
  return result;
}
