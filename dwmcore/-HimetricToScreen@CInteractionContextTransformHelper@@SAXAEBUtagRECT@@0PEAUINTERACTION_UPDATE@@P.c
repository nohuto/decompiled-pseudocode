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
