/*
 * XREFs of ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01452E4
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147434 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FunctionalizeDisplayConfigRemoveUnownedPaths(void *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // edi
  char *v7; // rsi
  _QWORD *v8; // r14
  _OWORD *v9; // rdx
  _OWORD *v10; // rax
  __int64 v11; // r8
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _BYTE v35[272]; // [rsp+20h] [rbp-138h] BYREF

  v2 = *((unsigned __int16 *)a2 + 10);
  *((_WORD *)a2 + 10) = 0;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = (char *)a2 + 48;
    v8 = (_QWORD *)((char *)a2 + 64);
    do
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C0251B70)(
                              a1,
                              *v8,
                              *((unsigned int *)v7 + 7)) )
      {
        if ( v5 != v6 )
        {
          v9 = v35;
          v10 = (_OWORD *)((char *)a2 + 272 * v5 + 48);
          v11 = 2LL;
          v12 = v10;
          do
          {
            v13 = v12[1];
            *v9 = *v12;
            v14 = v12[2];
            v9[1] = v13;
            v15 = v12[3];
            v9[2] = v14;
            v16 = v12[4];
            v9[3] = v15;
            v17 = v12[5];
            v9[4] = v16;
            v18 = v12[6];
            v9[5] = v17;
            v19 = v12[7];
            v12 += 8;
            v9[6] = v18;
            v9 += 8;
            *(v9 - 1) = v19;
            --v11;
          }
          while ( v11 );
          v20 = *v12;
          v21 = v7;
          *v9 = v20;
          v22 = 2LL;
          do
          {
            *v10 = *v21;
            v10[1] = v21[1];
            v10[2] = v21[2];
            v10[3] = v21[3];
            v10[4] = v21[4];
            v10[5] = v21[5];
            v10[6] = v21[6];
            v10 += 8;
            v23 = v21[7];
            v21 += 8;
            *(v10 - 1) = v23;
            --v22;
          }
          while ( v22 );
          v24 = *v21;
          v25 = v35;
          v26 = 2LL;
          *v10 = v24;
          v27 = v7;
          do
          {
            v28 = v25[1];
            *v27 = *v25;
            v29 = v25[2];
            v27[1] = v28;
            v30 = v25[3];
            v27[2] = v29;
            v31 = v25[4];
            v27[3] = v30;
            v32 = v25[5];
            v27[4] = v31;
            v33 = v25[6];
            v27[5] = v32;
            v34 = v25[7];
            v25 += 8;
            v27[6] = v33;
            v27 += 8;
            *(v27 - 1) = v34;
            --v26;
          }
          while ( v26 );
          *v27 = *v25;
        }
        ++v5;
        ++*((_WORD *)a2 + 10);
      }
      ++v6;
      v8 += 34;
      v7 += 272;
    }
    while ( v6 < v2 );
  }
}
