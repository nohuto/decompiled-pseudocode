/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02F3FE8
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C0150C18 (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0150D20 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C015132C (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C01513D8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1C015143C (-vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01518FE (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C015198A (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C02F323C (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02F4208 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v2; // eax
  __int64 v4; // rdx
  const struct _POINTFIX *v5; // rdi
  struct EVECTORFX *v6; // rcx
  struct EVECTORFX *v7; // rdx
  BOOL v8; // r14d
  WIDEPATHOBJ *v9; // rcx
  BOOL v10; // r14d
  __int64 v11; // r9
  __int64 v12; // rdx
  WIDEPATHOBJ *v13; // rcx
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((_DWORD *)this + 322);
  if ( !v2 || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
    return;
  }
  v4 = *((_QWORD *)this + 89);
  v5 = (const struct _POINTFIX *)((char *)this + 692);
  v6 = (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL);
  v7 = (struct EVECTORFX *)(v4 + 48);
  if ( v2 != 1 )
  {
    v10 = bTurnLeftRandom(v6, v7);
    WIDENER::vecInPerp(this, &v14);
    WIDENER::vecOutPerp(this, &v15);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v14,
      0);
    if ( (_DWORD)v14 == (_DWORD)v15 && HIDWORD(v14) == HIDWORD(v15) )
      return;
    v11 = *((_QWORD *)this + 89);
    v12 = *((_QWORD *)this + 88);
    v16 = 0LL;
    if ( (unsigned int)bComputeIntersect(
                         (struct EVECTORFX *)&v14,
                         (struct EVECTORFX *)(v12 + 40),
                         (struct EVECTORFX *)&v15,
                         (struct EVECTORFX *)(v11 + 40),
                         (struct EVECTORFX *)&v16)
      && WIDENER::bMiterInLimit((__int64)this, v16) )
    {
      if ( v10 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v16,
          0);
LABEL_19:
        v13 = (WIDENER *)((char *)this + 984);
        goto LABEL_17;
      }
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v16);
    }
    else if ( v10 )
    {
      goto LABEL_19;
    }
    v13 = (WIDENER *)((char *)this + 1136);
LABEL_17:
    WIDEPATHOBJ::vAddPoint(v13, v5);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v15,
      0);
    return;
  }
  v8 = bTurnLeftRandom(v6, v7);
  WIDENER::vecInPerp(this, &v14);
  WIDENER::vecOutPerp(this, &v15);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1136),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v14,
    0);
  if ( (_DWORD)v14 != (_DWORD)v15 || HIDWORD(v14) != HIDWORD(v15) )
  {
    v9 = (WIDENER *)((char *)this + 984);
    if ( !v8 )
      v9 = (WIDENER *)((char *)this + 1136);
    WIDEPATHOBJ::vAddPoint(v9, (const struct _POINTFIX *)((char *)this + 692));
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v15,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
  }
}
