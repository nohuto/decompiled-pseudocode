int __fastcall I_MinCryptHashSearchCompare(size_t a1, const void *a2, const void *a3)
{
  return memcmp(a2, a3, a1);
}
