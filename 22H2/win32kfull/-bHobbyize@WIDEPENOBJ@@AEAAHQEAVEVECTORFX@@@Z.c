/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C01414A0
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0141678 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0140788 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0140904 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0141644 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  struct _POINTFIX **v4; // rbx
  unsigned int *v5; // rdi
  int v6; // r8d
  struct _POINTFIX *v7; // rbx
  struct _POINTFIX *v8; // rdi
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 < 576 )
  {
    v4 = (struct _POINTFIX **)&WIDEPENOBJ::ahob;
    v5 = (unsigned int *)&unk_1C032AA18;
  }
  else if ( v3 < 1600 )
  {
    v4 = (struct _POINTFIX **)&off_1C032AA20;
    v5 = (unsigned int *)&unk_1C032AA28;
  }
  else if ( v3 < 3136 )
  {
    v4 = (struct _POINTFIX **)&off_1C032AA30;
    v5 = (unsigned int *)&unk_1C032AA38;
  }
  else if ( v3 >= 5184 )
  {
    if ( v3 < 7744 )
    {
      v4 = (struct _POINTFIX **)&off_1C032AA50;
      v5 = (unsigned int *)&unk_1C032AA58;
    }
    else
    {
      v4 = (struct _POINTFIX **)&off_1C032AA60;
      v5 = (unsigned int *)&unk_1C032AA68;
    }
  }
  else
  {
    v4 = (struct _POINTFIX **)&off_1C032AA40;
    v5 = (unsigned int *)&unk_1C032AA48;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v7 = *v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
    WIDEPATHOBJ::vAddPoint(this, v7++, v6);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
