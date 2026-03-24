/*
 * XREFs of XmHltOp @ 0x1404E64F0
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403D0670 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
