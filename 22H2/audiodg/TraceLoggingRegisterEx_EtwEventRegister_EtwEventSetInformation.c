/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x14001BCEC
 * Callers:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008230 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14001C0BC (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(_QWORD *a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a1[1] - 16LL);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v6 = v2;
  v3 = EtwEventRegister(&v6, tlgEnableCallback, a1, a1 + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(a1[4], 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v4;
}
