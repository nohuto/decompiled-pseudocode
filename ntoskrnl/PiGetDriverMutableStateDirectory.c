/*
 * XREFs of PiGetDriverMutableStateDirectory @ 0x1409530D4
 * Callers:
 *     IoGetDriverDirectory @ 0x140952490 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403C1A7C (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopAllocateUnicodeString @ 0x140683958 (IopAllocateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiGetStateRootPath @ 0x14086F420 (PiGetStateRootPath.c)
 *     PiOpenDirectoryWithRoot @ 0x140953234 (PiOpenDirectoryWithRoot.c)
 */

__int64 __fastcall PiGetDriverMutableStateDirectory(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  void *v6; // rdi
  int StateRootPath; // ebx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF

  v12 = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  StateRootPath = PiGetStateRootPath(L"Win32ServiceStateRoot", L"\\SystemRoot\\ServiceState", 1u, &DestinationString);
  if ( StateRootPath >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    v10 = DestinationString.Length + *a1 + 4 + 2 * v9;
    if ( v10 <= 0xFFFE )
    {
      StateRootPath = IopAllocateUnicodeString((__int64)&UnicodeString, v10);
      if ( StateRootPath >= 0 )
      {
        StateRootPath = RtlUnicodeStringPrintfEx(
                          &UnicodeString,
                          0LL,
                          0x800u,
                          L"%wZ\\%wZ\\%ws",
                          &DestinationString,
                          a1,
                          a2);
        if ( StateRootPath >= 0 )
        {
          StateRootPath = PiOpenDirectoryWithRoot(&DestinationString, &UnicodeString, (__int64)&v12);
          if ( StateRootPath < 0 )
            v6 = (void *)v12;
          else
            *a4 = v12;
        }
      }
    }
    else
    {
      StateRootPath = -2147483643;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)StateRootPath;
}
