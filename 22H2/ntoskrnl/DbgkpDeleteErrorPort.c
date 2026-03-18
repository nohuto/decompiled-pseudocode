/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140939FF4
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14053BC38 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1409399C4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
