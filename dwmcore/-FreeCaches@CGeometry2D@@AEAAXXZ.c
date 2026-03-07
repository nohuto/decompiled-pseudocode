void __fastcall CGeometry2D::FreeCaches(void **this)
{
  void *v2; // rcx

  operator delete(this[8]);
  v2 = this[9];
  this[8] = 0LL;
  operator delete(v2);
  this[9] = 0LL;
}
