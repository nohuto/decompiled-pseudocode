/*
 * XREFs of PspValidateCreateProcessProtection @ 0x1406070DC
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406075FC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v5 = 0;
  if ( (a4 & 4) != 0 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a2 + 4) & 0x800) == 0 )
      {
        v6 = *(unsigned __int8 *)(a1 + 2170);
        v7 = (unsigned int)dword_1409844E4[3 * (v6 >> 4)];
        if ( (v7 & 0x40) != 0 )
        {
          LOBYTE(v7) = a5;
          if ( !(unsigned __int8)RtlTestProtectedAccess(v7, v6) )
            return (unsigned int)-1073741811;
        }
      }
    }
  }
  return v5;
}
