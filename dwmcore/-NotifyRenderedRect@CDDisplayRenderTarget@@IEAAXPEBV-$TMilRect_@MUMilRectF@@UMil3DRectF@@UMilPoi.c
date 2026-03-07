__int64 __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2, char a3)
{
  bool v4; // cf
  int *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v4 = *(_BYTE *)(a1 + 11217) != 0;
      v8 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + (v4 ? 18344LL : 18208LL)), a2, (float *)&v8);
      a2 = (struct MilRectF *)&v8;
    }
    v5 = PixelAlign(v9, (float *)a2);
    v6 = *(_QWORD *)(a1 + 184);
    a2 = (struct MilRectF *)&v8;
    v8 = *(_OWORD *)v5;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184);
  }
  result = CDDisplaySwapChain::NotifyRenderedRect(v6, a2);
  *(_BYTE *)(a1 + 18664) = 1;
  return result;
}
