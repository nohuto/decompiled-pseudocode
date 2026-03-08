/*
 * XREFs of ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x1C0043B10 (GreSelectBitmap.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0052474 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0053730 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::SaveAttributes(DC *this, struct _DC_ATTR *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-D8h]
  __int128 v6; // [rsp+30h] [rbp-C8h]
  __int128 v7; // [rsp+40h] [rbp-B8h]
  __int128 v8; // [rsp+50h] [rbp-A8h]
  __int128 v9; // [rsp+60h] [rbp-98h]
  __int128 v10; // [rsp+70h] [rbp-88h]
  __int128 v11; // [rsp+80h] [rbp-78h]
  __int128 v12; // [rsp+90h] [rbp-68h]
  __int128 v13; // [rsp+A0h] [rbp-58h]
  __int128 v14; // [rsp+B0h] [rbp-48h]
  __int128 v15; // [rsp+C0h] [rbp-38h]
  __int128 v16; // [rsp+D0h] [rbp-28h]
  __int128 v17; // [rsp+E0h] [rbp-18h]

  v5 = *((_OWORD *)a2 + 9);
  v6 = *((_OWORD *)a2 + 10);
  v7 = *((_OWORD *)a2 + 11);
  v8 = *((_OWORD *)a2 + 12);
  v9 = *((_OWORD *)a2 + 13);
  v10 = *((_OWORD *)a2 + 14);
  v11 = *((_OWORD *)a2 + 15);
  v12 = *((_OWORD *)a2 + 16);
  v13 = *((_OWORD *)a2 + 17);
  v14 = *((_OWORD *)a2 + 18);
  v15 = *((_OWORD *)a2 + 19);
  v16 = *((_OWORD *)a2 + 20);
  v17 = *((_OWORD *)a2 + 21);
  v2 = (_OWORD *)((char *)this + 688);
  if ( this == (DC *)-544LL )
    v2 = 0LL;
  *v2 = v5;
  v2[1] = v6;
  v2[2] = v7;
  v2[3] = v8;
  v2[4] = v9;
  v2[5] = v10;
  v2[6] = v11;
  v3 = v2 + 8;
  *(v3 - 1) = v12;
  *v3 = v13;
  v3[1] = v14;
  v3[2] = v15;
  v3[3] = v16;
  v3[4] = v17;
  return 1LL;
}
