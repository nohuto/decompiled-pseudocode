/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C024AB34
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024A264 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C024AAB4 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateBallistics(InteractiveControlDefaultScroller *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rsi
  struct InteractiveControlManager *v4; // rbx
  __int64 v5; // rcx
  struct InteractiveControlManager *v6; // rax
  unsigned int v7; // ebx
  unsigned int *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax

  v3 = (_DWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) >= (unsigned __int64)*((int *)InteractiveControlManager::Instance((__int64)this)
                                                                          + 49) )
  {
    v4 = InteractiveControlManager::Instance(v2);
    v6 = InteractiveControlManager::Instance(v5);
    v7 = (unsigned int)(*v3 * *((_DWORD *)v4 + 50)) / *((_DWORD *)v6 + 49);
    v8 = (unsigned int *)(SGDGetUserSessionState(v6) + 17112);
    v9 = 0;
    while ( v7 > *v8 && *v8 )
    {
      ++v9;
      v8 += 2;
      if ( v9 == 4 )
        goto LABEL_8;
    }
    InteractiveControlDefaultScroller::SetBallisticsLevel(this, v9, 0);
LABEL_8:
    v10 = *((_QWORD *)this + 1);
    *v3 = 0;
    *((_QWORD *)this + 5) = v10;
  }
  *v3 += abs32(*((_DWORD *)this + 15));
  return 0LL;
}
