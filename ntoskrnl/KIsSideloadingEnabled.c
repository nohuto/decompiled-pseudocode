/*
 * XREFs of KIsSideloadingEnabled @ 0x140A077B0
 * Callers:
 *     SepIsLockedDown @ 0x1409C5D5C (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402FBD38 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x1402FBD4C (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x140792DC4 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140797AB4 (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int v2; // ebx
  int v3; // eax
  UNICODE_STRING v5; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  *(_QWORD *)&v6.Length = 7733364LL;
  *(_QWORD *)&v5.Length = 2621478LL;
  v6.Buffer = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v5.Buffer = L"AllowAllTrustedApps";
  v8 = 0xFFFF;
  v7 = 0LL;
  v2 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &v7);
  if ( v2 < 0 )
    goto LABEL_9;
  v2 = KGetUnlockSetting(&v7, &v5, &v8);
  if ( v2 < 0 )
    goto LABEL_9;
  if ( CmIsStateSeparationEnabled() )
  {
    v3 = v8;
    if ( v8 != 0xFFFF )
      goto LABEL_7;
    v2 = KGetUnlockSetting(&v6, &v5, &v8);
    if ( v2 < 0 )
      goto LABEL_9;
  }
  v3 = v8;
LABEL_7:
  if ( v3 )
    *a1 = 1;
LABEL_9:
  AppModelFreeUnicodeString((__int64)&v7);
  return (unsigned int)v2;
}
