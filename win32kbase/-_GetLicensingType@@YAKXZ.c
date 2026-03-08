/*
 * XREFs of ?_GetLicensingType@@YAKXZ @ 0x1C01E0D6C
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1C01E1A0C (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

__int64 _GetLicensingType(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  v4 = 4;
  v2 = 0;
  v3 = 0;
  if ( (int)ZwQueryLicenseValue(L"DF", &v2, &v3, 4LL, &v4) >= 0 && v2 == 4 )
    return v3;
  return v0;
}
