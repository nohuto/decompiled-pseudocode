/*
 * XREFs of x86BiosReadPciDataPort @ 0x1403A5D9C
 * Callers:
 *     x86BiosReadIoSpace @ 0x1403BC880 (x86BiosReadIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall x86BiosReadPciDataPort(int a1, unsigned __int16 a2)
{
  int v2; // ebx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v2 = a1;
  if ( a2 + a1 > 3 )
    v2 = 3 - a2;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *, _QWORD, int))XmGetPciData)(
                       BYTE2(XmPCIConfigAddress),
                       (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3,
                       &v4,
                       a2 | (unsigned int)(unsigned __int8)XmPCIConfigAddress,
                       v2 + 1) )
    return v4;
  else
    return (unsigned int)((1 << (8 * v2 + 8)) - 1);
}
