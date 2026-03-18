/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C0230D6C
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C01D23C0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C006345C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GetWindowBordersForDpi @ 0x1C00C6AB0 (GetWindowBordersForDpi.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxGetSysMenu @ 0x1C02221A0 (xxxGetSysMenu.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(unsigned __int64 *BugCheckParameter2, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdi
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int WindowDpiLastNotify; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int WindowBordersForDpi; // eax
  unsigned __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // edx
  int v30; // edx
  __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 SysMenu; // rax
  _QWORD *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  unsigned __int64 v40; // rcx
  int v41; // r12d
  __int64 *v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // r15
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD v58[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v59[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v60; // [rsp+70h] [rbp-10h]

  v5 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v59, 0LL);
  v8 = 0LL;
  v60 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v58, 0LL);
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87);
LABEL_3:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v58);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
    return 0LL;
  }
  *(_OWORD *)(a4 + 4) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v10 = BugCheckParameter2[5];
  v11 = *(_DWORD *)(v10 + 288) & 0xF;
  if ( v11 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v10 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v10 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)BugCheckParameter2);
  }
  else if ( !v11
         && (v13 = *(_QWORD *)(BugCheckParameter2[2] + 456)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2[2] + 424) + 284LL);
  }
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(v10 + 31) & 0x40) != 0 )
      goto LABEL_3;
    v14 = BugCheckParameter2[21];
    if ( !v14 )
      goto LABEL_3;
    v60 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v59, v14);
    if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
      || (int)v5 < 0
      || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
    {
      goto LABEL_3;
    }
    v17 = v60;
    if ( !v60 )
      v17 = *(_QWORD **)v59[0];
    *(_QWORD *)(a4 + 24) = *v17;
    if ( *(_DWORD *)(*(_QWORD *)v59[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v59[0] + 68LL) )
    {
      if ( (_DWORD)v5 )
      {
        v24 = BugCheckParameter2[5];
        v25 = 96 * v5;
        v26 = *(_QWORD *)(*(_QWORD *)v59[0] + 88LL);
        v27 = *(_QWORD *)(96 * v5 + v26 - 96);
        if ( (*(_BYTE *)(v24 + 26) & 0x40) != 0 )
        {
          v28 = *(_DWORD *)(v24 + 96) - *(_DWORD *)(v27 + 64);
          *(_DWORD *)(a4 + 12) = v28;
          *(_DWORD *)(a4 + 4) = v28 - *(_DWORD *)(*(_QWORD *)(v25 + v26 - 96) + 72LL);
        }
        else
        {
          v29 = *(_DWORD *)(v27 + 64) + *(_DWORD *)(v24 + 88);
          *(_DWORD *)(a4 + 4) = v29;
          *(_DWORD *)(a4 + 12) = v29 + *(_DWORD *)(*(_QWORD *)(v25 + v26 - 96) + 72LL);
        }
        v30 = *(_DWORD *)(BugCheckParameter2[5] + 92) + *(_DWORD *)(*(_QWORD *)(v25 + v26 - 96) + 68LL);
        *(_DWORD *)(a4 + 8) = v30;
        v23 = v30 + *(_DWORD *)(*(_QWORD *)(v25 + v26 - 96) + 76LL);
      }
      else
      {
        WindowBordersForDpi = GetWindowBordersForDpi(
                                *(_DWORD *)(BugCheckParameter2[5] + 28),
                                *(_DWORD *)(BugCheckParameter2[5] + 24),
                                v15,
                                v16,
                                WindowDpiLastNotify);
        v19 = BugCheckParameter2[5];
        v20 = WindowBordersForDpi;
        if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
        {
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v19 + 96) - WindowBordersForDpi;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v59[0] + 64LL);
        }
        else
        {
          v21 = v59[0];
          *(_DWORD *)(a4 + 4) = v20 + *(_DWORD *)(v19 + 88);
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v21 + 64LL);
        }
        *(_DWORD *)(a4 + 8) = v20 + *(_DWORD *)(BugCheckParameter2[5] + 92);
        v22 = BugCheckParameter2[5];
        if ( (*(_BYTE *)(v22 + 16) & 8) != 0 )
          *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v22 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
        v23 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v59[0] + 68LL);
      }
      *(_DWORD *)(a4 + 16) = v23;
    }
    v31 = *(__int64 **)(BugCheckParameter2[2] + 608);
    if ( v31 )
      v32 = *v31;
    else
      v32 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, v32);
    if ( !*(_QWORD *)v58[0] || (**(_DWORD **)v58[0] & 2) == 0 || (**(_DWORD **)v58[0] & 4) != 0 )
      goto LABEL_89;
    goto LABEL_63;
  }
  if ( a2 == -1 )
  {
    if ( (*(_BYTE *)(v10 + 30) & 8) == 0 )
      goto LABEL_3;
    SysMenu = xxxGetSysMenu(BugCheckParameter2, 0);
    v60 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v59, SysMenu);
    if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
      || (int)v5 < 0
      || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
    {
      goto LABEL_3;
    }
    v36 = v60;
    if ( !v60 )
      v36 = *(_QWORD **)v59[0];
    *(_QWORD *)(a4 + 24) = *v36;
    if ( (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2) )
    {
      v39 = GetWindowBordersForDpi(
              *(_DWORD *)(BugCheckParameter2[5] + 28),
              *(_DWORD *)(BugCheckParameter2[5] + 24),
              v37,
              v38,
              WindowDpiLastNotify);
      v40 = BugCheckParameter2[5];
      v41 = v39;
      if ( (*(_BYTE *)(v40 + 26) & 0x40) != 0 )
      {
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(v40 + 96) - v39;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                            - GetDpiDependentMetric(
                                ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                                WindowDpiLastNotify);
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v39 + *(_DWORD *)(v40 + 88);
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                             + GetDpiDependentMetric(
                                 ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                                 WindowDpiLastNotify);
      }
      *(_DWORD *)(a4 + 8) = v41 + *(_DWORD *)(BugCheckParameter2[5] + 92);
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                           + GetDpiDependentMetric(
                               ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 13,
                               WindowDpiLastNotify);
    }
    v42 = *(__int64 **)(BugCheckParameter2[2] + 608);
    if ( v42 )
      v43 = *v42;
    else
      v43 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, v43);
    if ( !*(_QWORD *)v58[0] || (**(_DWORD **)v58[0] & 2) == 0 || (**(_DWORD **)v58[0] & 4) == 0 )
      goto LABEL_89;
