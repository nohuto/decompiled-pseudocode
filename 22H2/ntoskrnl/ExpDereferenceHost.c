/*
 * XREFs of ExpDereferenceHost @ 0x140A0165C
 * Callers:
 *     ExRegisterExtension @ 0x140823170 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140823390 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140A01570 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
