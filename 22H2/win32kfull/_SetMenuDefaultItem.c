/*
 * XREFs of _SetMenuDefaultItem @ 0x1C0110D7C
 * Callers:
 *     xxxSetSysMenu @ 0x1C0046C70 (xxxSetSysMenu.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0110C60 (NtUserSetMenuDefaultItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0110D40 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0061B00 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
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
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

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
    SmartObjStackRefBase<tagMENU>::operator=(v15, v17);
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
