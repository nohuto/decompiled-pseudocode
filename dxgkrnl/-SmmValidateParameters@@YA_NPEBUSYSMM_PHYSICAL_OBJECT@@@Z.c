char __fastcall SmmValidateParameters(const struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 || KeGetCurrentIrql() <= 1u )
    return 1;
  WdLogSingleEntry1(3LL, a1);
  return 0;
}
