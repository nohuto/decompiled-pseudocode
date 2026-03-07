char __fastcall TryCopyMemoryFromProbedPointer(void *a1, void *a2, unsigned int a3)
{
  memmove(a1, a2, a3);
  return 1;
}
