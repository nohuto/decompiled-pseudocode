/*
 * XREFs of GreSetBkMode @ 0x1C0118028
 * Callers:
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02039A0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0228B58 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 *     xxxDrawState @ 0x1C02423C0 (xxxDrawState.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v2; // edi
  DC *v4; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v6; // rax
  DC *v7; // rcx
  struct _DC_ATTR *v8; // rax
  __int64 v9; // rbx
  DC *v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  unsigned int v13; // [rsp+2Ch] [rbp-4h]
  int v14; // [rsp+50h] [rbp+20h] BYREF

  v2 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v11, a1);
  v4 = v11;
  if ( !v11 )
    return v2;
  if ( (*((_DWORD *)v11 + 11) & 2) == 0 )
  {
    if ( !v13 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v11);
      if ( UserAttr && !DC::SaveAttributes(v11, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
        v7 = 0LL;
        v11 = 0LL;
LABEL_13:
        if ( v7 )
        {
          if ( v12 && (*((_DWORD *)v7 + 11) & 2) != 0 )
          {
            if ( !v13 )
            {
              v8 = XDCOBJ::GetUserAttr((XDCOBJ *)&v11);
              v7 = v11;
              if ( v8 )
              {
                DC::RestoreAttributes(v11, v8);
                v7 = v11;
              }
            }
            *((_DWORD *)v7 + 11) &= ~2u;
            v12 = 0;
            v7 = v11;
          }
          v14 = 0;
          v9 = *(_QWORD *)v7;
          HmgDecrementExclusiveReferenceCountEx(v7, v13, &v14);
          if ( v14 )
            GrepDeleteDC(v9, 0x2000000LL);
        }
        return v2;
      }
      v4 = v11;
    }
    *((_DWORD *)v4 + 11) |= 2u;
    v4 = v11;
    v12 = 1;
  }
  if ( (*((_DWORD *)v4 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v4);
    v4 = v11;
  }
  if ( v4 )
  {
    v6 = *((_QWORD *)v4 + 122);
    v2 = *(_DWORD *)(v6 + 224);
    *(_DWORD *)(v6 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*((_QWORD *)v11 + 122) + 213LL) = a2;
    v7 = v11;
    goto LABEL_13;
  }
  return v2;
}
