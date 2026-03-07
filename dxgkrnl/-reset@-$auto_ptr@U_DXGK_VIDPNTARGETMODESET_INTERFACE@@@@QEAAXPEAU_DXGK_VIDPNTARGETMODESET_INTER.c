void __fastcall auto_ptr<_DXGK_VIDPNTARGETMODESET_INTERFACE>::reset(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 && v4 )
    ExFreePoolWithTag(v4, 0);
  *a1 = a2;
}
