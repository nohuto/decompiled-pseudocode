__int64 __fastcall xxxOldMessageBeep(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    UserSessionSwitchLeaveCrit(a1);
    v1 = xxxUserBeep(0x1B8u, 0x7Du, 1);
    EnterCrit(1LL, 0LL);
    return v1;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
