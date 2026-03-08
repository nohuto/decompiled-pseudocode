/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x14071DD5C
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140298300 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x1406D44E0 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall EtwpQueryTokenPackageInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rdi
  int v6; // ebp
  __int64 result; // rax
  bool v8; // [rsp+58h] [rbp+10h] BYREF
  bool v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a2 + 8);
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
    if ( (int)RtlQueryPackageIdentity(v6, (int)a2 + 16, a2, (int)a2 + 272, (__int64)v3, 0LL) < 0 )
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
