__int64 __fastcall CInteractionContextTransformHelper::TransformInput(
        CInteractionContextTransformHelper *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        struct tagPOINTER_INFO *a4)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_OWORD *)a4 = *(_OWORD *)a2;
  *((_OWORD *)a4 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a4 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a4 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a4 + 5) = *((_OWORD *)a2 + 5);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    LOBYTE(v4) = -(char)v4;
    s_TransformPointByMatrix(v6 + ((_BYTE)v4 != 0 ? 144LL : 72LL), v5 + 40, v4);
    s_TransformPointByMatrix(v8, v7 + 56, v9);
  }
  return 0LL;
}
