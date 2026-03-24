/*
 * XREFs of ExpDereferenceHost @ 0x140956B3C
 * Callers:
 *     ExRegisterExtension @ 0x14079DC30 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DE50 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140956A50 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
