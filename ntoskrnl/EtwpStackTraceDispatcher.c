void __fastcall EtwpStackTraceDispatcher(unsigned int *a1, _SLIST_ENTRY **a2, struct _KTHREAD *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // r14
  char v10; // al
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (a4 & 0x4000) == 0 || KeGetCurrentPrcb()->IdleThread != CurrentThread )
  {
    if ( !a3 )
      a3 = CurrentThread;
    if ( (a4 & 0x1000) != 0 )
    {
      v11[0] = 0;
      v12 = 0;
      if ( (a4 & 0x2000) == 0 )
      {
        EtwpGetStackCaptureSettings(a3, (a4 & 0x4000000) != 0, (a4 & 0x8000) != 0, v11, &v12);
        v10 = v12;
        if ( (v5 & 0x1000000) != 0 )
          v10 = 1;
        if ( v11[0] )
        {
          if ( v10 )
          {
            v5 &= ~0x1000u;
            EtwpQueueStackWalkApc((__int64)a3, CurrentIrql, a1, 0, a2);
          }
        }
        else
        {
          v5 &= ~0x1000u;
        }
      }
    }
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, a3, a2);
  }
}
