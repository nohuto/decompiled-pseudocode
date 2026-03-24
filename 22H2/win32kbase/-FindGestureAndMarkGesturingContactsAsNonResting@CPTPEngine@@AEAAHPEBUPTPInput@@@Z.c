/*
 * XREFs of ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01C5C9C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C6FCC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01C3680 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01C3754 (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01C88D8 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

__int64 __fastcall CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
        CPTPEngine *this,
        const struct PTPInput *a2)
{
  unsigned int v4; // ebp
  __int64 i; // rdi
  __int64 v6; // r13
  int v7; // eax
  __int64 j; // rsi
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // r8d
  struct CContactState *v12; // r12
  struct CContactState *v13; // r15
  struct CContactState *v14; // rax
  CPTPEngine *v16; // rcx

  if ( (*((_DWORD *)this + 55) & 4) != 0 )
  {
    v4 = *((_DWORD *)a2 + 12);
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v6 = 96 * i;
      v7 = *((_DWORD *)a2 + 24 * i + 17);
      if ( v7 && (v7 & 0x40000) == 0 )
      {
        for ( j = (unsigned int)(i + 1); (unsigned int)j < v4; j = (unsigned int)(j + 1) )
        {
          v9 = 96 * j;
          v10 = *((_DWORD *)a2 + 24 * j + 17);
          if ( v10 )
          {
            if ( (v10 & 0x40000) == 0 )
            {
              v11 = *((_DWORD *)this + 4);
              v12 = (CPTPEngine *)((char *)this + 392 * (*(_DWORD *)((char *)a2 + v6 + 60) % v11) + 1160);
              v13 = (CPTPEngine *)((char *)this + 392 * (*(_DWORD *)((char *)a2 + v9 + 60) % v11) + 1160);
              if ( (*(_DWORD *)v12 & 0x20000) != 0
                && (*(_DWORD *)v13 & 0x20000) != 0
                && (*(_DWORD *)v12 & 0x40000000) != 0
                && (*(_DWORD *)v13 & 0x40000000) != 0 )
              {
                if ( *((_DWORD *)this + 887) != 2
                  || (v14 = (CPTPEngine *)((char *)this + 392 * *((unsigned int *)this + 878) + 1160), v12 == v14)
                  || v13 == v14 )
                {
                  if ( (unsigned int)CPTPEngine::AreTheseTwoContactsAPan(
                                       this,
                                       (const struct PTPInput *)(*(_DWORD *)((char *)a2 + v9 + 60) % v11),
                                       (CPTPEngine *)((char *)this
                                                    + 392 * (*(_DWORD *)((char *)a2 + v6 + 60) % v11)
                                                    + 1160),
                                       v13)
                    || (unsigned int)CPTPEngine::AreTheseTwoContactsAZoom(this, a2, v12, v13) )
                  {
                    CPTPEngine::SetContactRestingState(this, v12, 0);
                    CPTPEngine::SetContactRestingState(v16, v13, 0);
                    return 1LL;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
