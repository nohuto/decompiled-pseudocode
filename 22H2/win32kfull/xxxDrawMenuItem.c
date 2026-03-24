/*
 * XREFs of xxxDrawMenuItem @ 0x1C004470C
 * Callers:
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242388 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044578 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044600 (GreSetBkColor.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0044688 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044A40 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0044A6C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIServerInfoForDpi @ 0x1C0044E58 (GetDPIServerInfoForDpi.c)
 *     GrePolyPatBlt @ 0x1C00456F4 (GrePolyPatBlt.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045E9C (GreSetBkMode.c)
 *     GetDPIMETRICSForDpi @ 0x1C00480F0 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0048BB8 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010710C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C010721C (PrepareHDCBITSBitmap.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C024B6F0 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C024B7A8 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C024B994 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C025063C (BltColor.c)
 *     xxxDrawState @ 0x1C0250784 (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C02BBDC8 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BBE10 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, _QWORD **a3, struct tagITEM *a4, char a5, __int64 a6)
{
  _QWORD *v7; // rcx
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // r12d
  BOOL v14; // r15d
  int v15; // edx
  _QWORD *v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v26; // r15d
  int v27; // edx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdi
  int v31; // r8d
  unsigned int v32; // ebx
  int v33; // r15d
  _QWORD *v34; // rcx
  int v35; // [rsp+50h] [rbp-78h]
  int v36; // [rsp+54h] [rbp-74h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  int v38; // [rsp+E0h] [rbp+18h]

  v35 = 0;
  v37 = 0LL;
  v7 = a3[2];
  v38 = 0;
  if ( !v7 )
    v7 = (_QWORD *)**a3;
  v36 = MNIsOwnerDrawItem(v7, a4);
  v11 = MNDrawHilite(a3, a4);
  if ( v12 == -2147352576 )
  {
    if ( v11 || (v13 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v13 = 1;
    v14 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) == 0;
  }
  else
  {
    v13 = v11;
    v14 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v20 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48);
    if ( v20 )
    {
      v37 = GreSelectFont(a1, v20);
    }
    else
    {
      v38 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v12 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v36 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4596LL));
    if ( v14 )
      v15 = *(_DWORD *)(gpsi + 4688LL);
    else
      v15 = *(_DWORD *)(gpsi + 4584LL);
    GreSetBkColor(a1, v15);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, (_DWORD)a4, 0, 0, a6);
    v16 = a3[2];
    if ( !v16 )
      v16 = (_QWORD *)**a3;
    result = MNGetpItemIndex(v16, a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 && *((_QWORD *)a4 + 2) )
      {
        v21 = a3[2];
        if ( !v21 )
          v21 = (_QWORD *)**a3;
        if ( !(unsigned int)MNIsUAHMenu(v21, v18, v19) )
        {
          v23 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000), v22);
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v23 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v26 = OemBitmapInfoForDpi[3];
              v27 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v26 - 2) / 2;
              if ( v27 <= 0 )
                v27 = 0;
              BltColor(
                a1,
                v27 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v26,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_15:
      MNDrawInsertionBar(a1, a4);
      if ( v35 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v37 )
        {
          return GreSelectFont(a1, v37);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( !v13 )
  {
    if ( v14 )
    {
      v29 = *(_DWORD *)(gpsi + 4596LL);
      v30 = *(_QWORD *)(gpsi + 4752LL);
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  if ( v12 != -2147352576 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 )
    {
      v28 = gpsi;
      goto LABEL_40;
    }
LABEL_43:
    v29 = *(_DWORD *)(gpsi + 4596LL);
    v30 = *(_QWORD *)(gpsi + 4752LL);
    goto LABEL_44;
  }
  v28 = gpsi;
LABEL_40:
  v29 = *(_DWORD *)(v28 + 4624);
  v30 = *(_QWORD *)(v28 + 4808);
LABEL_44:
  if ( !(unsigned int)MNIsCachedBmpOnly(a4)
    && ((*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0) )
  {
    if ( v13 || v31 != *(_DWORD *)(gpsi + 4628LL) || *(_DWORD *)(gpsi + 2188LL) )
    {
      if ( *(_DWORD *)(gpsi + 4636LL) != v31 )
      {
        v30 = *(_QWORD *)(gpsi + 4832LL);
        v29 = *(_DWORD *)(gpsi + 4636LL);
        goto LABEL_56;
      }
    }
    else if ( *(_DWORD *)(gpsi + 4632LL) != v31 || *(_DWORD *)(gpsi + 4648LL) != v31 )
    {
      v38 |= (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0 ? 256 : 32;
      goto LABEL_56;
    }
    v38 |= 0x10u;
  }
LABEL_56:
  GreSetBkColor(a1, v31);
  GreSetTextColor(a1, v29);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) || v13 || v14 )
  {
    GrePolyPatBlt(a1);
    v32 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v13 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(gpsi + 4800LL));
  }
  else
  {
    v32 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) )
  {
    v33 = GreSetBkMode(a1);
    v35 = v33;
  }
  else
  {
    v33 = 0;
  }
  GreSelectBrush(a1, v30);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v38);
  v34 = a3[2];
  if ( !v34 )
    v34 = (_QWORD *)**a3;
  result = MNGetpItemIndex(v34, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v32 != -2147352576 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_15;
  }
  if ( v33 )
    return GreSetBkMode(a1);
  return result;
}
