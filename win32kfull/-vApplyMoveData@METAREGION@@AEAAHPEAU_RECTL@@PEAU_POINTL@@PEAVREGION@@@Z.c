/*
 * XREFs of ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02E2698
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C004F9EC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00D7B98 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02E20D0 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02E255C (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall METAREGION::vApplyMoveData(
        METAREGION *this,
        struct _RECTL *a2,
        struct _POINTL *a3,
        struct REGION *a4)
{
  REGION *v4; // rsi
  unsigned int v8; // edi
  struct _POINTL *v9; // r12
  REGION *v10; // rcx
  REGION *v11; // rcx
  REGION *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  struct _POINTL v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+54h] [rbp-Ch]

  v4 = a4;
  v8 = 1;
  if ( !a2 || !a3 || !*((_DWORD *)this + 10) )
  {
    *((_QWORD *)this + 2) = a4;
    v4 = 0LL;
    METAREGION::vAddRectToMoveRegionHelper(this, a2);
    *((struct _POINTL *)this + 3) = *a3;
    *((_DWORD *)this + 10) = 1;
    goto LABEL_26;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
  if ( v16 && v15 && v14 )
  {
    v19 = (struct _POINTL)*((_QWORD *)this + 4);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v19)
      || (v9 = (struct _POINTL *)((char *)this + 24), !RGNOBJ::bOffset((RGNOBJ *)&v15, (struct _POINTL *)this + 3)) )
    {
      METAREGION::vClearMoveData(this, 1);
LABEL_9:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      return v8;
    }
    RGNOBJ::vSet((RGNOBJ *)&v16, a2);
    if ( RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v15, 1) )
    {
      v19 = *(struct _POINTL *)(v14 + 56);
      v20 = *(_DWORD *)(v14 + 64);
      v21 = *(_DWORD *)(v14 + 68);
      if ( ERECTL::bEmpty((ERECTL *)&v19) )
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
        goto LABEL_24;
      }
      v18 = *((_QWORD *)this + 4);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      v19.x = -v9->x;
      v19.y = -*((_DWORD *)this + 7);
      RGNOBJ::bOffset((RGNOBJ *)&v14, &v19);
      if ( !RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v18, 1) )
      {
        METAREGION::vClearMoveData(this, 1);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
        goto LABEL_9;
      }
      RGNOBJ::vSwap((RGNOBJ *)&v18, (struct RGNOBJ *)v17);
      *((_QWORD *)this + 4) = v18;
      v9->x += a3->x;
      *((_DWORD *)this + 7) += a3->y;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
      v8 = 0;
    }
  }
LABEL_24:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
LABEL_26:
  if ( *((_DWORD *)this + 10) )
    v8 = METAREGION::bIntersectMoveWithDirty(this, a2);
  if ( v4 )
    REGION::vDeleteREGION(v4);
  return v8;
}