LABEL_63:
    if ( *(unsigned __int64 **)(*(_QWORD *)v58[0] + 8LL) == BugCheckParameter2 )
    {
      v44 = *(_DWORD *)(a4 + 40) | 1;
      *(_DWORD *)(a4 + 40) = v44;
      if ( !(_DWORD)v5 )
        goto LABEL_83;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 64LL) + 80LL) == (_DWORD)v5 - 1 )
      {
        v33 = v58[0];
        *(_DWORD *)(a4 + 40) |= 2u;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 64LL) + 24LL) )
        {
          v34 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v58[0] + 64LL) + 24LL);
LABEL_87:
          v8 = *v34;
          goto LABEL_88;
        }
        goto LABEL_88;
      }
    }
    goto LABEL_89;
  }
  if ( a2 != -4 )
    goto LABEL_3;
  _InterlockedAdd(&glSendMessage, 1u);
  v45 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  v46 = ValidateHmenu(v45);
  v60 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v59, v46);
  if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
    || (int)v5 < 0
    || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
  {
    goto LABEL_3;
  }
  *(_QWORD *)(a4 + 24) = v45;
  if ( (_DWORD)v5 )
  {
    v47 = BugCheckParameter2[5];
    v48 = 96 * v5;
    v49 = *(_QWORD *)(*(_QWORD *)v59[0] + 88LL);
    v50 = *(_QWORD *)(96 * v5 + v49 - 96);
    if ( (*(_BYTE *)(v47 + 26) & 0x40) != 0 )
    {
      v51 = *(_DWORD *)(v47 + 112) - *(_DWORD *)(v50 + 64);
      *(_DWORD *)(a4 + 12) = v51;
      *(_DWORD *)(a4 + 4) = v51 - *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
    }
    else
    {
      v52 = *(_DWORD *)(v50 + 64) + *(_DWORD *)(v47 + 104);
      *(_DWORD *)(a4 + 4) = v52;
      *(_DWORD *)(a4 + 12) = v52 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
    }
    v53 = *(_DWORD *)(BugCheckParameter2[5] + 108) + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 68LL);
    *(_DWORD *)(a4 + 8) = v53;
    *(_DWORD *)(a4 + 16) = v53 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 76LL);
  }
  else
  {
    *(_OWORD *)(a4 + 4) = *(_OWORD *)(BugCheckParameter2[5] + 104);
  }
  v54 = safe_cast_fnid_to_PMENUWND((__int64)BugCheckParameter2);
  if ( v54 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, *(_QWORD *)(v54 + 8));
    if ( *(_QWORD *)v58[0] )
    {
      v55 = *(_QWORD **)(BugCheckParameter2[2] + 608);
      v56 = v55 ? *v55 : 0LL;
      if ( *(_QWORD *)(*(_QWORD *)v58[0] + 64LL) == v56 )
      {
        v44 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v44;
        if ( !(_DWORD)v5 )
        {
LABEL_83:
          *(_DWORD *)(a4 + 40) = v44 | 2;
          goto LABEL_89;
        }
        if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)v58[0] + 80LL) + 1 )
          goto LABEL_89;
        v57 = v58[0];
        *(_DWORD *)(a4 + 40) |= 2u;
        if ( *(_QWORD *)(*(_QWORD *)v57 + 24LL) )
        {
          v34 = *(__int64 **)(*(_QWORD *)v58[0] + 24LL);
          goto LABEL_87;
        }
LABEL_88:
        *(_QWORD *)(a4 + 32) = v8;
      }
    }
  }
LABEL_89:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v58);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
  return 1LL;
}
