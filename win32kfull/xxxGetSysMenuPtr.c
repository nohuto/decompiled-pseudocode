__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v8; // rdx
  __int64 SysDesktopMenu; // rax
  __int64 v10; // rdx
  __int64 *v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = (__int64 *)gSmartObjNullRef;
  v12 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v12;
  v3 = a1[5];
  v13 = 0LL;
  if ( (*(_BYTE *)(v3 + 30) & 8) == 0 )
  {
    v10 = 0LL;
    goto LABEL_12;
  }
  SmartObjStackRefBase<tagMENU>::operator=(&v11, a1[20]);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v11) )
  {
    v8 = *(_QWORD *)(a1[3] + 56LL);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v11, v8);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v11) )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v13 = 0LL;
        v10 = SysDesktopMenu;
LABEL_12:
        SmartObjStackRefBase<tagMENU>::operator=(&v11, v10);
      }
    }
  }
  v4 = v13;
  if ( !v13 )
    v4 = *v11;
  v5 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v11);
  v6 = *(_QWORD **)(v5 + 1512);
  if ( v6 )
    *(_QWORD *)(v5 + 1512) = *v6;
  return v4;
}
