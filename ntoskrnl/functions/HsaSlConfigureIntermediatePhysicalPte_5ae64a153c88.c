char __fastcall HsaSlConfigureIntermediatePhysicalPte(unsigned __int64 *a1, int a2, __int64 a3)
{
  if ( *a1 || !a2 )
    return 0;
  *a1 = *a1 & 0xFFF00000000001FFuLL | a3 & 0xFFFFFFFFFF000LL | ((unsigned __int64)(a2 & 7) << 9) | 0x6000000000000001LL;
  return 1;
}
