/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01FAB6C
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01FD410 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01FD6B0 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FD7B8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01FDCA4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01FDFB0 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1u);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
