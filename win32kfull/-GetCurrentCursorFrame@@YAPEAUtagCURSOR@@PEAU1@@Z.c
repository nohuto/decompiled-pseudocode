/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00205A8
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00EEAB0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return GetAnimatedCursorFrame(a1, *((_DWORD *)a1 + 30));
  return a1;
}
