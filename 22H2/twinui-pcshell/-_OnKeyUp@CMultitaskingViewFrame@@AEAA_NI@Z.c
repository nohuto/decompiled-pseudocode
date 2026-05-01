/*
 * XREFs of ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18040A99C
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18040B140 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x18041C748 (-GetModifierKeyState@ElementHelpers@@YA-AW4ModifierKeys@@XZ.c)
 */

bool __fastcall CMultitaskingViewFrame::_OnKeyUp(CMultitaskingViewFrame *this, unsigned int a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rbx
  unsigned int ModifierKeyState; // eax

  v2 = (__int64 *)*((_QWORD *)this + 313);
  if ( !v2 )
    return 0;
  v4 = *v2;
  ModifierKeyState = ElementHelpers::GetModifierKeyState();
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 248))(v2, a2, ModifierKeyState);
}
