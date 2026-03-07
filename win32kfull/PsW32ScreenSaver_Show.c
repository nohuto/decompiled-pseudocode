void PsW32ScreenSaver_Show()
{
  const struct tagTHREADINFO **v0; // rcx

  if ( gpqForeground && (v0 = *(const struct tagTHREADINFO ***)(gpqForeground + 128LL)) != 0LL && !IsHungWindow(v0) )
  {
    if ( (*gpsi & 0x200) != 0 )
      StartScreenSaver(1LL);
    PostMessage(*(_QWORD *)(gpqForeground + 128LL), 0x112u, 0xF140uLL, (__int128 *)((*gpsi >> 9) & 1));
  }
  else
  {
    StartScreenSaver(0LL);
  }
}
