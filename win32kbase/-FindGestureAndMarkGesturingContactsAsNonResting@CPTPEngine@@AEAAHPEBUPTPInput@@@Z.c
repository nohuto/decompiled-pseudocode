/*
 * XREFs of ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C023783C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1C0235178 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1C0235248 (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C023A428 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

__int64 __fastcall CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
        CPTPEngine *this,
        const struct PTPInput *a2)
{
  unsigned int v4; // r15d
  __int64 i; // rsi
  int v6; // eax
  __int64 j; // rbp
  int v8; // eax
  unsigned int v9; // r8d
  struct CContactState *v10; // r14
  struct CContactState *v11; // rdi
  struct CContactState *v12; // rax
  CPTPEngine *v14; // rcx

  if ( (*((_DWORD *)this + 67) & 4) != 0 )
  {
    v4 = *((_DWORD *)a2 + 12);
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v6 = *((_DWORD *)a2 + 24 * i + 17);
      if ( v6 && (v6 & 0x40000) == 0 )
      {
        for ( j = (unsigned int)(i + 1); (unsigned int)j < v4; j = (unsigned int)(j + 1) )
        {
          v8 = *((_DWORD *)a2 + 24 * j + 17);
          if ( v8 )
          {
            if ( (v8 & 0x40000) == 0 )
            {
              v9 = *((_DWORD *)this + 4);
              v10 = (CPTPEngine *)((char *)this + 400 * (*((_DWORD *)a2 + 24 * i + 15) % v9) + 1208);
              v11 = (CPTPEngine *)((char *)this + 400 * (*((_DWORD *)a2 + 24 * j + 15) % v9) + 1208);
              if ( (*(_DWORD *)v10 & 0x80000) != 0
                && (*(_DWORD *)v11 & 0x80000) != 0
                && (*((_DWORD *)v10 + 1) & 1) != 0
                && (*((_DWORD *)v11 + 1) & 1) != 0 )
              {
                if ( *((_DWORD *)this + 911) != 2
                  || (v12 = (CPTPEngine *)((char *)this + 400 * *((unsigned int *)this + 902) + 1208), v10 == v12)
                  || v11 == v12 )
                {
                  if ( (unsigned int)CPTPEngine::AreTheseTwoContactsAPan(this, v10, v11)
                    || (unsigned int)CPTPEngine::AreTheseTwoContactsAZoom(this, v10, v11) )
                  {
                    CPTPEngine::SetContactRestingState(this, v10, 0);
                    CPTPEngine::SetContactRestingState(v14, v11, 0);
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
