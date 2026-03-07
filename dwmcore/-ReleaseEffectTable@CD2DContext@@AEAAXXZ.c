void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  char *v1; // rbx
  __int64 v2; // rdi

  v1 = (char *)this + 216;
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Effect>(v1);
    v1 += 8;
    --v2;
  }
  while ( v2 );
}
