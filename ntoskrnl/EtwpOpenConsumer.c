/*
 * XREFs of EtwpOpenConsumer @ 0x14074902C
 * Callers:
 *     EtwpRealtimeConnect @ 0x140748BFC (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
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
