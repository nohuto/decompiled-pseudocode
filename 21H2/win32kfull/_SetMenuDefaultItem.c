/*
 * XREFs of _SetMenuDefaultItem @ 0x1C00BC748
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserSetMenuDefaultItem @ 0x1C00BA4F0 (NtUserSetMenuDefaultItem.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00BC70C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v6 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( a2 == -1 )
  {
    v7 = 0LL;
  }
  else
  {
    v17 = *(_QWORD *)v15[0];
    v7 = MNLookUpItem(a1, a2, a3, &v17);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v17);
    if ( !v7 )
      goto LABEL_15;
    v8 = v16 ? v16 == a1 : *(_QWORD *)v15[0] == a1;
    if ( !v8 || (*(_DWORD *)*v7 & 0x800) != 0 )
      goto LABEL_15;
  }
  v9 = *(_QWORD **)(a1 + 88);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v10 )
  {
    v11 = v10;
    do
    {
      v12 = *(_DWORD *)(*v9 + 4LL);
      if ( (v12 & 0x1000) != 0 && v9 != v7 )
      {
        *(_DWORD *)(*v9 + 4LL) = v12 & 0xFFFFEFFF;
        *(_DWORD *)(*v9 + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*v9 + 88LL) = 0;
      }
      v9 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( a2 != -1 )
  {
    v13 = *(_DWORD *)(*v7 + 4LL);
    if ( (v13 & 0x1000) == 0 )
    {
      *(_DWORD *)(*v7 + 4LL) = v13 | 0x1000;
      *(_DWORD *)(*v7 + 84LL) = 0x7FFFFFFF;
      *(_DWORD *)(*v7 + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
    }
  }
  v6 = 1;
LABEL_15:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  return v6;
}
