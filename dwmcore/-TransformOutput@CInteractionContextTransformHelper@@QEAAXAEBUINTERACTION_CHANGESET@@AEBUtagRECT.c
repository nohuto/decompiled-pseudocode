/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B7724
 * Callers:
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B79EC (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x1802B7274 (-HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@P.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CHANGESET *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        bool a6,
        struct INTERACTION_CHANGESET *a7)
{
  bool v7; // zf
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r8
  int v18; // r9d
  const struct tagRECT *v19; // r10
  const struct tagRECT *v20; // r11
  float *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm3_4
  float v28; // xmm1_4

  v7 = (*((_BYTE *)a2 + 84) & 1) == 0;
  v9 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a7 = *(_OWORD *)a2;
  v10 = *((_OWORD *)a2 + 2);
  *((_OWORD *)a7 + 1) = v9;
  v11 = *((_OWORD *)a2 + 3);
  *((_OWORD *)a7 + 2) = v10;
  v12 = *((_OWORD *)a2 + 4);
  *((_OWORD *)a7 + 3) = v11;
  v13 = *((_OWORD *)a2 + 5);
  *((_OWORD *)a7 + 4) = v12;
  v14 = *((_OWORD *)a2 + 6);
  *((_OWORD *)a7 + 5) = v13;
  *((_OWORD *)a7 + 6) = v14;
  if ( !v7 )
    *((_QWORD *)this + 21) = 0LL;
  v15 = (unsigned __int64)a7 & -(__int64)((*((_DWORD *)a7 + 21) & 2) != 0);
  v16 = ((unsigned __int64)a7 + 32) & -(__int64)((*((_DWORD *)a7 + 21) & 2) != 0);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    v21 = (float *)((char *)this + (a6 ? 120LL : 48LL));
    if ( v18 )
    {
      if ( v15 )
      {
        v22 = *(float *)(v15 + 4);
        v23 = (float)((float)(*(float *)v15 * *((float *)this + 24)) + (float)(v22 * *((float *)this + 26)))
            + *((float *)this + 28);
        *(float *)(v15 + 4) = (float)((float)(*(float *)v15 * *((float *)this + 25))
                                    + (float)(v22 * *((float *)this + 27)))
                            + *((float *)this + 29);
        *(float *)v15 = v23;
        v24 = (float)((float)(*(float *)v16 * *((float *)this + 25))
                    + (float)(*(float *)(v16 + 4) * *((float *)this + 27)))
            + *((float *)this + 29);
        *(float *)v16 = (float)((float)(*(float *)v16 * *((float *)this + 24))
                              + (float)(*(float *)(v16 + 4) * *((float *)this + 26)))
                      + *((float *)this + 28);
        *(float *)(v16 + 4) = v24;
        if ( a5 != 5 )
        {
          v25 = (float)((float)(*(float *)(v15 + 20) * v21[3]) + (float)(*(float *)(v15 + 16) * v21[1])) + v21[5];
          *(float *)(v15 + 16) = (float)((float)(*(float *)(v15 + 20) * v21[2]) + (float)(*(float *)(v15 + 16) * *v21))
                               + v21[4];
          *(float *)(v15 + 20) = v25;
        }
      }
    }
    if ( (*((_BYTE *)a7 + 84) & 4) != 0 )
    {
      if ( v17 )
      {
        v26 = (float)((float)(*(float *)(v17 + 4) * *((float *)this + 27))
                    + (float)(*(float *)v17 * *((float *)this + 25)))
            + *((float *)this + 29);
        *(float *)v17 = (float)((float)(*(float *)(v17 + 4) * *((float *)this + 26))
                              + (float)(*(float *)v17 * *((float *)this + 24)))
                      + *((float *)this + 28);
        *(float *)(v17 + 4) = v26;
        if ( a5 != 5 )
        {
          v27 = (float)((float)(*(float *)(v17 + 20) * v21[3]) + (float)(*(float *)(v17 + 16) * v21[1])) + v21[5];
          *(float *)(v17 + 16) = (float)((float)(*(float *)(v17 + 20) * v21[2]) + (float)(*(float *)(v17 + 16) * *v21))
                               + v21[4];
          *(float *)(v17 + 20) = v27;
        }
      }
    }
  }
  CInteractionContextTransformHelper::HimetricToScreen(
    v20,
    v19,
    (struct INTERACTION_UPDATE *)v15,
    (struct INTERACTION_VELOCITY *)v16,
    (struct INTERACTION_UPDATE *)v17,
    (struct INTERACTION_UPDATE *)v15,
    (struct INTERACTION_VELOCITY *)v16,
    (struct INTERACTION_UPDATE *)v17);
  if ( (*((_BYTE *)a7 + 84) & 2) != 0 && v15 )
  {
    v28 = *(float *)(v15 + 28);
    if ( v28 != 0.0 )
      *((double *)this + 21) = (float)((float)(*(float *)(v15 + 24) - 1.0) / v28);
    if ( v16 )
      *(float *)(v16 + 8) = *(float *)(v16 + 12) * *((double *)this + 21);
  }
}
