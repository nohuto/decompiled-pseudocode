/*
 * XREFs of ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C004FF94
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C004F9EC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00D7B98 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

void __fastcall METAREGION::vCalculateNoMoveDirty(METAREGION *this)
{
  REGION *v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF
  __int64 v5; // [rsp+50h] [rbp+28h] BYREF
  __int64 v6; // [rsp+58h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    v5 = *(_QWORD *)this;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v4);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v3);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v3);
    v2 = (REGION *)*((_QWORD *)this + 1);
    v6 = *((_QWORD *)this + 4);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 1) = 0LL;
    }
    if ( RGNOBJ::bCopy((RGNOBJ *)&v3, (struct RGNOBJ *)&v6)
      && RGNOBJ::bOffset((RGNOBJ *)&v3, (struct _POINTL *)this + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v4);
      if ( v5 && v3 && v4 && RGNOBJ::iCombine((RGNOBJ *)&v4, (struct RGNOBJ *)&v5, (struct RGNOBJ *)&v3, 4) )
      {
        *((_QWORD *)this + 1) = v4;
      }
      else
      {
        METAREGION::vClearMoveData(this, 1);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
      }
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v3);
  }
}
