/*
 * XREFs of KiAdjustRescheduleContextForParking @ 0x14057DB98
 * Callers:
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiIsPrcbThread @ 0x1402AEFCC (KiIsPrcbThread.c)
 */

char __fastcall KiAdjustRescheduleContextForParking(__int64 a1, _KTHREAD *a2)
{
  __int64 Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *v5; // r11
  __int64 *RescheduleContextEntryForPrcb; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int8 v9; // r8
  unsigned __int8 *v10; // r11
  char v11; // r10
  __int64 v12; // r10
  __int64 *v13; // rcx
  _KTHREAD **p_NextThread; // r8
  __int64 v15; // rdx

  Blink = (__int64)a2->Header.WaitListHead.Blink;
  if ( !Blink )
    Blink = (__int64)a2->Header.WaitListHead.Flink;
  LOBYTE(CurrentPrcb) = KiIsPrcbThread(Blink);
  if ( !(_BYTE)CurrentPrcb )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (CurrentPrcb->DpcRequestSummary & 0x10000) == 0 )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v5, (__int64)a2);
      LOBYTE(CurrentPrcb) = KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v7, 0, 0);
      if ( (v11 & 2) != 0 )
      {
        v12 = 0LL;
        if ( *v10 > v9 )
        {
          do
          {
            v13 = (__int64 *)&v10[32 * v12 + 16 + 8 * (unsigned int)v12];
            if ( v13 != RescheduleContextEntryForPrcb )
              KiAdjustRescheduleContextEntryForThreadRemoval(v13, v8, 0, 0);
            LODWORD(CurrentPrcb) = *v10;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < (unsigned int)CurrentPrcb );
        }
        *((_DWORD *)v10 + 1) = 0;
      }
      p_NextThread = 0LL;
      v15 = 0LL;
      if ( *v10 )
      {
        while ( 1 )
        {
          CurrentPrcb = (struct _KPRCB *)&v10[40 * v15];
          if ( CurrentPrcb->NextThread == a2 )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *v10 )
            goto LABEL_16;
        }
        p_NextThread = &CurrentPrcb->NextThread;
      }
LABEL_16:
      if ( p_NextThread[1] )
      {
        CurrentPrcb = (struct _KPRCB *)p_NextThread[1];
        if ( (*(_QWORD *)(*(_QWORD *)&a2->ApcStateFill[40] + 80LL) & CurrentPrcb->ProcessorState.ContextFrame.Rsi) != 0 )
          p_NextThread[1] = 0LL;
      }
    }
  }
  return (char)CurrentPrcb;
}
