/*
 * XREFs of SetAppImeCompatFlags @ 0x1C009D250
 * Callers:
 *     SetAppCompatFlags @ 0x1C009CB70 (SetAppCompatFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SetAppImeCompatFlags(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax
  int v7; // edi
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  Value = 0;
  DefaultLocaleId = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 ? 44 : 30,
                       a2->Buffer,
                       0LL) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( (unsigned __int16)((DefaultLocaleId & 0x3FF) - 17) > 1u || *(_WORD *)(a1 + 632) > 0x30Au )
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 776LL) = Value & 0xC00000;
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 776LL) = Value;
  if ( !gpastrSetupExe )
    return 0LL;
  v7 = 0;
  if ( giSetupExe > 0 )
  {
    while ( RtlCompareUnicodeString(a2, &gpastrSetupExe[v7], 1u) )
    {
      if ( ++v7 >= giSetupExe )
        return v2;
    }
    return 1;
  }
  return v2;
}
