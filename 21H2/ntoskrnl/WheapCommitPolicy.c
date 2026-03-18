/*
 * XREFs of WheapCommitPolicy @ 0x140A0980C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140646AB8 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapResetPolicyDefaults @ 0x140A09B3C (WheapResetPolicyDefaults.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406DEF70 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x1408609D0 (RtlCreateRegistryKey.c)
 *     WheapLogPolicyTelemetry @ 0x140A09A80 (WheapLogPolicyTelemetry.c)
 *     WheapPfaReset @ 0x140A0A16C (WheapPfaReset.c)
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
      v4 += 4;
      if ( v3 >= 0x11 )
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
