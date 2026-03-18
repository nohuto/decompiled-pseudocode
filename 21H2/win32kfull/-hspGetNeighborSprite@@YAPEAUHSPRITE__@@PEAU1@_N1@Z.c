/*
 * XREFs of ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0103498
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0153D4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01541E4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C01549C4 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00EDC30 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

__int64 __fastcall hspGetNeighborSprite(HSPRITE a1, char a2, char a3)
{
  __int64 v4; // rbx
  __int64 **v6; // r8
  __int64 v7; // rax
  _QWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v9, a1);
  if ( v9 )
  {
    if ( a2 )
      v6 = (__int64 **)v9[3];
    else
      v6 = (__int64 **)v9[4];
    if ( !a3 || v6 == (__int64 **)((char *)g_pDwmState + 80) )
    {
LABEL_15:
      if ( v6 == (__int64 **)((char *)g_pDwmState + 80) )
        goto LABEL_10;
    }
    else
    {
      while ( 1 )
      {
        v7 = (__int64)(v6 + 3);
        if ( !v6 )
          v7 = 48LL;
        if ( v9[6] == *(_QWORD *)v7 )
          break;
        if ( a2 )
          v6 = (__int64 **)*v6;
        else
          v6 = (__int64 **)v6[1];
        if ( v6 == (__int64 **)((char *)g_pDwmState + 80) )
          goto LABEL_15;
      }
    }
    v4 = *(_QWORD *)((unsigned __int64)(v6 - 3) & -(__int64)(v6 != 0LL));
LABEL_10:
    DEC_SHARE_REF_CNT(v9);
  }
  return v4;
}
