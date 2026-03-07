CResource **__fastcall wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::`scalar deleting destructor'(
        CResource **a1)
{
  CResource *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CResource::InternalRelease(v2);
  return a1;
}
