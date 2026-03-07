__int64 __fastcall CRenderDataBounds::DrawRectangle(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    CRenderDataBounds::AddBounds(a1, a2);
  return 0LL;
}
