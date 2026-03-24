/*
 * XREFs of WinSqmEventWrite @ 0x1C00B1428
 * Callers:
 *     WinSqmEndSession @ 0x1C00786AC (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00789D8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C00B12C0 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C013A060 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013A2A0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013A668 (WinSqmSetString.c)
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
