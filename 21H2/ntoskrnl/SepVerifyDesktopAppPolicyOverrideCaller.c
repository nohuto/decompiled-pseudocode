/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E12C
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x1407B3B60 (PsReferenceEffectiveToken.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(int a1)
{
  bool v2; // di
  KPROCESSOR_MODE PreviousMode; // dl
  void *v5; // rsi
  char v6; // [rsp+48h] [rbp-C0h] BYREF
  int v7; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  size_t v9; // [rsp+58h] [rbp-B0h] BYREF
  size_t String2; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t v14[128]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v15[128]; // [rsp+198h] [rbp+90h] BYREF

  v8 = 0LL;
  v7 = 0;
  String2 = 256LL;
  v9 = 256LL;
  v2 = 0;
  v6 = 0;
  String2_8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(a1, v14, &v9, 0LL, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v7, &v6, v13, 0LL);
    if ( RtlQueryPackageClaims((int)v5, v15, &String2, 0LL, 0LL, 0LL, (int)&v8, 0LL) >= 0 && (v8 & 4) != 0 )
    {
      String1_8.Length = v9 - 2;
      String1_8.MaximumLength = v9 - 2;
      String1_8.Buffer = v14;
      String2_8.Length = String2 - 2;
      String2_8.MaximumLength = String2 - 2;
      String2_8.Buffer = v15;
      v2 = RtlCompareUnicodeString(&String1_8, &String2_8, 0) == 0;
    }
    if ( v5 )
    {
      if ( v7 == 1 )
        ObFastDereferenceObject(&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5], v5, 1953654867LL);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
