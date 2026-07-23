/*
 * XREFs of LdrpInitializePolicy @ 0x180080418
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x18006A8E8 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x1800805D0 (LdrSetDefaultDllDirectories.c)
 */

int LdrpInitializePolicy()
{
  struct _PEB *v0; // rax
  _UNICODE_STRING *p_DllPath; // rcx
  unsigned __int8 BitField; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _PS_PKG_CLAIM v9; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  _PS_PKG_CLAIM v11; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  _PS_PKG_CLAIM v13; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  _PS_PKG_CLAIM v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+20h] BYREF
  _PS_PKG_CLAIM v18; // [rsp+A0h] [rbp+28h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+30h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  BitField = v0->BitField;
  if ( (BitField & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal((__int64)p_DllPath, 4, &v16, &v18, &v17) < 0 || v16 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, &v16, &v9, &v19) >= 0 && v16 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, &v16, &v11, &v10) >= 0 && v16 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 32, &v16, &v13, &v12) >= 0 && v16 == 2097153 )
      LdrpPolicyBits |= 4u;
    LODWORD(v0) = AppModelPolicy_GetPolicy_Internal(v7, 54, &v16, &v15, &v14) | 0x10000000;
    if ( (int)v0 >= 0 && v16 == 3538945 )
      LdrpPolicyBits |= 0x100u;
  }
  else if ( (BitField & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LODWORD(v0) = LdrSetDllDirectory(p_DllPath);
  }
  return (int)v0;
}
