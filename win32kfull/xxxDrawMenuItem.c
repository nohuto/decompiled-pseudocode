_DWORD *__fastcall xxxDrawMenuItem(HDC a1, int a2, __int64 **a3, __int64 a4, char a5, struct tagWND *a6)
{
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v12; // r8d
  int v13; // r12d
  BOOL v14; // r15d
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rcx
  _DWORD *result; // rax
  __int64 v19; // rcx
  int v20; // ebx
  int DpiForSystem; // eax
  __int64 v22; // rdx
  __int16 *OemBitmapInfoForDpi; // rbx
  int v24; // esi
  int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned int v28; // ebx
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r11d
  int v32; // r11d
  _DWORD *v33; // rcx
  unsigned int v34; // ebx
  int v35; // r15d
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-A8h]
  int v38; // [rsp+50h] [rbp-78h]
  int v39; // [rsp+54h] [rbp-74h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  _DWORD v41[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v42; // [rsp+80h] [rbp-48h]
  int v43; // [rsp+E0h] [rbp+18h]

  v38 = 0;
  v40 = 0LL;
  v43 = 0;
  v9 = (__int64)a3[2];
  v10 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  if ( !v9 )
    v9 = **a3;
  v39 = MNIsOwnerDrawItem(v9, (_DWORD **)a4);
  if ( v10 == v12 )
  {
    if ( (unsigned int)MNDrawHilite((__int64)a3, a4) || (v13 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v13 = 1;
    v14 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) == 0;
  }
  else
  {
    v13 = MNDrawHilite((__int64)a3, a4);
    v14 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v15 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v15 )
    {
      v40 = GreSelectFontInternal((__int64)a1, v15, 1);
    }
    else
    {
      v43 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi();
      GreSetTextCharacterExtra(a1);
      v10 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    }
  }
  if ( v39 )
  {
    GreSetTextColor((__int64)a1, *(unsigned int *)(gpsi + 4596LL));
    if ( v14 )
      v16 = *(_DWORD *)(gpsi + 4688LL);
    else
      v16 = *(_DWORD *)(gpsi + 4584LL);
    GreSetBkColor(a1, v16);
    xxxSendMenuDrawItemMessage((__int64)a1, (a5 & 1) + 1, a3, a4, 0, 0, a6);
    v17 = (__int64)a3[2];
    if ( !v17 )
      v17 = **a3;
    result = (_DWORD *)MNGetpItemIndex(v17, a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 && *(_QWORD *)(a4 + 16) )
      {
        v19 = (__int64)a3[2];
        if ( !v19 )
          v19 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v19) )
        {
          v20 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000));
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v20 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL, v22) )
            {
              v24 = OemBitmapInfoForDpi[3];
              v25 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v24 - 2) / 2;
              if ( v25 <= 0 )
                v25 = 0;
              BltColor(
                a1,
                *(_DWORD *)(*(_QWORD *)a4 + 68LL) + v25,
                OemBitmapInfoForDpi[2],
                v24,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_72:
      MNDrawInsertionBar(a1, (struct tagITEM *)a4);
      if ( v38 )
        GreSetBkMode(a1, v38);
      result = *(_DWORD **)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v40 )
        {
          return (_DWORD *)GreSelectFontInternal((__int64)a1, v40, 1);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return (_DWORD *)GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v13 )
  {
    if ( v10 == -2147352576 )
    {
      v26 = gpsi;
      v27 = *(_QWORD *)(gpsi + 4928LL);
LABEL_35:
      v28 = *(_DWORD *)(v26 + 4624);
      v29 = *(_QWORD *)(v26 + 4808);
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 )
    {
      v26 = gpsi;
      v27 = *(_QWORD *)(gpsi + 4800LL);
      goto LABEL_35;
    }
LABEL_40:
    v27 = *(_QWORD *)(gpsi + 4728LL);
    v28 = *(_DWORD *)(gpsi + 4596LL);
    v29 = *(_QWORD *)(gpsi + 4752LL);
    goto LABEL_41;
  }
  if ( !v14 )
    goto LABEL_40;
  v28 = *(_DWORD *)(gpsi + 4596LL);
  v29 = *(_QWORD *)(gpsi + 4752LL);
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
    v27 = *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL);
  else
    v27 = *(_QWORD *)(gpsi + 4936LL);
LABEL_41:
  if ( !MNIsCachedBmpOnly((struct tagITEM *)a4)
    && ((*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0) )
  {
    if ( v13 || v30 != *(_DWORD *)(gpsi + 4628LL) || *(_DWORD *)(gpsi + 2188LL) )
    {
      if ( *(_DWORD *)(gpsi + 4636LL) != v30 )
      {
        v29 = *(_QWORD *)(gpsi + 4832LL);
        v28 = *(_DWORD *)(gpsi + 4636LL);
        goto LABEL_54;
      }
    }
    else if ( *(_DWORD *)(gpsi + 4632LL) != v30 || *(_DWORD *)(gpsi + 4648LL) != v30 )
    {
      v32 = ((*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0 ? 256 : 32) | v31;
LABEL_52:
      v43 = v32;
      goto LABEL_54;
    }
    v32 = v31 | 0x10;
    goto LABEL_52;
  }
LABEL_54:
  GreSetBkColor(a1, v30);
  GreSetTextColor((__int64)a1, v28);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) || v13 || v14 )
  {
    v33 = *(_DWORD **)a4;
    v42 = v27;
    v41[0] = v33[16];
    v41[1] = v33[17];
    v41[2] = v33[18];
    v41[3] = v33[19];
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v41, 1u, v37);
    v34 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
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
    v34 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
  {
    v35 = GreSetBkMode(a1, 1);
    v38 = v35;
  }
  else
  {
    v35 = 0;
  }
  GreSelectBrush(a1, v29);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v43);
  v36 = (__int64)a3[2];
  if ( !v36 )
    v36 = **a3;
  result = (_DWORD *)MNGetpItemIndex(v36, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v34 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, (__int64)a3, a4);
    goto LABEL_72;
  }
  if ( v35 )
    return (_DWORD *)GreSetBkMode(a1, v35);
  return result;
}
