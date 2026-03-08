/*
 * XREFs of ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C0235328
 * Callers:
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0237B1C (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C02389D0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C023A264 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C023A068 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C023A340 (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::CancelMouseUpTimer(CPTPEngine *this, int a2)
{
  unsigned int *v2; // rdi

  v2 = (unsigned int *)((char *)this + 3920);
  if ( *((_DWORD *)this + 980) )
  {
    if ( *((_DWORD *)this + 978) )
    {
      CBasePTPEngine::SendTimerOutput(this, 1LL);
      *((_DWORD *)this + 978) = 0;
    }
    if ( a2 )
      CPTPEngine::SendMouseUpIfPending(this, v2);
  }
}
