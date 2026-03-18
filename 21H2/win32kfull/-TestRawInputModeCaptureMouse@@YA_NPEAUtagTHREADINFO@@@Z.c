/*
 * XREFs of ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0073900
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TestRawInputModeCaptureMouse(struct tagTHREADINFO *a1)
{
  char v2; // al
  char v3; // dl
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = IsSpatialDelegationEnabledForThread();
  v3 = 0;
  if ( !v2 )
  {
    if ( a1 )
    {
      v4 = *((_QWORD *)a1 + 53);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 832);
        if ( v5 )
          return (*(_DWORD *)(v5 + 100) & 0x100) != 0;
      }
    }
  }
  return v3;
}
