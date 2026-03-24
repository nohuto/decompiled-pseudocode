/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x1406023FC
 * Callers:
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x14062B3BC (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EBB0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14024EE40 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x140601050 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall EtwpQueryTokenPackageInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  size_t *v3; // rdi
  int v6; // ebp
  __int64 result; // rax
  char v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (size_t *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  v8 = 0;
  v9 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = a1;
  PsQueryProcessAttributesByToken(a1, &v8, &v9);
  if ( v8 )
  {
    *a3 |= 1u;
    *(_QWORD *)a2 = 256LL;
    *v3 = 130LL;
    if ( RtlQueryPackageIdentity(v6, (wchar_t *)(a2 + 16), (size_t *)a2, (wchar_t *)(a2 + 272), v3, 0LL) < 0 )
    {
      *(_QWORD *)a2 = 0LL;
      *v3 = 0LL;
    }
    if ( v9 )
      *a3 |= 8u;
  }
  result = 2LL;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 2LL;
    *(_WORD *)(a2 + 16) = 0;
  }
  if ( !*v3 )
  {
    *v3 = 2LL;
    *(_WORD *)(a2 + 272) = 0;
  }
  return result;
}
