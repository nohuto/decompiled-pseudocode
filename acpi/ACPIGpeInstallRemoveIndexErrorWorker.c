/*
 * XREFs of ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C002C610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F5C (ACPIWriteEventLogEntry.c)
 */

void __fastcall ACPIGpeInstallRemoveIndexErrorWorker(_DWORD *P)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-9h] BYREF
  __int16 *v3[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+50h] [rbp+17h] BYREF
  WCHAR SourceString[8]; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v6; // [rsp+68h] [rbp+2Fh]
  __int64 v7; // [rsp+78h] [rbp+3Fh]

  v4 = 0x4500500047LL;
  v7 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( RtlIntegerToUnicodeString(P[8], 0, &DestinationString) >= 0 )
  {
    v3[0] = (__int16 *)&v4;
    v3[1] = (__int16 *)SourceString;
    ACPIWriteEventLogEntry(-1073414133, v3, 2u);
  }
  ExFreePoolWithTag(P, 0);
}
