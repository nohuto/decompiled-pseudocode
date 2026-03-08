/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x140A30984
 * Callers:
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 * Callees:
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v2 = a2 == 0;
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v2 )
  {
    MiReturnResident((__int64)MiSystemPartition, v3);
    return 1LL;
  }
  result = MiChargeResident(MiSystemPartition, v3, 1024LL);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
