/*
 * XREFs of ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017236C
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FunctionalizeDisplayConfigRemoveUnownedPaths(void *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // r15d
  unsigned int v5; // esi
  unsigned int v6; // edi
  char *v7; // rbp
  _QWORD *v8; // r14
  _OWORD *v9; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  _BYTE v39[304]; // [rsp+20h] [rbp-158h] BYREF

  v2 = *((unsigned __int16 *)a2 + 10);
  *((_WORD *)a2 + 10) = 0;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = (char *)a2 + 56;
    v8 = (_QWORD *)((char *)a2 + 72);
    do
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C0296940)(
                              a1,
                              *v8,
                              *((unsigned int *)v7 + 7)) )
      {
        if ( v5 != v6 )
        {
          v9 = (_OWORD *)((char *)a2 + 296 * v5 + 56);
          v10 = 2LL;
          v11 = v9;
          v12 = v39;
          do
          {
            v13 = v11[1];
            *v12 = *v11;
            v14 = v11[2];
            v12[1] = v13;
            v15 = v11[3];
            v12[2] = v14;
            v16 = v11[4];
            v12[3] = v15;
            v17 = v11[5];
            v12[4] = v16;
            v18 = v11[6];
            v12[5] = v17;
            v19 = v11[7];
            v11 += 8;
            v12[6] = v18;
            v12 += 8;
            *(v12 - 1) = v19;
            --v10;
          }
          while ( v10 );
          v20 = *v11;
          v21 = v11[1];
          v22 = *((_QWORD *)v11 + 4);
          *v12 = v20;
          v12[1] = v21;
          *((_QWORD *)v12 + 4) = v22;
          v23 = v7;
          v24 = 2LL;
          do
          {
            *v9 = *v23;
            v9[1] = v23[1];
            v9[2] = v23[2];
            v9[3] = v23[3];
            v9[4] = v23[4];
            v9[5] = v23[5];
            v9[6] = v23[6];
            v9 += 8;
            v25 = v23[7];
            v23 += 8;
            *(v9 - 1) = v25;
            --v24;
          }
          while ( v24 );
          v26 = v7;
          *v9 = *v23;
          v9[1] = v23[1];
          *((_QWORD *)v9 + 4) = *((_QWORD *)v23 + 4);
          v27 = v39;
          v28 = 2LL;
          do
          {
            v29 = v27[1];
            *v26 = *v27;
            v30 = v27[2];
            v26[1] = v29;
            v31 = v27[3];
            v26[2] = v30;
            v32 = v27[4];
            v26[3] = v31;
            v33 = v27[5];
            v26[4] = v32;
            v34 = v27[6];
            v26[5] = v33;
            v35 = v27[7];
            v27 += 8;
            v26[6] = v34;
            v26 += 8;
            *(v26 - 1) = v35;
            --v28;
          }
          while ( v28 );
          v36 = *v27;
          v37 = v27[1];
          v38 = *((_QWORD *)v27 + 4);
          *v26 = v36;
          v26[1] = v37;
          *((_QWORD *)v26 + 4) = v38;
        }
        ++v5;
        ++*((_WORD *)a2 + 10);
      }
      ++v6;
      v8 += 37;
      v7 += 296;
    }
    while ( v6 < v2 );
  }
}
