/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140887098
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404EE018 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
