/*
 * XREFs of ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C023A340
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C0235328 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C023A264 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendTimerOutput(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = (_DWORD *)(a1 + 572);
  *(_DWORD *)(a1 + 576) = a2;
  *(_DWORD *)(a1 + 580) = a3;
  v4 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v3 = 3;
  (**v4)(v4, v3);
  return memset(v3, 0, 0x254uLL);
}
