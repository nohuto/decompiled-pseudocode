/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0141C20
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0140688 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C013F518 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0141660 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C0141A48 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0141E10 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C0141EFC (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall WIDEPENOBJ::bPolygonizePen(WIDEPENOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // r8d
  int v8; // ebx
  int v9; // r11d
  int v10; // r10d
  int v11; // r9d
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  struct _POINTFIX v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-34h]
  int v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+54h] [rbp-2Ch]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]

  LODWORD(v13) = a3;
  *(_QWORD *)((char *)&v13 + 4) = 0LL;
  HIDWORD(v13) = -a3;
  EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v13, (struct _VECTORFX *)&v13, 2uLL, 0);
  v4 = v13;
  v5 = DWORD1(v13);
  if ( (_QWORD)v13 == __PAIR64__(-DWORD2(v13), HIDWORD(v13)) || (_QWORD)v13 == __PAIR64__(DWORD2(v13), -HIDWORD(v13)) )
  {
    v6 = v13;
    if ( (int)v13 < 0 )
      v6 = -(int)v13;
    v7 = DWORD1(v13);
    if ( SDWORD1(v13) < 0 )
      v7 = -DWORD1(v13);
    if ( v6 <= v7 )
    {
      if ( SDWORD1(v13) < 0 )
        v5 = -DWORD1(v13);
      v4 = v5;
    }
    else if ( (int)v13 < 0 )
    {
      v4 = -(int)v13;
    }
    if ( v4 < 104 )
    {
      if ( (unsigned int)WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v13) )
        return 1LL;
      if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 30) )
        return 0LL;
    }
  }
  if ( (unsigned int)WIDEPENOBJ::bThicken(this, (struct _POINTFIX *)&v13) )
    return 1LL;
  if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 30) )
    return 0LL;
  if ( !bTurnLeftRandom((struct EVECTORFX *)&v13, (struct EVECTORFX *)((char *)&v13 + 8)) )
  {
    DWORD2(v13) = -DWORD2(v13);
    HIDWORD(v13) = -HIDWORD(v13);
  }
  vHalve((struct EVECTORFX *)&v13);
  vHalve((struct EVECTORFX *)((char *)&v13 + 8));
  v8 = v13 - ((unsigned __int64)(1922922357LL * (int)v13) >> 32);
  v9 = DWORD1(v13) - ((unsigned __int64)(1922922357LL * SDWORD1(v13)) >> 32);
  v25 = -DWORD1(v13);
  v21 = HIDWORD(v13) - v9;
  v18 = v9 + HIDWORD(v13);
  v19 = *((_QWORD *)&v13 + 1);
  v10 = DWORD2(v13) - ((unsigned __int64)(1922922357LL * SDWORD2(v13)) >> 32);
  v14 = (struct _POINTFIX)v13;
  v11 = HIDWORD(v13) - ((unsigned __int64)(1922922357LL * SHIDWORD(v13)) >> 32);
  v16 = v11 + DWORD1(v13);
  v24 = -(int)v13;
  v23 = v11 - DWORD1(v13);
  v22 = v10 - v13;
  v20 = DWORD2(v13) - v8;
  v17 = v8 + DWORD2(v13);
  v15 = v10 + v13;
  return WIDEPENOBJ::bPenFlatten((struct _POINTFIX **)this, &v14);
}
