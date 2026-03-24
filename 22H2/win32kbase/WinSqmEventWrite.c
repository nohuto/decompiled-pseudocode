/*
 * XREFs of WinSqmEventWrite @ 0x1C00B1768
 * Callers:
 *     WinSqmEndSession @ 0x1C0079D8C (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C007A0B8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C00B1600 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C013A330 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013A570 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013A938 (WinSqmSetString.c)
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
