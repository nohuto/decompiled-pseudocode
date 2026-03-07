// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(v7, v7, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v7[0];
  CCursorClip::BoundPoint(gpCursorClip, v7[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  CursorApiRouter::MovePointer(
    gpsi,
    *(HDEV *)(gpDispInfo + 40LL),
    *(_DWORD *)(gpsi + 4960LL),
    *(_DWORD *)(gpsi + 4964LL),
    1u);
  CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
