/*
 * XREFs of PopHibernateEvaluation @ 0x140818DF4
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x14098FB30 (PopWnfHibernatePolicyCallback.c)
 * Callees:
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 */

__int64 __fastcall PopHibernateEvaluation(char a1, _DWORD *a2, bool *a3)
{
  bool v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r10
  bool v7; // zf

  if ( PopHiberEnabledReg == -1 )
    v4 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v4 = PopHiberEnabledReg == 0;
  v5 = v4;
  if ( !PopAllowHibernateReg )
    v5 = 1LL;
  if ( a1 )
  {
    v5 = (unsigned __int8)v5;
    if ( PopBootFromVHD )
      v5 = 1LL;
  }
  if ( (_BYTE)a2 )
  {
    a2 = &PopHiberForceDisabledReg;
    v6 = 2LL;
    do
    {
      v7 = *a2++ == 0;
      v5 = (unsigned __int8)v5;
      if ( !v7 )
        v5 = 1LL;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 )
    *a3 = (_BYTE)v5 == 0;
  LOBYTE(v5) = (_BYTE)v5 == 0;
  return PopEnableHiberFile(v5, a2, a3, 0LL);
}
