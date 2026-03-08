/*
 * XREFs of WindowsQueryLicenseDWORD @ 0x1C001D44C
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     InternalRtlGetLicenseData @ 0x1C001D58C (InternalRtlGetLicenseData.c)
 */

__int64 __fastcall WindowsQueryLicenseDWORD(__int64 a1, _DWORD *a2)
{
  PVOID v2; // rcx
  int LicenseData; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v8 = HIDWORD(a1);
  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( a2 )
  {
    LicenseData = InternalRtlGetLicenseData(0LL, a2, &v7, &P);
    v2 = P;
    v5 = LicenseData;
    if ( LicenseData >= 0 )
    {
      if ( !P )
        return v5;
      v5 = 0;
      *a2 = *(_DWORD *)P;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v5;
}
