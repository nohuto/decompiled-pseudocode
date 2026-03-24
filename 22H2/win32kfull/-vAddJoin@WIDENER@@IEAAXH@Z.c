/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01409F0
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0140328 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C0140B34 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0140B60 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C0140BC0 (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0140C2C (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0141028 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0141070 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C01410B8 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0141644 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CEC3C (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v2; // eax
  __int64 v4; // rdx
  struct EVECTORFX *v5; // rcx
  struct EVECTORFX *v6; // rdx
  int v7; // r14d
  int v8; // r8d
  int v9; // r8d
  WIDEPATHOBJ *v10; // rcx
  int v11; // r8d
  int v12; // r14d
  int v13; // r8d
  int v14; // r8d
  WIDEPATHOBJ *v15; // rcx
  int v16; // r8d
  int v17; // [rsp+60h] [rbp+30h] BYREF
  int v18; // [rsp+64h] [rbp+34h]
  int v19; // [rsp+70h] [rbp+40h] BYREF
  int v20; // [rsp+74h] [rbp+44h]
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((_DWORD *)this + 322);
  if ( !v2 || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
  }
  else
  {
    v4 = *((_QWORD *)this + 89);
    v5 = (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL);
    v6 = (struct EVECTORFX *)(v4 + 48);
    if ( v2 == 1 )
    {
      v12 = bTurnLeftRandom(v5, v6);
      WIDENER::vecInPerp(this, &v17);
      WIDENER::vecOutPerp(this, &v19);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v17, v13);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v17,
        0);
      if ( v17 != v19 || v18 != v20 )
      {
        v15 = (WIDENER *)((char *)this + 984);
        if ( !v12 )
          v15 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v15, (struct _POINTFIX *)((char *)this + 692), v14);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v19,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v19, v16);
      }
    }
    else
    {
      v7 = bTurnLeftRandom(v5, v6);
      WIDENER::vecInPerp(this, &v17);
      WIDENER::vecOutPerp(this, &v19);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v17, v8);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v17,
        0);
      if ( v17 != v19 || v18 != v20 )
      {
        if ( (unsigned int)bComputeIntersect(
                             (struct EVECTORFX *)&v17,
                             (struct EVECTORFX *)(*((_QWORD *)this + 88) + 40LL),
                             (struct EVECTORFX *)&v19,
                             (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL),
                             (struct EVECTORFX *)&v21)
          && (unsigned int)WIDENER::bMiterInLimit(this, v21) )
        {
          if ( v7 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 1136),
              (struct _POINTFIX *)((char *)this + 692),
              (struct EVECTORFX *)&v21,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)&v21, v9);
        }
        v10 = (WIDENER *)((char *)this + 984);
        if ( !v7 )
          v10 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v10, (struct _POINTFIX *)((char *)this + 692), v9);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v19, v11);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v19,
          0);
      }
    }
  }
}
