void __fastcall CD2DEffect::ReleaseD2DResources(CD2DEffect *this)
{
  ReleaseInterface<ID2D1Effect>((__int64 *)this + 10);
}
