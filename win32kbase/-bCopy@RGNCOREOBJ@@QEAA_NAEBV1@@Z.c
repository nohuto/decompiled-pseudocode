char __fastcall RGNCOREOBJ::bCopy(RGNCOREOBJ *this, const struct RGNCOREOBJ *a2)
{
  PVOID v4; // rbx
  PVOID v6; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v6) = 0;
  if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((unsigned int **)this, a2, (unsigned int *)&v6) )
  {
    RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v6, (unsigned int)v6);
    v4 = v6;
    if ( !v6 )
    {
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v6);
      return 0;
    }
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v6, a2);
    v6 = *(PVOID *)this;
    *(_QWORD *)this = v4;
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v6);
  }
  else
  {
    RGNCOREOBJ::vCopy(this, a2);
  }
  return 1;
}
