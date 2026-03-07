char __fastcall EtwTraceFocusChange(__int64 a1, int a2)
{
  char result; // al

  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000002000uLL) != 0 )
  {
    result = byte_1C02C4068 - 1;
    if ( (unsigned __int8)(byte_1C02C4068 - 1) > 2u && (qword_1C02C4050 & 0x8000000000002000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C02C4058 & 0x8000000000002000uLL) == qword_1C02C4058 && (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        return McTemplateK0dq_EtwWriteTransfer(a1, &FocusEvent, 0x8000000000002000uLL, (unsigned int)a1, a2);
    }
  }
  return result;
}
