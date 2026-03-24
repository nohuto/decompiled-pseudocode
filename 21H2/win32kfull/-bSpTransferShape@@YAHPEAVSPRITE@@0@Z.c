/*
 * XREFs of ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0281378
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0281908 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281AD0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0281F18 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0282300 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0165548 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 */

__int64 __fastcall bSpTransferShape(struct SPRITE *a1, struct SPRITE *a2)
{
  unsigned int v4; // esi
  struct _SURFOBJ *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 result; // rax
  struct _XLATEOBJ *v10; // [rsp+70h] [rbp+8h] BYREF

  *(_DWORD *)a1 |= *(_DWORD *)a2 & 0x10;
  v4 = 1;
  v5 = (struct _SURFOBJ *)*((_QWORD *)a2 + 16);
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 56) == 2 && *((_BYTE *)a2 + 231) == 1 && !*((_BYTE *)a2 + 228) )
    {
      bSpCreateShape(
        a1,
        (struct _POINTL *)a2 + 17,
        v5,
        0LL,
        (struct _RECTL *)a2 + 6,
        *((struct PALETTE **)a2 + 18),
        v5->iBitmapFormat,
        1u,
        0LL);
    }
    else
    {
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL);
      v7 = *((_QWORD *)a2 + 18);
      v10 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v10,
                           0LL,
                           0,
                           v7,
                           *(_QWORD *)(v6 + 104),
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0) )
        bSpCreateShape(
          a1,
          (struct _POINTL *)a2 + 17,
          *((struct _SURFOBJ **)a2 + 16),
          v10,
          (struct _RECTL *)a2 + 6,
          *(struct PALETTE **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL),
          0,
          1u,
          0LL);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v10, v8);
    }
    if ( *((_QWORD *)a1 + 16) )
    {
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
      *((_OWORD *)a1 + 6) = *((_OWORD *)a2 + 6);
      *((_DWORD *)a1 + 51) = *((_DWORD *)a2 + 51);
      *((_DWORD *)a1 + 50) = *((_DWORD *)a2 + 50);
    }
    else
    {
      v4 = 0;
    }
  }
  *((_QWORD *)a1 + 28) = *((_QWORD *)a2 + 28);
  result = v4;
  *((_DWORD *)a1 + 58) = *((_DWORD *)a2 + 58);
  return result;
}
