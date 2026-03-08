/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C02376F4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // r11d
  int v7; // edi
  _DWORD *i; // rsi
  struct CContactState *v9; // rbx
  int v10; // r8d
  int v11; // edx
  unsigned __int64 v13; // [rsp+50h] [rbp+20h]

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  v7 = 0;
  if ( v3 )
  {
    for ( i = (_DWORD *)((char *)a2 + 60); ; i += 24 )
    {
      v9 = (CPTPEngine *)((char *)this + 400 * (unsigned int)(*i % *((_DWORD *)this + 4)) + 1208);
      if ( a3 != v9 && (*(_DWORD *)v9 & 0x20000000) != 0 && ((*(_DWORD *)v9 & 1) != 0 || *((_DWORD *)v9 + 75) == 1) )
      {
        v10 = HIDWORD(*((_QWORD *)v9 + 3)) - HIDWORD(*((_QWORD *)a3 + 3));
        v11 = *((_QWORD *)v9 + 3) - *((_QWORD *)a3 + 3);
        v13 = v10 * v10 + v11 * v11;
        if ( (v13 <= *((unsigned int *)this + 85) || v13 <= *((unsigned int *)this + 86))
          && *(_QWORD *)a2 - *((_QWORD *)v9 + 10) < *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 57)
                                                  / 0x3E8 )
        {
          break;
        }
      }
      if ( ++v7 >= v3 )
        return v4;
    }
    return 1;
  }
  return v4;
}
