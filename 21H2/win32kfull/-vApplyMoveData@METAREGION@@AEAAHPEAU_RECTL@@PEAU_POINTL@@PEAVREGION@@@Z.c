/*
 * XREFs of ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02C09F4
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0082950 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02C03F8 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02C0894 (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall METAREGION::vApplyMoveData(
        METAREGION *this,
        struct _RECTL *a2,
        struct _POINTL *a3,
        struct REGION *a4)
{
  REGION *v4; // rsi
  unsigned int v8; // edi
  struct _POINTL *v9; // r15
  REGION *v10; // rcx
  REGION *v11; // rcx
  REGION *v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v15; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v19[4]; // [rsp+60h] [rbp-20h] BYREF

  v4 = a4;
  v8 = 1;
  if ( a2 && a3 && *((_DWORD *)this + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
    if ( !v17[0] || !v16[0] || !v14[0] )
      goto LABEL_24;
    v15 = (struct _POINTL)*((_QWORD *)this + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)v16, (struct RGNOBJ *)&v15)
      && (v9 = (struct _POINTL *)((char *)this + 24), RGNOBJ::bOffset((RGNOBJ *)v16, (struct _POINTL *)this + 3)) )
    {
      RGNOBJ::vSet((RGNOBJ *)v17, a2);
      if ( !RGNOBJ::iCombine((RGNOBJ *)v14, (struct RGNOBJ *)v17, (struct RGNOBJ *)v16, 1) )
      {
        METAREGION::vClearMoveData(this, 1);
        v8 = 0;
        goto LABEL_24;
      }
      v19[0] = *(_DWORD *)(v14[0] + 96LL);
      v19[1] = *(_DWORD *)(v14[0] + 100LL);
      v19[2] = *(_DWORD *)(v14[0] + 104LL);
      v19[3] = *(_DWORD *)(v14[0] + 108LL);
      if ( ERECTL::bEmpty((ERECTL *)v19) )
      {
        v10 = (REGION *)*((_QWORD *)this + 4);
        if ( v10 )
        {
          REGION::vDeleteREGION(v10);
          *((_QWORD *)this + 4) = 0LL;
        }
        v11 = (REGION *)*((_QWORD *)this + 1);
        if ( v11 )
        {
          REGION::vDeleteREGION(v11);
          *((_QWORD *)this + 1) = 0LL;
        }
        METAREGION::vAddRectToMoveRegionHelper(this, a2);
        v12 = (REGION *)*((_QWORD *)this + 2);
        *v9 = *a3;
        if ( v12 )
          REGION::vDeleteREGION(v12);
        *((_QWORD *)this + 2) = v4;
        v4 = 0LL;
LABEL_24:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
        if ( !*((_DWORD *)this + 10) )
          goto LABEL_28;
        goto LABEL_27;
      }
      v18 = *((_QWORD *)this + 4);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
      v15.x = -v9->x;
      v15.y = -*((_DWORD *)this + 7);
      RGNOBJ::bOffset((RGNOBJ *)v14, &v15);
      if ( RGNOBJ::iCombine((RGNOBJ *)v19, (struct RGNOBJ *)v14, (struct RGNOBJ *)&v18, 1) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v18, (struct RGNOBJ *)v19);
        *((_QWORD *)this + 4) = v18;
        v9->x += a3->x;
        *((_DWORD *)this + 7) += a3->y;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
        goto LABEL_24;
      }
      METAREGION::vClearMoveData(this, 1);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    return v8;
  }
  *((_QWORD *)this + 2) = a4;
  v4 = 0LL;
  METAREGION::vAddRectToMoveRegionHelper(this, a2);
  *((struct _POINTL *)this + 3) = *a3;
  *((_DWORD *)this + 10) = 1;
LABEL_27:
  v8 = METAREGION::bIntersectMoveWithDirty(this, a2);
LABEL_28:
  if ( v4 )
    REGION::vDeleteREGION(v4);
  return v8;
}
