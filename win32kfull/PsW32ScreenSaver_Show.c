/*
 * XREFs of PsW32ScreenSaver_Show @ 0x1C0203530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x1C0203424 (-StartScreenSaver@@YAXH@Z.c)
 */

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
