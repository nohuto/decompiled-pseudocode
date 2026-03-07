void __fastcall CD2DInk::ReleaseD2DResources(CD2DInk *this)
{
  ReleaseInterface<ID2D1Ink>((__int64 *)this + 10);
  ReleaseInterface<ID2D1InkStyle>((__int64 *)this + 11);
}
