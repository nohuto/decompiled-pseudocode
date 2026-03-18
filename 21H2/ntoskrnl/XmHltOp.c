/*
 * XREFs of XmHltOp @ 0x1405361D0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
