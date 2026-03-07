__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 SysDesktopMenu; // rax
  _QWORD *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v6, *(_QWORD *)(v2 + 64));
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v6) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_QWORD *)(a1 + 24) + 64LL, 48LL);
    v7 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v6, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v6);
  LOBYTE(v3) = !SmartObjStackRef<tagMENU>::operator==((__int64)v6);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v3;
}
