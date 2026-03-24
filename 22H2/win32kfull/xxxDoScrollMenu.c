/*
 * XREFs of xxxDoScrollMenu @ 0x1C024510C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0063D00 (CalcSBStuff.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0110BC0 (GetAppCompatFlags.c)
 *     GetWndSBDisableFlags @ 0x1C0157EDC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4208 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02444C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244778 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C024503C (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0245640 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // r13d
  int v12; // r12d
  __int64 v13; // r8
  char WndSBDisableFlags; // al
  __int64 v15; // rdx
  struct tagMENU *ScrollMenu; // rax
  __int64 v17; // r12
  __int64 ThreadWin32Thread; // rax
  int v19; // r12d
  __int64 v20; // rcx
  int v22; // [rsp+30h] [rbp-79h]
  unsigned __int16 v23; // [rsp+34h] [rbp-75h]
  _QWORD v24[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h]
  __int128 v26; // [rsp+50h] [rbp-59h] BYREF
  __int64 v27; // [rsp+60h] [rbp-49h]
  int v28[16]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
      SBCtlSetup(v8);
      v9 = *((_QWORD *)a2 + 5);
      v10 = *(_DWORD *)(v8 + 12);
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v9 + 92);
      v22 = (__int16)a4 - *(_DWORD *)(v9 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, v28, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v13);
      v15 = *((_QWORD *)a1 + 5);
      LOBYTE(v10) = WndSBDisableFlags;
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v15 + 92);
      v22 = (__int16)a4 - *(_DWORD *)(v15 + 88);
    }
    v23 = v12;
    if ( (v10 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      SmartObjStackRefBase<tagMENU>::operator=(v24, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
      {
        v17 = v25;
        if ( !v25 )
          v17 = *(_QWORD *)v24[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v26 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v26;
        *((_QWORD *)&v26 + 1) = v17;
        HMLockObject(v17);
        v19 = xxxTrackPopupMenuEx(v24, 386LL, v11, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v20);
        if ( v19 )
        {
          if ( (unsigned __int8)v19 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v22 | (unsigned __int64)(v23 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, (unsigned __int8)v19, 0, a3);
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, 8u, 0, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
}
