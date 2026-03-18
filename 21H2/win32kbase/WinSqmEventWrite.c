/*
 * XREFs of WinSqmEventWrite @ 0x1C005B8DC
 * Callers:
 *     WinSqmStartSession @ 0x1C005B74C (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C00B73BC (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C01676A0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C01678C0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C0167D5C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WinSqmEventWrite(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = 1359;
  if ( RegHandle )
    return EtwWrite(RegHandle, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
