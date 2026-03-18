/*
 * XREFs of ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01D4E10
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D4A20 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01D54D0 (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall Feedback::GetWindowBarrelVisualizationSetting(Feedback *this, const struct tagPOINTER_INFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  int PointerBarrelVisualization; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 1;
  if ( (_DWORD)a2
    || (PointerBarrelVisualization = CTouchProcessor::GetPointerBarrelVisualization(
                                       gpTouchProcessor,
                                       *((_WORD *)this + 2))) == 0
    || (*((_DWORD *)this + 3) & 0x10000) != 0 )
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      v7 = ValidateHwnd(v6);
      if ( v7 )
      {
        v9 = 1;
        if ( (unsigned int)FeedbackGetWindowSetting(v7, 2LL, 1LL, &v9) )
          v4 = v9;
      }
    }
    CTouchProcessor::SetPointerBarrelVisualization(gpTouchProcessor, *((_WORD *)this + 2), v4);
  }
  else
  {
    LOBYTE(v2) = PointerBarrelVisualization == 1;
    return v2;
  }
  return v4;
}
