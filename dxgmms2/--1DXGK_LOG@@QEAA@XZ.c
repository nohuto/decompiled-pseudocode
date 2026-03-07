void __fastcall DXGK_LOG::~DXGK_LOG(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *this = 0LL;
  }
}
