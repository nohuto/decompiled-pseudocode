unsigned __int64 __fastcall PopEtDataSectionReserve(int *a1, unsigned int a2, int *a3)
{
  int v3; // r10d
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = *a3;
  if ( (unsigned int)*a3 >= 0x7FFFFFFF
    || (v4 = a2 * (unsigned __int64)(unsigned int)a1[3], v4 >= 0x7FFFFFFF)
    || (result = v4 + (-a1[4] & (unsigned int)(a1[4] + v3 - 1)), result >= 0x7FFFFFFF) )
  {
    result = 0x7FFFFFFFLL;
  }
  else
  {
    *a1 = -a1[4] & (a1[4] + v3 - 1);
    a1[1] = v4;
    a1[2] = result;
  }
  *a3 = result;
  return result;
}
