/*
 * XREFs of EtwpOpenConsumer @ 0x1407F5F94
 * Callers:
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall EtwpOpenConsumer(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           KeGetCurrentThread()->ApcState.Process,
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
