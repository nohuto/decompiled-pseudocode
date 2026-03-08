/*
 * XREFs of PopHibernateEvaluation @ 0x14082B35C
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140986410 (PopWnfHibernatePolicyCallback.c)
 * Callees:
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 */

__int64 __fastcall PopHibernateEvaluation(char a1, char a2, bool *a3)
{
  bool v4; // r10
  char v5; // cl
  _DWORD *v6; // rdx
  __int64 v7; // r10

  if ( PopHiberEnabledReg == -1 )
    v4 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v4 = PopHiberEnabledReg == 0;
  v5 = v4;
  if ( !PopAllowHibernateReg )
    v5 = 1;
  if ( a1 && PopBootFromVHD )
    v5 = 1;
  if ( a2 )
  {
    v6 = &PopHiberForceDisabledReg;
    v7 = 2LL;
    do
    {
      if ( *v6++ != 0 )
        v5 = 1;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
    *a3 = v5 == 0;
  return PopEnableHiberFile(v5 == 0);
}
