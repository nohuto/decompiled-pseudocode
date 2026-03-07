void __fastcall SC_ENV::Free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
