/*
 * XREFs of XmHltOp @ 0x140531900
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
