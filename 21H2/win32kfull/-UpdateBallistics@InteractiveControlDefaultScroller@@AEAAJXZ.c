/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C02564B0
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255BA4 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C0256438 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateBallistics(InteractiveControlDefaultScroller *this)
{
  struct InteractiveControlManager *v2; // rbx
  unsigned int v3; // eax
  int v4; // ebx
  struct InteractiveControlDefaultScroller::BallisticsConfig near **v5; // rcx
  unsigned int v6; // edx

  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) < (unsigned __int64)*((int *)InteractiveControlManager::Instance()
                                                                         + 49) )
  {
    v4 = *((_DWORD *)this + 8);
  }
  else
  {
    v2 = InteractiveControlManager::Instance();
    v3 = (unsigned int)(*((_DWORD *)this + 8) * *((_DWORD *)v2 + 50))
       / *((_DWORD *)InteractiveControlManager::Instance() + 49);
    v4 = 0;
    v5 = &InteractiveControlDefaultScroller::s_ballistics;
    v6 = 0;
    while ( v3 > *(_DWORD *)v5 && *(_DWORD *)v5 )
    {
      ++v6;
      ++v5;
      if ( v6 == 4 )
        goto LABEL_8;
    }
    InteractiveControlDefaultScroller::SetBallisticsLevel(this, v6, 0);
LABEL_8:
    *((_QWORD *)this + 5) = *((_QWORD *)this + 1);
  }
  *((_DWORD *)this + 8) = v4 + abs32(*((_DWORD *)this + 15));
  return 0LL;
}
