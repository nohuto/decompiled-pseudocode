__int64 __fastcall CInteractionContextTransformHelper::TransformCoordinateSpace(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_VELOCITY *a3,
        struct INTERACTION_VELOCITY *a4)
{
  unsigned int v4; // r10d
  float v5; // xmm2_4

  v4 = 0;
  if ( a1->left == a1->right || a1->top == a1->bottom || a2->left == a2->right || a2->top == a2->bottom )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    if ( a3 != a4 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a3;
      *((_DWORD *)a4 + 4) = *((_DWORD *)a3 + 4);
    }
    v5 = *((float *)a3 + 1);
    *(float *)a4 = (float)((float)(a2->right - a2->left) * *(float *)a3) / (float)(a1->right - a1->left);
    *((float *)a4 + 1) = (float)((float)(a2->bottom - a2->top) * v5) / (float)(a1->bottom - a1->top);
    *((float *)a4 + 3) = (float)((float)((float)((float)(a2->right - a2->left) * *((float *)a3 + 3))
                                       / (float)(a1->right - a1->left))
                               + (float)((float)((float)(a2->bottom - a2->top) * *((float *)a3 + 3))
                                       / (float)(a1->bottom - a1->top)))
                       * 0.5;
  }
  return v4;
}
