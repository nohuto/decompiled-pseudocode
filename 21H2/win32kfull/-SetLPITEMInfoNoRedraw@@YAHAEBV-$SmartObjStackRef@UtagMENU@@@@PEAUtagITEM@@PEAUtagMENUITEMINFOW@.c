/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0069260 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00692A0 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F5AF4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00FBA5C (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??4?$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z @ 0x1C00FD52C (--4-$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01076C4 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01092F4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C010A0B0 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0159FF4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(_QWORD **a1, PVOID **a2, __int64 a3, unsigned __int16 *a4, _DWORD *a5)
{
  int v9; // r13d
  int v10; // r12d
  _QWORD *v11; // rcx
  __int64 v12; // r8
  unsigned __int16 *v13; // r9
  int v14; // eax
  int v15; // r12d
  void *v16; // rax
  void *v17; // r12
  int v18; // r14d
  int v19; // eax
  PVOID *v20; // rcx
  PVOID *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  PVOID **v25; // r14
  PVOID *v26; // rax
  int v27; // r12d
  PVOID *v28; // rcx
  PVOID *v29; // rdx
  int MenuDepth; // ebx
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  struct tagMENU *Menu; // rax
  PVOID *v34; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-58h] BYREF
  PVOID *v37; // [rsp+50h] [rbp-48h]
  _BYTE v38[24]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  v11 = a1[2];
  if ( !v11 )
    v11 = (_QWORD *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v11) )
    *((_DWORD *)*a2 + 26) = -1;
  v14 = *(_DWORD *)(v12 + 4);
  if ( (v14 & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(v12 + 8);
    v15 = *(_DWORD *)(v12 + 8);
    if ( (v15 & 0x800) != 0 )
    {
      *((_DWORD *)*a2 + 1) |= 3u;
      v15 = *(_DWORD *)(v12 + 8);
    }
    v9 = 1;
    v10 = v15 & 0x100;
    v14 = *(_DWORD *)(v12 + 4);
  }
  if ( (v14 & 0x40) != 0 )
  {
    if ( *((_QWORD *)v13 + 1) )
    {
      v16 = (void *)DesktopAlloc(*(_QWORD *)(**a1 + 24LL), (unsigned int)*v13 + 2, 8LL);
      v17 = v16;
      if ( !v16 )
        return 0LL;
      memmove(v16, *((const void **)a4 + 1), *a4);
      v18 = *a4 >> 1;
    }
    else
    {
      v18 = 0;
      v17 = 0LL;
    }
    FreeItemString(a1, a2);
    *((_DWORD *)*a2 + 12) = v18;
    tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(a2 + 3, v17);
    a2[11] = (PVOID *)((char *)a2[11] + 1);
    v9 = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    (*a2)[12] = 0LL;
    (*a2)[12] = *(PVOID *)(a3 + 72);
    v9 = 1;
    v10 = 1;
    *((_DWORD *)*a2 + 26) = -1;
    v22 = *a2;
    if ( (char *)(*a2)[12] - 1 > (char *)0xA )
      *((_DWORD *)v22 + 1) &= ~0x20000000u;
    else
      *((_DWORD *)v22 + 1) |= 0x20000000u;
  }
  v19 = *(_DWORD *)(a3 + 4);
  if ( (v19 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 2) = *(_DWORD *)(a3 + 16);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 0x20) != 0 )
  {
    (*a2)[7] = *(PVOID *)(a3 + 48);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 1) != 0 )
  {
    *((_DWORD *)*a2 + 1) &= 0xFFFFFFF4;
    *((_DWORD *)*a2 + 1) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *((_DWORD *)*a2 + 1) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87LL);
        return 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) |= 0x400u;
    }
    v9 = 1;
    v10 = 1;
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 8) != 0 )
  {
    (*a2)[3] = *(PVOID *)(a3 + 32);
    (*a2)[4] = *(PVOID *)(a3 + 40);
    v10 = 1;
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 4) == 0 )
    goto LABEL_27;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, 0LL);
  v23 = *(_QWORD *)(a3 + 24);
  if ( v23 )
  {
    v24 = ValidateHmenu(v23);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, v24);
  }
  v25 = a2 + 2;
  v26 = a2[2];
  if ( v26 != *(PVOID **)v36[0] )
  {
    if ( v26 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38);
      RemoveParentMenu(a1, a2);
      DestroyMenu(*v25);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v38);
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v36) )
    {
      UnlockSubMenu(a1, a2);
LABEL_52:
      v10 = 1;
      goto LABEL_53;
    }
    v27 = 0;
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v36, a1) )
    {
      Menu = InternalCreateMenu(0);
      v37 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, (__int64)Menu);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v36) )
      {
LABEL_58:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v36);
        return 0LL;
      }
      v27 = 1;
    }
    v28 = v37;
    if ( !v37 )
      v28 = *(PVOID **)v36[0];
    v29 = *a2;
    if ( v28 )
      v29[2] = v28[6];
    else
      v29[2] = 0LL;
    v35[0] = a2 + 2;
    v35[1] = v28;
    HMAssignmentLock(v35, 0LL);
    *((_DWORD *)(*v25)[5] + 10) |= 1u;
    MenuDepth = GetMenuDepth(v36, 25LL);
    if ( (unsigned int)GetMenuAncestors(a1) + MenuDepth < 0x19 )
    {
      v31 = (_QWORD *)Win32AllocPoolZInit(16LL, 1953066325LL);
      if ( v31 )
      {
        v32 = a1[2];
        if ( !v32 )
          v32 = (_QWORD *)**a1;
        v31[1] = v32;
        *v31 = *(_QWORD *)(*(_QWORD *)v36[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v36[0] + 104LL) = v31;
        goto LABEL_52;
      }
    }
    *((_DWORD *)(*v25)[5] + 10) &= ~1u;
    (*a2)[2] = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v27 )
    {
      v34 = v37;
      if ( !v37 )
        v34 = *(PVOID **)v36[0];
      DestroyMenu(v34);
    }
    goto LABEL_58;
  }
LABEL_53:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v36);
LABEL_27:
  v20 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !v20[12] )
  {
    *(_DWORD *)v20 = 2048;
    *((_DWORD *)*a2 + 1) |= 3u;
  }
  if ( v9 )
  {
    *((_DWORD *)*a2 + 20) = 0;
    *((_DWORD *)*a2 + 21) = 0x7FFFFFFF;
    *((_DWORD *)*a2 + 22) = 0;
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
