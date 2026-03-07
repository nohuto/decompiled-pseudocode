__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HalpMmAllocCtxFree(a1, a1, a3, a4);
}
