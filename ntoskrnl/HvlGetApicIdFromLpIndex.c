int *__fastcall HvlGetApicIdFromLpIndex(unsigned int a1, _DWORD *a2)
{
  int *result; // rax
  _DWORD *v3; // r10

  *a2 = -1;
  result = (int *)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = HvlpGetLpcbByLpIndex(a1);
    if ( result )
    {
      result = (int *)(unsigned int)result[2];
      *v3 = (_DWORD)result;
    }
  }
  return result;
}
