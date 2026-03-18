/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00640AC
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0062998 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0061110 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C006345C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006532C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C006539C (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C0065458 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0065480 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A1618 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C013A2A8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A34C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(__int64 **a1, __int64 *a2, __int64 a3, unsigned __int16 *a4, _DWORD *a5)
{
  int v9; // r8d
  int v10; // r15d
  __int64 *v11; // rdx
  __int64 v13; // rcx
  char *Heap; // r12
  int v15; // r15d
  void *v16; // r8
  __int64 v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rdx
  int MenuDepth; // ebx
  _QWORD *v30; // rdx
  __int64 *v31; // rax
  struct tagMENU *Menu; // rax
  __int64 v33; // rcx
  _QWORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+50h] [rbp-48h]
  _BYTE v37[24]; // [rsp+58h] [rbp-40h] BYREF
  int BaseAddress; // [rsp+B0h] [rbp+18h]

  v9 = 0;
  BaseAddress = 0;
  v10 = 0;
  *a5 = 0;
  v11 = a1[2];
  if ( !v11 )
    v11 = (__int64 *)**a1;
  if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(v11[5] + 40) & 0x800) != 0 )
    *(_DWORD *)(*a2 + 104) = -1;
  if ( (*(_DWORD *)(a3 + 4) & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(a3 + 8);
    if ( (*(_DWORD *)(a3 + 8) & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4) |= 3u;
    v9 = 1;
    BaseAddress = 1;
    v10 = *(_DWORD *)(a3 + 8) & 0x100;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x40) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      v13 = *(_QWORD *)(**a1 + 24);
      if ( (*(_DWORD *)(v13 + 48) & 8) != 0 )
        return 0LL;
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(v13 + 136), 0, *a4 + 2LL);
      if ( !Heap && (*gpsi & 0x100) != 0 )
      {
        _InterlockedAnd(gpsi, 0xFFFFFEFF);
        UserLogError(2147483891LL);
      }
      if ( !Heap )
        return 0LL;
      memmove(Heap, *((const void **)a4 + 1), *a4);
      v15 = *a4 >> 1;
    }
    else
    {
      v15 = 0;
      Heap = 0LL;
    }
    v16 = (void *)a2[3];
    if ( v16 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**a1 + 24) + 136LL), 0, v16);
    *(_QWORD *)(*a2 + 40) = 0LL;
    *(_DWORD *)(*a2 + 48) = v15;
    v17 = *a2;
    if ( Heap )
      v18 = &Heap[a2[1] - v17];
    else
      v18 = 0LL;
    *(_QWORD *)(v17 + 40) = v18;
    a2[3] = (__int64)Heap;
    ++a2[11];
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *(_QWORD *)(*a2 + 96) = 0LL;
    *(_QWORD *)(*a2 + 96) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
    *(_DWORD *)(*a2 + 104) = -1;
    v21 = *a2;
    if ( (unsigned __int64)(*(_QWORD *)(*a2 + 96) - 1LL) <= 0xA )
      *(_DWORD *)(v21 + 4) |= 0x20000000u;
    else
      *(_DWORD *)(v21 + 4) &= ~0x20000000u;
  }
  if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 4) & 0x20) != 0 )
    *(_QWORD *)(*a2 + 56) = *(_QWORD *)(a3 + 48);
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    *(_DWORD *)(*a2 + 4) &= 0xFFFFFFF4;
    *(_DWORD *)(*a2 + 4) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87LL);
        return 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) |= 0x400u;
    }
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
  {
    *(_QWORD *)(*a2 + 24) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(*a2 + 32) = *(_QWORD *)(a3 + 40);
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 4) == 0 )
    goto LABEL_36;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v35, 0LL);
  v22 = *(_QWORD *)(a3 + 24);
  if ( v22 )
  {
    v25 = ValidateHmenu(v22);
    v36 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v35, v25);
  }
  v23 = a2 + 2;
  v24 = a2[2];
  if ( v24 != *(_QWORD *)v35[0] )
  {
    if ( v24 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37);
      RemoveParentMenu(a1, (__int64)a2);
      DestroyMenu(*v23);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37);
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v35) )
    {
      UnlockSubMenu(a1, a2);
LABEL_62:
      v10 = 1;
      goto LABEL_47;
    }
    v26 = 0;
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v35, a1) )
    {
      Menu = InternalCreateMenu(0);
      v36 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v35, Menu);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v35) )
      {
LABEL_70:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v35);
        return 0LL;
      }
      v26 = 1;
    }
    v27 = v36;
    if ( !v36 )
      v27 = *(_QWORD *)v35[0];
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 48);
    else
      v28 = 0LL;
    *(_QWORD *)(*a2 + 16) = v28;
    v34[0] = a2 + 2;
    v34[1] = v27;
    HMAssignmentLock(v34, 0LL);
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) |= 1u;
    MenuDepth = GetMenuDepth(v35, 25LL);
    if ( (unsigned int)GetMenuAncestors(a1) + MenuDepth < 0x19 )
    {
      v30 = (_QWORD *)Win32AllocPoolZInit(16LL, 1953066325LL);
      if ( v30 )
      {
        v31 = a1[2];
        if ( !v31 )
          v31 = (__int64 *)**a1;
        v30[1] = v31;
        *v30 = *(_QWORD *)(*(_QWORD *)v35[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v35[0] + 104LL) = v30;
        goto LABEL_62;
      }
    }
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) &= ~1u;
    *(_QWORD *)(*a2 + 16) = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v26 )
    {
      v33 = v36;
      if ( !v36 )
        v33 = *(_QWORD *)v35[0];
      DestroyMenu(v33);
    }
    goto LABEL_70;
  }
LABEL_47:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v35);
  v9 = BaseAddress;
LABEL_36:
  v19 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*(_QWORD *)(v19 + 96) )
  {
    *(_DWORD *)v19 = 2048;
    *(_DWORD *)(*a2 + 4) |= 3u;
  }
  if ( v9 )
  {
    *(_DWORD *)(*a2 + 80) = 0;
    *(_DWORD *)(*a2 + 84) = 0x7FFFFFFF;
    *(_DWORD *)(*a2 + 88) = 0;
    *(_DWORD *)(**a1 + 64) = 0;
    *(_DWORD *)(**a1 + 68) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
