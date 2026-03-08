/*
 * XREFs of PspSiloGetMultiUserTsFromRegistry @ 0x1409AA4F0
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x1409AA6D8 (PspSiloInitializeSuiteMask.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetMultiUserTsFromRegistry(_BYTE *a1)
{
  char v1; // bl
  __int64 result; // rax
  _QWORD v4[15]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0;
  memset(v4, 0, 0x70uLL);
  LODWORD(v4[1]) = 292;
  v4[2] = L"TSAppCompat";
  LODWORD(v4[4]) = 0x4000000;
  v4[3] = &v5;
  result = RtlpQueryRegistryValues(2LL, L"Terminal Server", v4, 0LL);
  if ( (_DWORD)result == -1073741772 )
  {
    result = 0LL;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v1 = v5;
  }
  *a1 = v1;
  return result;
}
