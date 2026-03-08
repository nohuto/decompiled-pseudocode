/*
 * XREFs of InitializeInteractionStateInfo @ 0x1800E5210
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800E4D9C (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall InitializeInteractionStateInfo(__int64 a1)
{
  _OWORD *v2; // rax
  __int64 v3; // r8
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  _OWORD v21[3]; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1A8h]
  int v23; // [rsp+98h] [rbp-160h]
  int v24; // [rsp+DCh] [rbp-11Ch]
  int v25; // [rsp+120h] [rbp-D8h]
  int v26; // [rsp+164h] [rbp-94h]
  int v27; // [rsp+1A8h] [rbp-50h]
  int v28; // [rsp+1ECh] [rbp-Ch]

  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  v2 = (_OWORD *)a1;
  v3 = 3LL;
  v23 = 0;
  v24 = 0;
  v4 = v21;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  do
  {
    v5 = v4[1];
    *v2 = *v4;
    v6 = v4[2];
    v2[1] = v5;
    v7 = v4[3];
    v2[2] = v6;
    v8 = v4[4];
    v2[3] = v7;
    v9 = v4[5];
    v2[4] = v8;
    v10 = v4[6];
    v2[5] = v9;
    v11 = v4[7];
    v4 += 8;
    v2[6] = v10;
    v2 += 8;
    *(v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = v4[1];
  *v2 = *v4;
  v13 = v4[2];
  v2[1] = v12;
  v14 = v4[3];
  v2[2] = v13;
  v15 = v4[4];
  v2[3] = v14;
  v2[4] = v15;
  *(_BYTE *)(a1 + 24) &= 0xC0u;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  CMILMatrix::SetToIdentity((CMILMatrix *)(a1 + 56));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v16 + 124));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v17 + 192));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v18 + 260));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v19 + 328));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v20 + 396));
}
