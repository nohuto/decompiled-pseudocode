__int64 __fastcall CInteractionContextTransformHelper::TransformCoordinateSpace(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_UPDATE *a3,
        struct INTERACTION_UPDATE *a4)
{
  float v4; // xmm2_4
  unsigned int v5; // r11d
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9

  if ( a1->left == a1->right || a1->top == a1->bottom || a2->left == a2->right || a2->top == a2->bottom )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    if ( a3 != a4 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a3;
      *((_OWORD *)a4 + 1) = *((_OWORD *)a3 + 1);
    }
    v4 = *((float *)a3 + 1);
    *(float *)a4 = (float)((float)(a2->right - a2->left) * *(float *)a3) / (float)(a1->right - a1->left);
    *((float *)a4 + 1) = (float)((float)(a2->bottom - a2->top) * v4) / (float)(a1->bottom - a1->top);
    TransformPoint(&a1->left, &a2->left, *((float *)a3 + 4), *((float *)a3 + 5), (float *)a4 + 4, (float *)a4 + 5);
    *(float *)(v9 + 28) = (float)((float)((float)((float)(v6[2] - *v6) * *(float *)(v8 + 28)) / (float)(v7[2] - *v7))
                                + (float)((float)((float)(v6[3] - v6[1]) * *(float *)(v8 + 28)) / (float)(v7[3] - v7[1])))
                        * 0.5;
  }
  return v5;
}
