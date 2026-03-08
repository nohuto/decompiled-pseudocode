/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C023A8F8
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     GetDPIServerInfoForDpi @ 0x1C00A1E90 (GetDPIServerInfoForDpi.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     MNInitUAHMenu @ 0x1C02376B4 (MNInitUAHMenu.c)
 *     MNInitUAHMenuItem @ 0x1C02376D8 (MNInitUAHMenuItem.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C023B280 (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(__int64 **a1, __int64 a2, struct tagWND *a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __int64 *v18; // rcx
  int v19; // eax
  int v20; // edx
  __int64 result; // rax
  _DWORD v22[3]; // [rsp+20h] [rbp-51h] BYREF
  int v23; // [rsp+2Ch] [rbp-45h]
  int v24; // [rsp+30h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-39h]
  char v26[24]; // [rsp+40h] [rbp-31h] BYREF
  char v27[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v28; // [rsp+5Ch] [rbp-15h]
  __int128 v29; // [rsp+6Ch] [rbp-5h]

  memset_0(v22, 0, 0x70uLL);
  v9 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 104LL) == -1 )
  {
    v22[1] = 0;
    v22[0] = 1;
    v10 = *(_DWORD *)(v9 + 8);
    v23 = 0;
    v22[2] = v10;
    v24 = *(_DWORD *)(GetDPIServerInfoForDpi(a4) + 36);
    v11 = *(_QWORD *)a2;
    v25 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( (*(_DWORD *)v11 & 0x100) == 0 && (*(_QWORD *)(v11 + 96) != -1LL || !a3) )
      goto LABEL_8;
    xxxSendMessage(a3, 0x2Cu);
    v12 = (__int64)a1[2];
    if ( !v12 )
      v12 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v12, a2) != -1 )
    {
LABEL_8:
      v13 = (__int64)a1[2];
      if ( !v13 )
        v13 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v13) || !a3 )
        goto LABEL_23;
      v14 = a1[2];
      if ( !v14 )
        v14 = (__int64 *)**a1;
      MNInitUAHMenu(v14, a5, (__int64)v26);
      v15 = (__int64)a1[2];
      if ( !v15 )
        v15 = **a1;
      MNInitUAHMenuItem(v15, a2, (__int64)v27);
      xxxSendMessage(a3, 0x94u);
      v16 = (__int64)a1[2];
      if ( !v16 )
        v16 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v16, a2) != -1 )
      {
        v17 = v29;
        *(_OWORD *)(a2 + 52) = v28;
        *(_OWORD *)(a2 + 68) = v17;
        if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) != 0 )
        {
          v18 = a1[2];
          if ( !v18 )
            v18 = (__int64 *)**a1;
          v19 = MNUpdateUAHMaxPopupWidths(v18, a2);
          v20 = v19 + v23;
          goto LABEL_24;
        }
LABEL_23:
        v20 = v23;
LABEL_24:
        result = 1LL;
        *(_DWORD *)(*(_QWORD *)a2 + 104LL) = v20;
        *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v24;
        return result;
      }
    }
  }
  return 0LL;
}
