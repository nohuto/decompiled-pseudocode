void __fastcall CPartitionVerticalBlankScheduler::SchedulerLinearFit::OnReset(
        CPartitionVerticalBlankScheduler::SchedulerLinearFit *this,
        __int64 a2,
        __int64 a3)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_RESET,
      a3,
      1LL,
      v3);
}
