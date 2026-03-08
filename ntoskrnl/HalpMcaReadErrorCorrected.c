/*
 * XREFs of HalpMcaReadErrorCorrected @ 0x140503FDC
 * Callers:
 *     HalpMcaReadError @ 0x1405014E0 (HalpMcaReadError.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 */

char __fastcall HalpMcaReadErrorCorrected(__int64 *a1, _BYTE *a2)
{
  char result; // al
  __int64 v5; // r8

  result = HalpGetCpuVendor();
  v5 = *a1;
  if ( result == 1 )
  {
    if ( (v5 & 0x2000000000000000LL) == 0 )
    {
      if ( *((_BYTE *)a1 + 8) )
      {
        if ( (v5 & 0x100000000000LL) != 0 )
          a2[1] = 1;
      }
      goto LABEL_15;
    }
    if ( HalpMcaRecoverySupported && (v5 & 0x200000000000000LL) == 0 )
      goto LABEL_13;
  }
  else
  {
    if ( result != 2 )
    {
      if ( (v5 & 0x2000000000000000LL) != 0 )
        return result;
      goto LABEL_15;
    }
    if ( (v5 & 0x2000000000000000LL) == 0 )
    {
LABEL_15:
      *a2 = 1;
      return result;
    }
    if ( *((_BYTE *)a1 + 8) )
    {
      result = 0;
      if ( (v5 & 0x300000000000000LL) == 0 )
LABEL_13:
        *(_WORD *)a2 = 257;
    }
  }
  return result;
}
