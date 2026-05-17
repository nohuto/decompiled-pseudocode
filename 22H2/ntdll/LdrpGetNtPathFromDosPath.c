/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x1800607DC
 * Callers:
 *     LdrpResolveDllName @ 0x180060634 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180061A48 (LdrpMapDllRetry.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800608B4 (RtlDosPathNameToRelativeNtPathName.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009DC80 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpGetNtPathFromDosPath(int a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 *v8; // [rsp+40h] [rbp-39h] BYREF
  __int128 v9; // [rsp+48h] [rbp-31h] BYREF
  int v10; // [rsp+58h] [rbp-21h] BYREF
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  __int128 v14; // [rsp+78h] [rbp-1h]
  _BYTE v15[40]; // [rsp+88h] [rbp+Fh] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  result = RtlDosPathNameToRelativeNtPathName(a1, a2, v2, a2, (__int64)&v9, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    if ( v8 == &v9 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v6 )
        NtdllpFreeStringRoutine(v6);
      v7 = v9;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v7;
    }
    v5 = 64;
    v10 = 48;
    v11 = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v5 = 2112;
    v12 = a2;
    v13 = v5;
    v14 = 0LL;
    return ZwQueryAttributesFile(&v10, v15);
  }
  return result;
}
