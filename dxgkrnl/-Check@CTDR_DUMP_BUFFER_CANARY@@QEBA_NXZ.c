bool __fastcall CTDR_DUMP_BUFFER_CANARY::Check(const void **this)
{
  const void *v1; // rcx

  v1 = *this;
  return !v1 || RtlCompareMemory(v1, "EOR", 4uLL) == 4;
}
