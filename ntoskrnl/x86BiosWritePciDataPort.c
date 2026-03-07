__int64 __fastcall x86BiosWritePciDataPort(int a1, unsigned __int16 a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  if ( a2 + a1 > 3 )
    a1 = 3 - a2;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmSetPciData)(
           BYTE2(XmPCIConfigAddress),
           (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3,
           &v4,
           a2 | (unsigned int)(unsigned __int8)XmPCIConfigAddress,
           a1 + 1);
}
