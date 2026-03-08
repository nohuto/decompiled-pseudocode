/*
 * XREFs of XmInOp @ 0x1403B38C0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 *     x86BiosReadIoSpace @ 0x1403BC880 (x86BiosReadIoSpace.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmInOp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int IoSpace; // eax

  v2 = *(unsigned int *)(a1 + 120);
  if ( (unsigned int)(v2 + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  v3 = *(unsigned __int16 *)(a1 + 108);
  *(_QWORD *)(a1 + 88) = a1 + 24;
  IoSpace = x86BiosReadIoSpace(v2, v3);
  return XmStoreResult(a1, IoSpace);
}
