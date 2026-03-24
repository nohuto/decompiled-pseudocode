/*
 * XREFs of XmOutOp @ 0x140396620
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140396F08 (XmSetSourceValue.c)
 *     x86BiosWriteIoSpace @ 0x1403995A0 (x86BiosWriteIoSpace.c)
 *     longjmp @ 0x1403D0670 (longjmp.c)
 */

__int64 __fastcall XmOutOp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  __int64 v4; // rcx

  if ( (unsigned int)(*(_DWORD *)(a1 + 120) + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  XmSetSourceValue(a1, a1 + 24, a3, *(unsigned __int16 *)(a1 + 108));
  return x86BiosWriteIoSpace(*(unsigned int *)(v4 + 120), v3, *(unsigned int *)(v4 + 108));
}
