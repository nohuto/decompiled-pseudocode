/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C0131B5C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0131D34 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131600 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C013177C (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131D00 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  struct _HOBBY near **v4; // rbx
  unsigned int *v5; // rdi
  int v6; // r8d
  struct _POINTFIX *v7; // rbx
  struct _POINTFIX *v8; // rdi
  struct _POINTFIX *v9; // rdx
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 < 576 )
  {
    v4 = &WIDEPENOBJ::ahob;
    v5 = (unsigned int *)&unk_1C0326A48;
  }
  else if ( v3 < 1600 )
  {
    v4 = (struct _HOBBY near **)&off_1C0326A50;
    v5 = (unsigned int *)&unk_1C0326A58;
  }
  else if ( v3 < 3136 )
  {
    v4 = (struct _HOBBY near **)&off_1C0326A60;
    v5 = (unsigned int *)&unk_1C0326A68;
  }
  else if ( v3 >= 5184 )
  {
    if ( v3 < 7744 )
    {
      v4 = (struct _HOBBY near **)&off_1C0326A80;
      v5 = (unsigned int *)&unk_1C0326A88;
    }
    else
    {
      v4 = (struct _HOBBY near **)&off_1C0326A90;
      v5 = (unsigned int *)&unk_1C0326A98;
    }
  }
  else
  {
    v4 = (struct _HOBBY near **)&off_1C0326A70;
    v5 = (unsigned int *)&unk_1C0326A78;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v7 = (struct _POINTFIX *)*v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
  {
    v9 = v7++;
    WIDEPATHOBJ::vAddPoint(this, v9, v6);
  }
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
