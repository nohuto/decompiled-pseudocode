/*
 * XREFs of ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x1802B7274
 * Callers:
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B7724 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 * Callees:
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z @ 0x1802B73A0 (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_U.c)
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_VELOCITY@@1@Z @ 0x1802B74DC (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_V.c)
 */

void __fastcall CInteractionContextTransformHelper::HimetricToScreen(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_UPDATE *a3,
        struct INTERACTION_VELOCITY *a4,
        struct INTERACTION_UPDATE *a5,
        struct INTERACTION_UPDATE *a6,
        struct INTERACTION_VELOCITY *a7,
        struct INTERACTION_UPDATE *a8)
{
  int v8; // eax

  v8 = 0;
  if ( a3 )
  {
    if ( a6 )
    {
      v8 = CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a3, a6);
      if ( v8 < 0 )
        goto LABEL_12;
    }
  }
  if ( a4 && a7 )
    v8 = CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a4, a7);
  if ( v8 < 0 || a5 && a8 && (int)CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a5, a8) < 0 )
  {
    if ( !a6 )
    {
LABEL_13:
      if ( a7 )
      {
        *(_OWORD *)a7 = 0LL;
        *((_DWORD *)a7 + 4) = 0;
      }
      if ( a8 )
      {
        *(_OWORD *)a8 = 0LL;
        *((_OWORD *)a8 + 1) = 0LL;
      }
      return;
    }
LABEL_12:
    *(_OWORD *)a6 = 0LL;
    *((_OWORD *)a6 + 1) = 0LL;
    goto LABEL_13;
  }
}
