/*
 * XREFs of CheckDesktopPolicyChange @ 0x1C015CF60
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(PCUNICODE_STRING Source)
{
  unsigned int v1; // edi
  void *v3; // rsi
  NTSTATUS v4; // ebx
  int v6; // eax
  void *v7; // rbx
  int v8; // eax
  int v9; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 KeyInformation; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]

  v1 = 0;
  v9 = 4;
  ResultLength = 0;
  KeyInformation = 0LL;
  v12 = 0LL;
  v3 = OpenCacheKeyEx(Source, 4LL, 131097LL, &v9);
  if ( v3 )
  {
    v4 = ZwQueryKey(v3, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v3);
    if ( v4 < 0 )
      return 0LL;
    v6 = gdwPolicyFlags | 4;
  }
  else
  {
    v6 = gdwPolicyFlags & 0xFFFFFFFB;
  }
  gdwPolicyFlags = v6;
  if ( qword_1C02D87E0 != KeyInformation )
  {
    qword_1C02D87E0 = KeyInformation;
    v1 = 1;
  }
  KeyInformation = 0LL;
  v9 = 2;
  v7 = OpenCacheKeyEx(Source, 4LL, 131097LL, &v9);
  if ( v7 )
  {
    ZwQueryKey(v7, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v7);
    v8 = gdwPolicyFlags | 2;
  }
  else
  {
    v8 = gdwPolicyFlags & 0xFFFFFFFD;
  }
  gdwPolicyFlags = v8;
  if ( qword_1C02D87E8 != KeyInformation )
  {
    qword_1C02D87E8 = KeyInformation;
    return 1;
  }
  return v1;
}
