/*
 * XREFs of PiDrvDbUnmountNode @ 0x14096E4A8
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1406CFC70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x140562C40 (PiDrvDbFindNode.c)
 *     PiDrvDbUnregisterNode @ 0x14096E504 (PiDrvDbUnregisterNode.c)
 */

__int64 __fastcall PiDrvDbUnmountNode(PCWSTR SourceString)
{
  __int64 result; // rax
  int v2; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = PiDrvDbFindNode(&DestinationString, (__int64 *)&P);
  if ( (int)result >= 0 )
  {
    v2 = *((_DWORD *)P + 16);
    if ( (v2 & 1) != 0 || (v2 & 0x10) == 0 )
      return 3221225506LL;
    else
      return PiDrvDbUnregisterNode(P);
  }
  return result;
}
