/*
 * XREFs of MiDereferenceEnclaveModule @ 0x140A3B18C
 * Callers:
 *     MiFreeEnclaveModules @ 0x140A3B1B0 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
