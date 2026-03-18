/*
 * XREFs of GreSetBkMode @ 0x1C0115C14
 * Callers:
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     DrawFrameControl @ 0x1C01197C0 (DrawFrameControl.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200E00 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C02361F4 (xxxMenuDraw.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011CB30 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v2; // esi
  DC *v5; // rcx
  struct _DC_ATTR *UserAttr; // rax
  DC *v7; // rcx
  __int64 v8; // rax
  struct _DC_ATTR *v9; // rax
  __int64 v10; // rbx
  DC *v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  unsigned int v14; // [rsp+2Ch] [rbp-24h]
  _BYTE v15[32]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v15);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v12, a1);
  v5 = v12;
  if ( !v12 )
    goto LABEL_24;
  if ( (*((_DWORD *)v12 + 11) & 2) == 0 )
  {
    if ( !v14 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v12);
      if ( UserAttr && !DC::SaveAttributes(v12, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        v7 = 0LL;
        v12 = 0LL;
LABEL_15:
        if ( v7 )
        {
          if ( v13 && (*((_DWORD *)v7 + 11) & 2) != 0 )
          {
            if ( !v14 )
            {
              v9 = XDCOBJ::GetUserAttr((XDCOBJ *)&v12);
              v7 = v12;
              if ( v9 )
              {
                DC::RestoreAttributes(v12, v9);
                v7 = v12;
              }
            }
            *((_DWORD *)v7 + 11) &= ~2u;
            v13 = 0;
            v7 = v12;
          }
          v16 = 0;
          v10 = *(_QWORD *)v7;
          HmgDecrementExclusiveReferenceCountEx(v7, v14, &v16);
          if ( v16 )
            GrepDeleteDC(v10, 0x2000000LL);
        }
        goto LABEL_24;
      }
      v5 = v12;
    }
    *((_DWORD *)v5 + 11) |= 2u;
    v5 = v12;
    v13 = 1;
  }
  if ( (*((_DWORD *)v5 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v5);
    v5 = v12;
  }
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 122);
    v2 = *(_DWORD *)(v8 + 224);
    *(_DWORD *)(v8 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*((_QWORD *)v12 + 122) + 213LL) = a2;
    v7 = v12;
    goto LABEL_15;
  }
LABEL_24:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v2;
}
