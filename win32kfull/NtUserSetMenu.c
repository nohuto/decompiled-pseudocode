__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v19;
      *((_QWORD *)&v19 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
      v18 = 0LL;
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v18 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v17, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17) )
        {
LABEL_15:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
          ThreadUnlock1(v14, v13, v15);
          goto LABEL_16;
        }
      }
      else
      {
        SmartObjStackRefBase<tagMENU>::operator=(v17, 0LL);
      }
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL) & 1) == 0 )
      {
        v9 = v18;
        if ( !v18 )
          v9 = *(_QWORD *)v17[0];
        *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v21;
        *((_QWORD *)&v21 + 1) = v9;
        if ( v9 )
          HMLockObject(v9);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v11, v10, v12);
      }
      else
      {
        UserSetLastError(87);
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
