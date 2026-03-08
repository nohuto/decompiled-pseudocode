/*
 * XREFs of ExpDereferenceHost @ 0x1409FE96C
 * Callers:
 *     ExRegisterExtension @ 0x14080ECD0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14080EEF0 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1409FE880 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
