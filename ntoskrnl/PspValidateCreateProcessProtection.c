/*
 * XREFs of PspValidateCreateProcessProtection @ 0x14070D630
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x14070C7FC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( (a4 & 4) != 0
    && a3
    && (*(_DWORD *)(a2 + 4) & 0x800) == 0
    && (dword_140A75EE4[3 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 2170) >> 4)] & 0x40) != 0
    && !RtlTestProtectedAccess(a5, *(_BYTE *)(a1 + 2170)) )
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
