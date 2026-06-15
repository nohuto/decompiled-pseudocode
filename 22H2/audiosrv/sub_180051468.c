/*
 * XREFs of sub_180051468 @ 0x180051468
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 * Callees:
 *     sub_18005151C @ 0x18005151C (sub_18005151C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

int __fastcall sub_180051468(SAFEARRAY **ppsaOut, SAFEARRAY *psa)
{
  HRESULT Vartype; // eax
  VARTYPE v5; // r8
  int v6; // eax
  int result; // eax
  VARTYPE pvt; // [rsp+38h] [rbp+10h] BYREF

  if ( !psa )
    goto LABEL_15;
  Vartype = SafeArrayGetVartype(psa, &pvt);
  v5 = pvt;
  if ( Vartype < 0 )
    sub_1800B8610((unsigned int)Vartype);
  if ( pvt == 13 && (psa->fFeatures & 0x440) == 0x440 )
  {
    v5 = 9;
    pvt = 9;
  }
  if ( v5 != 4 )
LABEL_15:
    sub_1800B8610(2147942487LL);
  v6 = sub_18005151C(ppsaOut);
  if ( v6 < 0 )
    sub_1800B8610((unsigned int)v6);
  result = SafeArrayCopy(psa, ppsaOut);
  if ( result < 0 )
    sub_1800B8610((unsigned int)result);
  if ( *ppsaOut )
    return SafeArrayLock(*ppsaOut);
  return result;
}
