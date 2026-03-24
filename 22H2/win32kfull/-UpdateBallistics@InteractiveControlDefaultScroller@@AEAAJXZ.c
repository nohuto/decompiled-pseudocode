/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C025913C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258878 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5B10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C02590C8 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateBallistics(InteractiveControlDefaultScroller *this)
{
  int v2; // ebx
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
    v2 = *((_DWORD *)InteractiveControlManager::Instance() + 50);
    v3 = (unsigned int)(v2 * *((_DWORD *)this + 8)) / *((_DWORD *)InteractiveControlManager::Instance() + 49);
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
