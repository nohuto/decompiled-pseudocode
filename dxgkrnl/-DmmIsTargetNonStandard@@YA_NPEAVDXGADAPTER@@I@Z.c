bool __fastcall DmmIsTargetNonStandard(struct DXGADAPTER *a1, int a2)
{
  return (unsigned int)DmmGetTargetUsage((__int64)a1, a2, 0LL) != 0;
}
