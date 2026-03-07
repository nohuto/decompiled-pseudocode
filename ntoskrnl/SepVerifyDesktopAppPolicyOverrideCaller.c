char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(int a1)
{
  bool v2; // di
  KPROCESSOR_MODE PreviousMode; // dl
  void *v5; // rsi
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  size_t v8; // [rsp+58h] [rbp-B0h] BYREF
  size_t String2; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v12[16]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t v13[128]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v14[128]; // [rsp+198h] [rbp+90h] BYREF

  v7 = 0LL;
  HIDWORD(v6) = 0;
  String2 = 256LL;
  v8 = 256LL;
  v2 = 0;
  String2_8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(a1, v13, &v8, 0LL, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(
                   (unsigned int)KeGetCurrentThread(),
                   1953654867,
                   (unsigned int)&v6 + 4,
                   (unsigned int)&v6,
                   (__int64)v12,
                   0LL);
    if ( RtlQueryPackageClaims((int)v5, v14, &String2, 0LL, 0LL, 0LL, (int)&v7, 0LL) >= 0 && (v7 & 4) != 0 )
    {
      String1_8.Length = v8 - 2;
      String1_8.MaximumLength = v8 - 2;
      String1_8.Buffer = v13;
      String2_8.Length = String2 - 2;
      String2_8.MaximumLength = String2 - 2;
      String2_8.Buffer = v14;
      v2 = RtlCompareUnicodeString(&String1_8, &String2_8, 0) == 0;
    }
    if ( v5 )
    {
      if ( HIDWORD(v6) == 1 )
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
          (unsigned __int64)v5,
          0x74726853u);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
