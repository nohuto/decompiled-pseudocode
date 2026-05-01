/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BD0C8
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16F4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1803BDDC0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  bool v2; // zf
  __int64 v3; // rax

  if ( *((_QWORD *)this + 86) )
  {
    v2 = GetSystemMetrics(8195) == 0;
    v3 = *((_QWORD *)this + 86);
    *(_BYTE *)(v3 + 318) = !v2;
    *(_BYTE *)(*(_QWORD *)(v3 + 104) + 508LL) = !v2;
  }
  return 0LL;
}
