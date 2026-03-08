/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x1403C23D0
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14095E470 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1403C2404 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryMultiSz(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 0;
  if ( a1[1] == 7 )
    LOBYTE(a4) = (unsigned __int8)PnpValidateMultiSzData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3], a3, a4) != 0;
  return a4;
}
