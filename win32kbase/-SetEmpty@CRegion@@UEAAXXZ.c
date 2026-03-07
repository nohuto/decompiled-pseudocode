void __fastcall CRegion::SetEmpty(CRegion *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    RGNCOREOBJ::vDeleteRGNCOREOBJ((RGNCOREOBJ *)&v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
