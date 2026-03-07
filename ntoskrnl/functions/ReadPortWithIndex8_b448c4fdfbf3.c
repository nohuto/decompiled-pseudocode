__int64 __fastcall ReadPortWithIndex8(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))UartHardwareAccess[0])(*(_QWORD *)a1 + a2
                                                                               * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
