/*
 * XREFs of ?OnKeyboardToggleButtonPressed@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1803CF870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnKeyboardToggleButtonPressed(KeyboardHosting::TabTipAdapter *this)
{
  int v1; // eax

  *(_BYTE *)(*((_QWORD *)this + 12) + 512LL) = 1;
  v1 = *((_DWORD *)this + 76);
  if ( v1 )
  {
    if ( v1 == 1 )
      *((_DWORD *)this + 76) = 0;
  }
  else
  {
    *((_DWORD *)this + 76) = 1;
  }
  return 0LL;
}
