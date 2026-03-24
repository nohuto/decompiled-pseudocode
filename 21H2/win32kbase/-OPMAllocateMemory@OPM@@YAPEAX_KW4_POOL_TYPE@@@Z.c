/*
 * XREFs of ?OPMAllocateMemory@OPM@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00B0830
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C013FA0C (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall OPM::OPMAllocateMemory(SIZE_T NumberOfBytes, POOL_TYPE PoolType, enum _POOL_TYPE a3)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x4D504F47u);
}
