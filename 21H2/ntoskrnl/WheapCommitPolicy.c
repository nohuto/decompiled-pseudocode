/*
 * XREFs of WheapCommitPolicy @ 0x14095DF30
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1405BE110 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x14061AFF0 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x1407D0E70 (RtlCreateRegistryKey.c)
 *     WheapLogPolicyTelemetry @ 0x14095E15C (WheapLogPolicyTelemetry.c)
 *     WheapPfaReset @ 0x14095E7A4 (WheapPfaReset.c)
 */

__int64 WheapCommitPolicy()
{
  NTSTATUS RegistryKey; // ebx
  char v1; // bp
  _BYTE *v2; // rdi
  unsigned int v3; // esi
  wchar_t **v4; // r14

  RegistryKey = RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  if ( RegistryKey < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey >= 0 )
      RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  }
  if ( RegistryKey >= 0 )
  {
    v1 = 0;
    v2 = WheaRegPolicyTableChanged;
    v3 = 0;
    v4 = &WheaRegPolicyTable;
    while ( 1 )
    {
      if ( *v2 )
      {
        v1 = 1;
        RegistryKey = RtlWriteRegistryValue(2u, L"WHEA\\Policy", *v4, 4u, v4[1], 4u);
        if ( RegistryKey < 0 )
          break;
      }
      ++v3;
      ++v2;
      v4 += 3;
      if ( v3 >= 0xD )
      {
        if ( v1 )
          WheapPfaReset();
        break;
      }
    }
    WheapLogPolicyTelemetry();
  }
  return (unsigned int)RegistryKey;
}
