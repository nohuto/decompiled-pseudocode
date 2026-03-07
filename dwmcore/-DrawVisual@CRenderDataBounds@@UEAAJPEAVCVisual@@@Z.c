__int64 __fastcall CRenderDataBounds::DrawVisual(CRenderDataBounds *this, struct CVisual *a2)
{
  struct CVisualTree *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v5);
    CVisual::GetVisualTree(a2, &v5, 0);
    if ( (int)CVisualTree::Clean(v5, 0LL) < 0 )
    {
      *((_BYTE *)this + 96) = 1;
      *(_OWORD *)((char *)this + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      CRenderDataBounds::AddBounds(this, (char *)a2 + 148);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v5);
  }
  return 0LL;
}
