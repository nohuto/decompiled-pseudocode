/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x140696B38
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x14069708C (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  PS_PROTECTION v1; // r9
  unsigned __int8 *v2; // r11
  char v4; // r10
  char v5; // r9

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF0) == 0x50 )
  {
    v4 = -127;
    if ( v1.Level && v1.Level != 0x81 && RtlTestProtectedAccess(v1, (PS_PROTECTION)-127) )
      v4 = v5;
    v1.Level = v4;
  }
  *v2 = v1.Level;
  return 0LL;
}
