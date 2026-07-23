/*
 * XREFs of PspSubtractAccountingValues @ 0x140909D48
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSubtractAccountingValues(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 result; // rax

  if ( *a2 > *a1 )
    v2 = 0LL;
  else
    v2 = *a1 - *a2;
  *a1 = v2;
  v3 = a2[1];
  v4 = a1[1];
  if ( v3 > v4 )
    v5 = 0LL;
  else
    v5 = v4 - v3;
  a1[1] = v5;
  v6 = a2[3];
  v7 = a1[3];
  if ( v6 > v7 )
    v8 = 0LL;
  else
    v8 = v7 - v6;
  a1[3] = v8;
  v9 = a2[5];
  v10 = a1[5];
  if ( v9 > v10 )
    v11 = 0LL;
  else
    v11 = v10 - v9;
  a1[5] = v11;
  v12 = a2[6];
  v13 = a1[6];
  if ( v12 > v13 )
    v14 = 0LL;
  else
    v14 = v13 - v12;
  a1[6] = v14;
  v15 = a2[7];
  v16 = a1[7];
  if ( v15 > v16 )
    v17 = 0LL;
  else
    v17 = v16 - v15;
  a1[7] = v17;
  v18 = a2[8];
  v19 = a1[8];
  if ( v18 > v19 )
    v20 = 0LL;
  else
    v20 = v19 - v18;
  a1[8] = v20;
  v21 = a2[9];
  v22 = a1[9];
  if ( v21 > v22 )
    v23 = 0LL;
  else
    v23 = v22 - v21;
  a1[9] = v23;
  v24 = a2[10];
  v25 = a1[10];
  if ( v24 > v25 )
    result = 0LL;
  else
    result = v25 - v24;
  a1[10] = result;
  return result;
}
