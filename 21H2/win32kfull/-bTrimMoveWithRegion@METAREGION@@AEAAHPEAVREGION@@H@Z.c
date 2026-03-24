/*
 * XREFs of ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02C1CCC
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02C1A5C (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0015BD8 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  unsigned int v5; // ebx
  int v7; // ecx
  _DWORD *v8; // rax
  _DWORD *v10; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v11; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  struct REGION *v15; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v16[4]; // [rsp+68h] [rbp-18h] BYREF

  v10 = (_DWORD *)*((_QWORD *)this + 4);
  v15 = a2;
  v5 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
  v11 = 0LL;
  if ( !v14[0]
    || !v13[0]
    || !v12[0]
    || !RGNOBJ::bCopy((RGNOBJ *)v12, (struct RGNOBJ *)&v10)
    || !RGNOBJ::bOffset((RGNOBJ *)v12, (struct _POINTL *)this + 3) )
  {
    goto LABEL_14;
  }
  if ( !(a3
       ? RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v10)
       : RGNOBJ::iCombine((RGNOBJ *)v14, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v15, 4)) )
    goto LABEL_14;
  if ( !RGNOBJ::iCombine((RGNOBJ *)v13, (struct RGNOBJ *)v12, (struct RGNOBJ *)&v15, 4) )
    goto LABEL_14;
  v11.x = -*((_DWORD *)this + 6);
  v11.y = -*((_DWORD *)this + 7);
  if ( !RGNOBJ::bOffset((RGNOBJ *)v13, &v11)
    || (v7 = RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)v14, (struct RGNOBJ *)v13, 1)) == 0
    || (v8 = v10, *((_QWORD *)this + 4) = v10, v7 == 1)
    || (v16[0] = v8[24], v16[1] = v8[25], v16[2] = v8[26], v16[3] = v8[27], ERECTL::bEmpty((ERECTL *)v16)) )
  {
LABEL_14:
    METAREGION::vClearMoveData(this, 1);
    v5 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
  return v5;
}
