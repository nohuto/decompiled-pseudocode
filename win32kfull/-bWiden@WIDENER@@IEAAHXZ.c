/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F2FFC (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C01509EA (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C0150D64 (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C01511BA (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C01515D0 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0151742 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C0151792 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02F3FE8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vNextStyleEvent@STYLER@@QEAAXXZ @ 0x1C02F4D64 (-vNextStyleEvent@STYLER@@QEAAXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02F5004 (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02F5078 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall WIDENER::bWiden(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  WIDEPATHOBJ *v7; // rbx
  WIDEPATHOBJ *v8; // rcx
  char v9; // r10
  __int64 v10; // rax
  struct WIDEPATHOBJ *v11; // r10
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        STYLER::vNextStyleEvent(this);
        v2 = *((_DWORD *)this + 172);
        if ( v2 > 5 )
          break;
        if ( v2 == 5 )
          goto LABEL_19;
        if ( v2 )
        {
          v3 = v2 - 1;
          if ( v3 )
          {
            v4 = v3 - 1;
            if ( v4 )
            {
              v5 = v4 - 1;
              if ( v5 )
              {
                if ( v5 == 1 )
                {
                  v6 = 1;
                  goto LABEL_10;
                }
              }
              else
              {
                v6 = 0;
LABEL_10:
                WIDENER::vAddJoin(this, v6);
              }
            }
            else
            {
              WIDENER::vAddJoin(this, 0);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
              v7 = (WIDENER *)((char *)this + 1136);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
              v8 = (WIDENER *)((char *)this + 1136);
              if ( (v9 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v8) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), (WIDENER *)((char *)this + 984));
LABEL_31:
                WIDEPATHOBJ::vEndFigure(v7);
                v10 = *(_QWORD *)(*((_QWORD *)this + 143) + 40LL);
                goto LABEL_32;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v8) )
                return 0LL;
              WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), (WIDENER *)((char *)this + 984));
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
              WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 1136));
              WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1136));
              v10 = *(_QWORD *)(*((_QWORD *)this + 143) + 40LL);
LABEL_32:
              *(_DWORD *)(v10 + 16) |= 8u;
            }
          }
          else
          {
LABEL_19:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
            if ( !WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), v11);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
            *((_DWORD *)this + 10) |= 8u;
          }
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 984))
            || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
          {
            return 0LL;
          }
          *((_DWORD *)this + 10) &= ~8u;
          *((_QWORD *)this + 160) = *(_QWORD *)(*((_QWORD *)this + 143) + 40LL);
        }
      }
      v12 = v2 - 6;
      if ( !v12 )
        break;
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            return WIDENER::bValid(this);
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
            return 0LL;
          WIDENER::vAddStartCap(this);
          WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
          WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1136));
        }
      }
      else if ( !*((_DWORD *)this + 323) )
      {
        v7 = (WIDENER *)((char *)this + 1136);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
        goto LABEL_31;
      }
    }
    if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 984))
      || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
    {
      return 0LL;
    }
    WIDENER::vAddStartCap(this);
  }
}
