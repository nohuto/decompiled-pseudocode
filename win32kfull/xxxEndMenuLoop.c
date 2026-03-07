_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  struct tagWND *v8; // rbx
  __int64 v9; // rcx
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, a2);
  if ( (**(_DWORD **)v15[0] & 8) != 0 )
  {
    if ( (**(_DWORD **)v15[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0);
    v3 = (_DWORD *)(a1 + 8);
  }
  else
  {
    v3 = (_DWORD *)(a1 + 8);
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      v17 = 0LL;
      v16 = 0LL;
      ThreadLock(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL), &v16);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL), 0);
      ThreadUnlock1(v5, v4, v6);
    }
    if ( (*v3 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*v3 & 0x100) != 0 )
  {
    v7 = 0;
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) )
    {
      v8 = *(struct tagWND **)(*(_QWORD *)v15[0] + 8LL);
      v9 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 432LL);
      if ( v9 == gpqForeground && *(struct tagWND **)(v9 + 128) == v8 )
      {
        v7 = 1;
        v10 = 1;
      }
      else
      {
        v10 = 2;
      }
      v18 = 0LL;
      v19 = 0LL;
      if ( ((*(unsigned __int8 *)(*((_QWORD *)v8 + 5) + 16LL) >> 6) & 1) != v7 )
      {
        ThreadLockAlways(v8, &v18);
        xxxDWP_DoNCActivate(v8, v10, 1LL);
        ThreadUnlock1(v12, v11, v13);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15);
}
