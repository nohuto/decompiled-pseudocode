_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(void **a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(*a1, a2 + 48, 0LL) != 0;
}
