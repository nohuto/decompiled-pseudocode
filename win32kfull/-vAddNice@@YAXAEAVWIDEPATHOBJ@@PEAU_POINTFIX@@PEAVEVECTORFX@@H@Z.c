/*
 * XREFs of ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0151358
 * Callers:
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C0151478 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02F3CCC (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02F41D4 (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C01513D8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall vAddNice(struct WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  int v5; // r10d
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned __int64 v10; // [rsp+38h] [rbp+18h] BYREF

  v5 = a2->x | a2->y;
  v10 = 0LL;
  if ( (v5 & 0xF) == 0 )
  {
    if ( a4 )
    {
      v6 = -*(_DWORD *)a3;
      v7 = -*((_DWORD *)a3 + 1);
      v10 = __PAIR64__(v7, v6);
      a4 = 0;
    }
    else
    {
      v10 = *(_QWORD *)a3;
      v7 = HIDWORD(v10);
      v6 = v10;
    }
    if ( v6 <= 0 )
    {
      if ( v6 >= 0 )
        goto LABEL_10;
      v8 = v6 + 1;
    }
    else
    {
      v8 = v6 - 1;
    }
    LODWORD(v10) = v8;
LABEL_10:
    if ( v7 <= 0 )
    {
      if ( v7 >= 0 )
      {
LABEL_15:
        a3 = (struct EVECTORFX *)&v10;
        goto LABEL_16;
      }
      v9 = v7 + 1;
    }
    else
    {
      v9 = v7 - 1;
    }
    HIDWORD(v10) = v9;
    goto LABEL_15;
  }
LABEL_16:
  WIDEPATHOBJ::vAddPoint(this, a2, a3, a4);
}
