/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1C0239F78
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C023A264 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C023A018 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C023A068 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(CPTPEngine *this, int a2, struct tagPOINT a3)
{
  int *v3; // r14
  int v7; // ebp
  __int64 v8; // rdx

  v3 = (int *)((char *)this + 3612);
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 903);
  if ( a2 == 2 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 16;
    if ( a2 != 8 )
      v7 = 0;
  }
  v8 = 1LL;
  if ( a2 != 2 )
    v8 = 3LL;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, v8, a3);
  *v3 = v7;
  if ( a2 == 2 )
  {
    *((_DWORD *)this + 984) |= 8u;
  }
  else if ( a2 == 8 )
  {
    *((_DWORD *)this + 984) |= 0x10u;
  }
}
