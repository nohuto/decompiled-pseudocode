__int64 __fastcall InteractiveControlDevice::OnTimerNotification(InteractiveControlDevice *this)
{
  _WORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+24h] [rbp-24h]
  __int64 v5; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)this + 58) )
    *((_DWORD *)this + 94) = 1;
  *((_DWORD *)this + 95) = 1;
  *((_QWORD *)this + 44) = 0LL;
  InteractiveControlDevice::FlushBufferedInput(this, 128);
  v3[0] = *((_WORD *)this + 196);
  v3[1] = 0;
  v4 = 0;
  v5 = 1LL;
  InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v3);
  return 0LL;
}
