/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B1130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000A8D8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180034854 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  __int64 v7; // rdx
  char v8; // di
  int v9; // eax

  if ( (_BYTE)a3 )
  {
    *((_DWORD *)a2 + 154) |= 0x200000u;
  }
  else if ( (*((_DWORD *)a2 + 154) & 0x10000000) == 0
         || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
  {
    v7 = *((unsigned int *)a2 + 154);
    if ( (v7 & 0x20000000) == 0 )
    {
      v8 = 1;
      goto LABEL_4;
    }
  }
  v7 = *((unsigned int *)a2 + 154);
  v8 = 0;
LABEL_4:
  v9 = (*(__int64 (__fastcall **)(CSSCrossFade *, __int64))(*(_QWORD *)this + 112LL))(this, v7);
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v9, 0LL, 0LL, 0xFFFFFFFF, v8, a4);
}
