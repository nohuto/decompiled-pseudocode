__int64 __fastcall HalpApicStartProcessor(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v6; // edi

  if ( (a4 & 0xFFF00FFF) != 0 )
    return 3221225485LL;
  KeStallExecutionProcessor(0xC8u);
  ((void (*)(void))HalpApicWaitForCommand)();
  if ( !HalpApicX2Mode )
    a2 <<= 24;
  ((void (__fastcall *)(_QWORD, __int64))HalpApicWriteCommand)(a2, 50432LL);
  KeStallExecutionProcessor(0xAu);
  ((void (__fastcall *)(_QWORD, __int64))HalpApicWriteCommand)(a2, 34048LL);
  KeStallExecutionProcessor(0xC8u);
  v6 = (a4 & 0xFF000 | 0x600000u) >> 12;
  ((void (__fastcall *)(_QWORD, _QWORD))HalpApicWriteCommand)(a2, v6);
  KeStallExecutionProcessor(0xC8u);
  ((void (*)(void))HalpApicWaitForCommand)();
  KeStallExecutionProcessor(0x64u);
  ((void (__fastcall *)(_QWORD, _QWORD))HalpApicWriteCommand)(a2, v6);
  KeStallExecutionProcessor(0xC8u);
  return 0LL;
}
