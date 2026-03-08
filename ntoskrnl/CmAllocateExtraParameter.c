/*
 * XREFs of CmAllocateExtraParameter @ 0x140797310
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1406C1A34 (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 */

__int64 CmAllocateExtraParameter()
{
  __int64 result; // rax

  result = CmpAllocatePool(256LL, 80LL, 1346719043LL);
  if ( result )
  {
    *(_QWORD *)(result + 40) = 32LL;
    *(_QWORD *)(result + 32) = VrpOriginalKeyNameParameterCleanup;
    *(_OWORD *)(result + 16) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
    result += 48LL;
  }
  return result;
}
