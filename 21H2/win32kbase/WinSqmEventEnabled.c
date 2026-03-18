/*
 * XREFs of WinSqmEventEnabled @ 0x1C00B75B4
 * Callers:
 *     WinSqmEndSession @ 0x1C00B73BC (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C01676A0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C01678C0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C0167D5C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( RegHandle )
  {
    v4 = dword_1C029663C;
    if ( !dword_1C029663C )
      return EtwEventEnabled(RegHandle, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C0267080, 0x10uLL) != 16 )
      {
        v6 = (dword_1C029663C & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C029663C;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(RegHandle, EventDescriptor);
  }
  return v2;
}
