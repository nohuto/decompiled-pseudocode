/*
 * XREFs of NtGdiDdDDIGetPresentQueueEvent @ 0x1C0272A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIGetPresentQueueEvent(unsigned int a1, _QWORD *a2)
{
  int PresentQueueEvent; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  PresentQueueEvent = 0;
  if ( !(unsigned int)UserUnsafeIsCurrentProcessDwm() )
    PresentQueueEvent = -1073741790;
  if ( PresentQueueEvent < 0 || (PresentQueueEvent = GreSfmGetPresentQueueEvent(a1, &Handle), PresentQueueEvent < 0) )
  {
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = Handle;
  }
  return (unsigned int)PresentQueueEvent;
}
