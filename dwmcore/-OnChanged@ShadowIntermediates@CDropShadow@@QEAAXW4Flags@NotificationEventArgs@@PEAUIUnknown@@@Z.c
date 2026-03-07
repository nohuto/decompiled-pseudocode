void __fastcall CDropShadow::ShadowIntermediates::OnChanged(__int64 *a1, __int64 a2, __int64 a3)
{
  if ( a1[6]
    && a3 == a1[6]
    && !CDropShadow::ShadowIntermediates::IsRectangularShadow((CDropShadow::ShadowIntermediates *)a1) )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(a1 + 7);
  }
}
