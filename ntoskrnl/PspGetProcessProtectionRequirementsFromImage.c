/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x14070D5FC
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140858F60 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x14070C7FC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int8 v1; // r9
  unsigned __int8 *v2; // r11
  char v4; // r10
  char v5; // r9

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF0) == 0x50 )
  {
    v4 = -127;
    if ( v1 && v1 != 0x81 && RtlTestProtectedAccess(v1, 0x81u) )
      v4 = v5;
    v1 = v4;
  }
  *v2 = v1;
  return 0LL;
}
