/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0073978
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0073810 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserDrawIconEx @ 0x1C00BDC50 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C00FB970 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C014A720 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  struct tagACON *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = a1;
  if ( (*((_DWORD *)a1 + 20) & 0x40) == 0 )
  {
    if ( !*((_QWORD *)a1 + 13) )
      return 0LL;
    if ( !*((_QWORD *)a1 + 12) )
      return 0LL;
    if ( a2 < 0 )
      return 0LL;
    if ( a2 >= *((_DWORD *)a1 + 23) )
      return 0LL;
    _mm_lfence();
    v3 = *((_QWORD *)a1 + 13);
    a1 = (struct tagACON *const)a2;
    v4 = *(int *)(v3 + 4LL * a2);
    if ( (int)v4 < 0 || (int)v4 >= *((_DWORD *)v2 + 22) )
      return 0LL;
    _mm_lfence();
    v5 = *(_QWORD *)(*((_QWORD *)v2 + 12) + 8 * v4);
    if ( (*(_DWORD *)(v5 + 80) & 8) == 0 )
      return (struct tagCURSOR *)v5;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return 0LL;
}
