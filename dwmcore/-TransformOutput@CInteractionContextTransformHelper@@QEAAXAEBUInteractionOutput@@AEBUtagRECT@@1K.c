/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B79EC
 * Callers:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180281D94 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B7724 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        bool a6,
        struct InteractionOutput *a7)
{
  unsigned int v11; // xmm1_4
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  int v18; // xmm0_4
  __m128 v19; // xmm2
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __m128 v22; // xmm1
  __int128 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h]
  __int128 v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+A0h] [rbp-60h]
  _OWORD v30[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v32; // [rsp+128h] [rbp+28h]
  __int64 v33; // [rsp+130h] [rbp+30h]
  unsigned int v34; // [rsp+138h] [rbp+38h]
  unsigned int v35; // [rsp+13Ch] [rbp+3Ch]
  __int64 v36; // [rsp+140h] [rbp+40h]
  unsigned int v37; // [rsp+148h] [rbp+48h]
  unsigned int v38; // [rsp+14Ch] [rbp+4Ch]

  memset_0(&v23, 0, 0x70uLL);
  v11 = *((_DWORD *)a2 + 3);
  v12 = *((_DWORD *)a2 + 2);
  LODWORD(v26) = 0;
  *(_QWORD *)&v23 = __PAIR64__(v11, v12);
  v13 = *((_DWORD *)a2 + 4);
  LODWORD(v24) = *((_DWORD *)a2 + 10);
  v14 = *((_DWORD *)a2 + 6);
  *((_QWORD *)&v23 + 1) = v13;
  v15 = *((_DWORD *)a2 + 11);
  LODWORD(v25) = v14;
  v16 = *((_DWORD *)a2 + 8);
  DWORD1(v24) = v15;
  DWORD1(v25) = *((_DWORD *)a2 + 7);
  v17 = *((_DWORD *)a2 + 9);
  HIDWORD(v24) = *((_DWORD *)a2 + 13);
  DWORD1(v28) = 2;
  *((_QWORD *)&v25 + 1) = __PAIR64__(v16, v17);
  v18 = *((_DWORD *)a2 + 12);
  v30[0] = v23;
  DWORD2(v24) = v18;
  v30[2] = v25;
  v30[1] = v24;
  v30[4] = v27;
  v30[3] = v26;
  v30[6] = v29;
  v30[5] = v28;
  memset_0(&v31, 0, 0x70uLL);
  CInteractionContextTransformHelper::TransformOutput(
    this,
    (const struct INTERACTION_CHANGESET *)v30,
    a3,
    a4,
    a5,
    a6,
    (struct INTERACTION_CHANGESET *)&v31);
  *((_QWORD *)&v23 + 1) = v31;
  *(_QWORD *)&v24 = v32;
  *((_QWORD *)&v25 + 1) = v33;
  *((_QWORD *)&v24 + 1) = v36;
  *(_QWORD *)&v23 = 0LL;
  v19 = (__m128)v35;
  *(_QWORD *)&v25 = __PAIR64__(v37, v38);
  v20 = v24;
  *(_OWORD *)a7 = v23;
  v21 = v25;
  *((_OWORD *)a7 + 1) = v20;
  v22 = (__m128)v34;
  *((_OWORD *)a7 + 2) = v21;
  *((_QWORD *)a7 + 6) = _mm_unpacklo_ps(v22, v19).m128_u64[0];
  *((_DWORD *)a7 + 14) = 0;
}
