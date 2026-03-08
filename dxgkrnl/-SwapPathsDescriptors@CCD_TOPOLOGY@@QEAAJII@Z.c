/*
 * XREFs of ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03B78B0
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B6954 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03B72B8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C03B73AC (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03BD140 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03BD220 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01BD614 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SwapPathsDescriptors(void **this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  _WORD *v6; // r9
  unsigned __int16 v7; // ax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int64 v11; // r10
  _OWORD *v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  _OWORD *v27; // rax
  _OWORD *v28; // rcx
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
  _BYTE v39[304]; // [rsp+20h] [rbp-138h] BYREF

  v3 = a3;
  v5 = a2;
  CCD_TOPOLOGY::ClearModalitySetId(this);
  v6 = this[8];
  v7 = 0;
  if ( v6 )
    v7 = v6[10];
  if ( (unsigned int)v5 >= v7 || (unsigned int)v3 >= v7 )
    return 3221225485LL;
  if ( (_DWORD)v5 != (_DWORD)v3 )
  {
    v9 = 2LL;
    v10 = v39;
    v11 = 2LL;
    v12 = &v6[148 * v5 + 28];
    v13 = v12;
    do
    {
      v14 = v13[1];
      *v10 = *v13;
      v15 = v13[2];
      v10[1] = v14;
      v16 = v13[3];
      v10[2] = v15;
      v17 = v13[4];
      v10[3] = v16;
      v18 = v13[5];
      v10[4] = v17;
      v19 = v13[6];
      v10[5] = v18;
      v20 = v13[7];
      v13 += 8;
      v10[6] = v19;
      v10 += 8;
      *(v10 - 1) = v20;
      --v11;
    }
    while ( v11 );
    v21 = *v13;
    v22 = v13[1];
    v23 = *((_QWORD *)v13 + 4);
    *v10 = v21;
    v10[1] = v22;
    *((_QWORD *)v10 + 4) = v23;
    v24 = 2LL;
    v25 = &v6[148 * v3 + 28];
    do
    {
      *v12 = *v25;
      v12[1] = v25[1];
      v12[2] = v25[2];
      v12[3] = v25[3];
      v12[4] = v25[4];
      v12[5] = v25[5];
      v12[6] = v25[6];
      v12 += 8;
      v26 = v25[7];
      v25 += 8;
      *(v12 - 1) = v26;
      --v24;
    }
    while ( v24 );
    *v12 = *v25;
    v12[1] = v25[1];
    *((_QWORD *)v12 + 4) = *((_QWORD *)v25 + 4);
    v27 = v39;
    v28 = (char *)this[8] + 296 * v3 + 56;
    do
    {
      v29 = v27[1];
      *v28 = *v27;
      v30 = v27[2];
      v28[1] = v29;
      v31 = v27[3];
      v28[2] = v30;
      v32 = v27[4];
      v28[3] = v31;
      v33 = v27[5];
      v28[4] = v32;
      v34 = v27[6];
      v28[5] = v33;
      v35 = v27[7];
      v27 += 8;
      v28[6] = v34;
      v28 += 8;
      *(v28 - 1) = v35;
      --v9;
    }
    while ( v9 );
    v36 = *v27;
    v37 = v27[1];
    v38 = *((_QWORD *)v27 + 4);
    *v28 = v36;
    v28[1] = v37;
    *((_QWORD *)v28 + 4) = v38;
  }
  return 0LL;
}
