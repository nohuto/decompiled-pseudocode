/*
 * XREFs of PiCMSetProblem @ 0x140967AB4
 * Callers:
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1409679A8 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 */

__int64 __fastcall PiCMSetProblem(PCWSTR SourceString, int a2, int a3)
{
  __int64 result; // rax
  int v7; // edi
  unsigned int v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-8h]
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  int v14; // [rsp+A8h] [rbp+38h] BYREF

  v9 = 0;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  result = CmGetDeviceStatus(PiPnpRtlCtx, SourceString, 0, &v14, &v13, &v9, v8);
  if ( (int)result < 0 )
    return result;
  v7 = v13;
  if ( a2 )
  {
    if ( (v14 & 0x400) != 0 && v13 != a2 && a3 != 2 )
      return 3221225485LL;
  }
  DestinationString = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DWORD1(v11) = 1024;
  if ( a2 )
  {
    LODWORD(v11) = 1;
    DWORD2(v11) = a2;
  }
  else
  {
    LODWORD(v11) = 2;
    DWORD2(v11) = v7;
  }
  return ZwPlugPlayControl(14LL, (__int64)&DestinationString);
}
