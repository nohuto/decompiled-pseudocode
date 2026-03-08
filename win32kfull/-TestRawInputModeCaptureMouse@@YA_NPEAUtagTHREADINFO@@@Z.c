/*
 * XREFs of ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01A9B80
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     HasHidTable @ 0x1C0038CB0 (HasHidTable.c)
 */

bool __fastcall TestRawInputModeCaptureMouse(struct tagTHREADINFO *a1)
{
  char v2; // bl

  v2 = 0;
  if ( !(unsigned __int8)IsSpatialDelegationEnabledForThread(a1) && (unsigned int)HasHidTable((__int64)a1) )
    return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 53) + 824LL) + 100LL) & 0x100) != 0;
  return v2;
}
