__int64 __fastcall VfMiscMmAllocateContiguousMemoryEx_Entry(_QWORD *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1[8] == 0LL;
  return ViMiscEnforceRule(a1, *a1, a3);
}
