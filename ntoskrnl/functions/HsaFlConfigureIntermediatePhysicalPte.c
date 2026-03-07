char __fastcall HsaFlConfigureIntermediatePhysicalPte(unsigned __int64 *a1, int a2, __int64 a3)
{
  char result; // al

  if ( *a1 || !a2 )
    return 0;
  result = 1;
  *a1 = a3 & 0xFFFFFFFFFF000LL | 0x8000000000000007uLL;
  return result;
}
