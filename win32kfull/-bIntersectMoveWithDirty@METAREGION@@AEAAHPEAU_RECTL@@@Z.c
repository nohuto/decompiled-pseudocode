/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02E20D0
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02E2698 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00D7B98 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C02E2048 (-TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02E2338 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  struct REGION *v5; // rsi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  _DWORD *v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  struct REGION *v13; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v14[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 1;
  if ( *((_DWORD *)this + 10) == 1 && (*((_QWORD *)this + 1) || *(_QWORD *)this) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
    v12 = *((_QWORD *)this + 4);
    if ( !v8 || !v10 || !v9 )
      goto LABEL_21;
    v5 = (struct REGION *)*((_QWORD *)this + 1);
    if ( !v5 )
      v5 = *(struct REGION **)this;
    v13 = v5;
    RGNOBJ::vSet((RGNOBJ *)&v10);
    if ( RGNOBJ::iCombine((RGNOBJ *)&v8, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v10, 2)
      && RGNOBJ::bOffset((RGNOBJ *)&v8, (struct _POINTL *)this + 3)
      && v12
      && v8
      && v9
      && v11
      && RGNOBJ::iCombine((RGNOBJ *)&v11, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v8, 2)
      && (v6 = RGNOBJ::iCombine((RGNOBJ *)&v9, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v13, 1)) != 0 )
    {
      if ( v6 != 1 )
      {
        v14[0] = v9[14];
        v14[1] = v9[15];
        v14[2] = v9[16];
        v14[3] = v9[17];
        if ( !ERECTL::bEmpty((ERECTL *)v14) )
        {
          v2 = METAREGION::bTrimMoveWithRegion(this, v5, 0);
          if ( !v2 )
            METAREGION::TraceMoveRemovedMoveRegions(this, a2);
        }
      }
    }
    else
    {
LABEL_21:
      METAREGION::vClearMoveData(this, 1);
      v2 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  }
  return v2;
}
