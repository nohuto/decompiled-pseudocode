__int64 __fastcall PiCreateDriverRedirectedStateKey(__int64 CreateOptions, __int64 a2, _QWORD *a3)
{
  int StateRootPath; // edi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( CreateOptions && *(_QWORD *)(CreateOptions + 8) && *(_WORD *)CreateOptions >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath");
    if ( StateRootPath >= 0 )
    {
      StateRootPath = PiCreateServiceKeyUnderPath(CreateOptions, &UnicodeString);
      if ( StateRootPath >= 0 )
        *a3 = 0LL;
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)StateRootPath;
}
