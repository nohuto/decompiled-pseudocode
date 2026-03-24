/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0081390
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002A768 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserDrawIconEx @ 0x1C0043E90 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C0043F94 (_DrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C0080F20 (zzzUpdateCursorImage.c)
 *     NtUserGetIconSize @ 0x1C010F600 (NtUserGetIconSize.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0162460 (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // r9

  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    v2 = 50LL;
LABEL_3:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v2);
    return 0LL;
  }
  if ( !*((_QWORD *)a1 + 13) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 12) )
    return 0LL;
  if ( a2 < 0 )
    return 0LL;
  if ( a2 >= *((_DWORD *)a1 + 23) )
    return 0LL;
  _mm_lfence();
  v4 = *(int *)(*((_QWORD *)a1 + 13) + 4LL * a2);
  if ( (int)v4 < 0 || (int)v4 >= *((_DWORD *)a1 + 22) )
    return 0LL;
  _mm_lfence();
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8 * v4) + 80LL) & 8) != 0 )
  {
    v2 = 73LL;
    goto LABEL_3;
  }
  return *(struct tagCURSOR **)(*((_QWORD *)a1 + 12) + 8 * v4);
}
