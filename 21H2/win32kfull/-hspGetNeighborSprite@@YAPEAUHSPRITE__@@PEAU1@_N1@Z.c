/*
 * XREFs of ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0115BB0
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0015E5C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFE7C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB92C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00EBDC4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00EC5A0 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0017464 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

__int64 __fastcall hspGetNeighborSprite(HSPRITE a1, char a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  char *v8; // rdx
  _QWORD *v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v10, a1);
  if ( v10 )
  {
    if ( a2 )
      v6 = v10[3];
    else
      v6 = v10[4];
    if ( a3 && (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      do
      {
        v7 = v6 + 24;
        if ( !v6 )
          v7 = 48LL;
        if ( v10[6] == *(_QWORD *)v7 )
          break;
        v6 = a2 ? *(_QWORD *)v6 : *(_QWORD *)(v6 + 8);
      }
      while ( (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) );
    }
    v8 = (char *)g_pDwmState + 80;
    if ( (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v8 = (char *)(v6 - 24);
      v4 = *(_QWORD *)((v6 - 24) & -(__int64)(v6 != 0));
    }
    DEC_SHARE_REF_CNT(v10, v8);
  }
  return v4;
}
