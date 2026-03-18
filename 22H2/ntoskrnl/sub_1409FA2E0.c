/*
 * XREFs of sub_1409FA2E0 @ 0x1409FA2E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetLicenseTamperState @ 0x1406090CC (ExpGetLicenseTamperState.c)
 *     sub_1409F994C @ 0x1409F994C (sub_1409F994C.c)
 */

__int64 __fastcall sub_1409FA2E0(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v9; // ecx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  ExpGetLicenseTamperState(a1, v11);
  if ( v11[0] )
  {
    *a6 = 1;
    return (unsigned int)sub_1409F994C(a2, a3, a4, a5, 0);
  }
  else
  {
    v9 = -1073741772;
    *a6 = 0;
  }
  return v9;
}
