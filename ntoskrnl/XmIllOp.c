/*
 * XREFs of XmIllOp @ 0x1405320B0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
