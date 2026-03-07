__int64 __fastcall AuthzBasepMemAlloc(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3);
}
