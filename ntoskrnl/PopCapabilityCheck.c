/*
 * XREFs of PopCapabilityCheck @ 0x140584CB8
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  wchar_t *v1; // rax
  __int64 v2; // rdx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    String2 = 0LL;
    v2 = 0x7FFFLL;
    do
    {
      if ( !*v1 )
        break;
      ++v1;
      --v2;
    }
    while ( v2 );
    if ( v2 )
    {
      String2.Buffer = a1;
      String2.Length = 2 * (0x7FFF - v2);
      String2.MaximumLength = String2.Length + 2;
      RtlCapabilityCheck(0LL, &String2);
    }
  }
  return 0;
}
