/*
 * XREFs of ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800A7460
 * Callers:
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800A6DD0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A73F0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053768 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::StopTimer(CPressTapVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 50);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
