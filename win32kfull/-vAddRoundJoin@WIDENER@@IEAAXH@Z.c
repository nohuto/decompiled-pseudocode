void __fastcall WIDENER::vAddRoundJoin(WIDENER *this)
{
  int v2; // r15d
  int v3; // r11d
  BOOL v4; // r13d
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v8; // ebx
  struct LINEDATA *v9; // r9
  struct LINEDATA *v10; // r8
  WIDEPENOBJ *v11; // rcx
  int v12; // r13d
  WIDEPATHOBJ *v13; // rcx
  int v14; // edi
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v4 = bTurnLeftRandom(
         (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
         (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || v3 )
  {
    v5 = WIDENER::vecInDraw(this, &v16);
  }
  else
  {
    v2 = 1;
    v5 = WIDENER::vecInPerp(this, &v15);
  }
  v6 = *v5;
  v15 = *v5;
  if ( v2 )
    v7 = WIDENER::vecOutPerp(this, &v16);
  else
    v7 = WIDENER::vecOutDraw(this, &v17);
  v16 = *v7;
  v8 = v16;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1136),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v15,
    0);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
  if ( (_DWORD)v6 != v8 || HIDWORD(v15) != HIDWORD(v16) )
  {
    v9 = (struct LINEDATA *)*((_QWORD *)this + 89);
    v10 = (struct LINEDATA *)*((_QWORD *)this + 88);
    v11 = (WIDENER *)((char *)this + 824);
    if ( v4 )
    {
      v12 = WIDEPENOBJ::cptAddRound(v11, this, v10, v9, v4, v2, v2);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 984), (const struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v16);
        if ( v12 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            0,
            v2,
            v2);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
        v13 = (WIDENER *)((char *)this + 984);
LABEL_19:
        WIDEPATHOBJ::vAddPoint(v13, (const struct _POINTFIX *)((char *)this + 692));
      }
    }
    else
    {
      v14 = WIDEPENOBJ::cptAddRound(v11, this, v10, v9, 0, v2, v2);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1136), (const struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v16,
          0);
        if ( v14 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            1,
            v2,
            v2);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v15,
          0);
        v13 = (WIDENER *)((char *)this + 1136);
        goto LABEL_19;
      }
    }
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v16,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v16);
  }
}
