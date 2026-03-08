/*
 * XREFs of ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018FB14
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x1C0193FD4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FunctionalizeDisplayConfigRemoveUnownedPaths(_OWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  _OWORD *v4; // r15
  unsigned int v5; // ebp
  unsigned int v6; // edi
  char *v7; // rsi
  __int64 DxgkWin32kInterface; // rax
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
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  _BYTE v37[304]; // [rsp+20h] [rbp-158h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 20);
  *(_WORD *)(a2 + 20) = 0;
  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = (char *)(a2 + 56);
    do
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
      if ( (*(unsigned __int8 (__fastcall **)(_OWORD *, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
             v4,
             *((_QWORD *)v7 + 2),
             *((unsigned int *)v7 + 7)) )
      {
        if ( v5 != v6 )
        {
          v9 = (_OWORD *)(296LL * v5 + v3 + 56);
          v10 = 2LL;
          v11 = v9;
          v12 = v37;
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
          a1 = v7;
          *v9 = *v23;
          v9[1] = v23[1];
          *((_QWORD *)v9 + 4) = *((_QWORD *)v23 + 4);
          v26 = v37;
          a2 = 2LL;
          do
          {
            v27 = v26[1];
            *a1 = *v26;
            v28 = v26[2];
            a1[1] = v27;
            v29 = v26[3];
            a1[2] = v28;
            v30 = v26[4];
            a1[3] = v29;
            v31 = v26[5];
            a1[4] = v30;
            v32 = v26[6];
            a1[5] = v31;
            v33 = v26[7];
            v26 += 8;
            a1[6] = v32;
            a1 += 8;
            *(a1 - 1) = v33;
            --a2;
          }
          while ( a2 );
          v34 = *v26;
          v35 = v26[1];
          v36 = *((_QWORD *)v26 + 4);
          *a1 = v34;
          a1[1] = v35;
          *((_QWORD *)a1 + 4) = v36;
        }
        ++v5;
        ++*(_WORD *)(v3 + 20);
      }
      ++v6;
      v7 += 296;
    }
    while ( v6 < v2 );
  }
}
