/*
 * XREFs of XmOutOp @ 0x1403B3770
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     x86BiosWriteIoSpace @ 0x1403BC9E0 (x86BiosWriteIoSpace.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmOutOp(__int64 a1)
{
  unsigned __int16 v1; // r9
  __int64 v2; // rcx

  if ( (unsigned int)(*(_DWORD *)(a1 + 120) + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  XmSetSourceValue(a1, a1 + 24);
  return x86BiosWriteIoSpace(*(unsigned int *)(v2 + 120), v1, *(unsigned int *)(v2 + 108));
}
