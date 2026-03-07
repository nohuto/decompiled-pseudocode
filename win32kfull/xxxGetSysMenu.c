__int64 __fastcall xxxGetSysMenu(_QWORD *a1, int a2)
{
  __int64 SysMenuPtr; // rax
  __int64 v5; // rcx
  __int64 SubMenu; // rax
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v10 = 0LL;
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) && a2 )
  {
    v5 = v10;
    if ( !v10 )
      v5 = *(_QWORD *)v9[0];
    SubMenu = GetSubMenu(v5);
    v10 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v9, SubMenu);
  }
  v7 = v10;
  if ( !v10 )
    v7 = *(_QWORD *)v9[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v7;
}
