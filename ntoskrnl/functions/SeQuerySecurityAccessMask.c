int __fastcall SeQuerySecurityAccessMask(int a1, int *a2)
{
  int result; // eax

  result = 0;
  *a2 = 0;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 16908288;
    *a2 = 16908288;
  }
  if ( (a1 & 0x17) != 0 )
  {
    result |= 0x20000u;
    *a2 = result;
  }
  if ( (a1 & 0x20) != 0 )
  {
    result |= 0x20000u;
    *a2 = result;
  }
  if ( (a1 & 0x40) != 0 )
  {
    result |= 0x20000u;
    *a2 = result;
  }
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 0x20000u;
    *a2 = result;
  }
  if ( (a1 & 0x100) != 0 )
  {
    result |= 0x20000u;
    *a2 = result;
  }
  if ( (a1 & 8) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  return result;
}
