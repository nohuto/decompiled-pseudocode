/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x1408CFCC0
 * Callers:
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1405408EC (MiEnableLargeSubsection.c)
 * Callees:
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiReturnResident @ 0x1402E9FEC (MiReturnResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 == 0;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v4 )
  {
    MiReturnResident((__int64)&MiSystemPartition, v5);
    return 1LL;
  }
  result = MiChargeResident(&MiSystemPartition, v5, 1024LL, a4);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
