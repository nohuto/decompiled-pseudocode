void __fastcall RGNCOREOBJ::vDeleteRGNCOREOBJ(PVOID *this)
{
  void *v2; // rcx

  if ( *this )
  {
    v2 = (void *)*((_QWORD *)*this + 1);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(*this, 0);
  }
}
