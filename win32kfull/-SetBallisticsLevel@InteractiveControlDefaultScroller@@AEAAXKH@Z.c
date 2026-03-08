/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C024AAB4
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C024A73C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C024AB34 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rdi
  struct InteractiveControlManager *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx

  v3 = 3LL;
  if ( *((_DWORD *)this + 14) != 2 )
    v3 = a2;
  if ( *((_DWORD *)this + 6) != (_DWORD)v3 || a3 )
  {
    *((_DWORD *)this + 6) = v3;
    v5 = InteractiveControlManager::Instance((__int64)this);
    v7 = *((unsigned int *)InteractiveControlManager::Instance(v6) + 44);
    if ( *((_DWORD *)v5 + 43) == (_DWORD)v7 )
      v8 = *(_DWORD *)(SGDGetUserSessionState(v7) + 8 * v3 + 17116);
    else
      v8 = *((_DWORD *)InteractiveControlManager::Instance(v7) + 43);
    *((_DWORD *)this + 7) = v8;
  }
}
