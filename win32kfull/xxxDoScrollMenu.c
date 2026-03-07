_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, int a4)
{
  __int64 v8; // r13
  int v9; // r8d
  unsigned int v10; // r13d
  struct tagMENU *ScrollMenu; // rax
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v18[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h]
  __int128 v20; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h]
  _BYTE v22[64]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
  v19 = 0LL;
  memset_0(v22, 0, sizeof(v22));
  v21 = 0LL;
  v20 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
      SBCtlSetup(v8);
      v9 = *(_DWORD *)(v8 + 12);
      v10 = (__int16)a4;
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v22, a3);
      LOBYTE(v9) = GetWndSBDisableFlags((__int64)a1, a3);
      v10 = (__int16)a4;
    }
    if ( (v9 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v19 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v18, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
      {
        v12 = v19;
        if ( !v19 )
          v12 = *(_QWORD *)v18[0];
        ThreadLockAlways(v12, &v20);
        v13 = xxxTrackPopupMenuEx(v18, 386LL, v10, (unsigned int)SHIWORD(a4), a1, 0LL);
        ThreadUnlock1(v15, v14, v16);
        if ( v13 )
        {
          if ( (unsigned __int8)v13 == 4 )
          {
            if ( !a2 )
              a2 = a1;
            xxxSBTrackInit(a2);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v13, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
}
