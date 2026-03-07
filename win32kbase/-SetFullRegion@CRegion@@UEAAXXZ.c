void __fastcall CRegion::SetFullRegion(CRegion *this)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (PVOID)*((_QWORD *)this + 2);
  if ( v2 )
  {
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 1;
}
