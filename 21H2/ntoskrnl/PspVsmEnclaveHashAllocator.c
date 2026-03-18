/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x1409B497C
 * Callers:
 *     PsCreateVsmEnclave @ 0x1409B3D44 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall PspVsmEnclaveHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}
