/*
 * XREFs of PspIumGetSystemData @ 0x1409B3428
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIumGetSystemData(_DWORD *a1)
{
  __int64 result; // rax

  a1[2] = 0;
  a1[3] = KiLastBranchTOSMSR;
  a1[4] = KiLastBranchFromBaseMSR;
  a1[5] = KiLastBranchToBaseMSR;
  a1[6] = KiLastExceptionFromBaseMSR;
  result = (unsigned int)KiLastExceptionToBaseMSR;
  a1[7] = KiLastExceptionToBaseMSR;
  return result;
}
