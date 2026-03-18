/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00BB868
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00BB660 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C00BBC00 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(unsigned __int64 *BugCheckParameter2, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rax
  int WindowBordersForDpi; // r8d
  unsigned __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 SysMenu; // rax
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  unsigned __int64 v33; // rdx
  int v34; // r13d
  __int64 *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // edx
  int v43; // edx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // edx
  int v54; // edx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD v59[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v60[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v61; // [rsp+70h] [rbp-10h]

  v5 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v60, 0LL);
  v8 = 0LL;
  v61 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v59);
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v9);
    goto LABEL_31;
  }
  v10 = 1;
  *(_OWORD *)(a4 + 4) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v11 = BugCheckParameter2[5];
  v12 = *(_DWORD *)(v11 + 288) & 0xF;
  if ( v12 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v11 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v11 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
  }
  else if ( !v12
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
    if ( (*(_BYTE *)(v11 + 31) & 0x40) == 0 )
    {
      v15 = BugCheckParameter2[21];
      if ( v15 )
      {
        v61 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, v15);
        if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v60)
          && (int)v5 >= 0
          && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
        {
          v18 = v61;
          if ( !v61 )
            v18 = *(_QWORD **)v60[0];
          *(_QWORD *)(a4 + 24) = *v18;
          if ( *(_DWORD *)(*(_QWORD *)v60[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v60[0] + 68LL) )
          {
            if ( (_DWORD)v5 )
            {
              v37 = BugCheckParameter2[5];
              v38 = 96 * v5;
              v39 = *(_QWORD *)(*(_QWORD *)v60[0] + 88LL);
              v40 = *(_QWORD *)(96 * v5 + v39 - 96);
              if ( (*(_BYTE *)(v37 + 26) & 0x40) != 0 )
              {
                v41 = *(_DWORD *)(v37 + 96) - *(_DWORD *)(v40 + 64);
                *(_DWORD *)(a4 + 12) = v41;
                *(_DWORD *)(a4 + 4) = v41 - *(_DWORD *)(*(_QWORD *)(v38 + v39 - 96) + 72LL);
              }
              else
              {
                v42 = *(_DWORD *)(v40 + 64) + *(_DWORD *)(v37 + 88);
                *(_DWORD *)(a4 + 4) = v42;
                *(_DWORD *)(a4 + 12) = v42 + *(_DWORD *)(*(_QWORD *)(v38 + v39 - 96) + 72LL);
              }
              v43 = *(_DWORD *)(BugCheckParameter2[5] + 92) + *(_DWORD *)(*(_QWORD *)(v38 + v39 - 96) + 68LL);
              *(_DWORD *)(a4 + 8) = v43;
              v24 = v43 + *(_DWORD *)(*(_QWORD *)(v38 + v39 - 96) + 76LL);
            }
            else
            {
              WindowBordersForDpi = GetWindowBordersForDpi(
                                      *(_DWORD *)(BugCheckParameter2[5] + 28),
                                      *(_DWORD *)(BugCheckParameter2[5] + 24),
                                      v16,
                                      v17,
                                      WindowDpiLastNotify);
              v20 = BugCheckParameter2[5];
              if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
              {
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v20 + 96) - WindowBordersForDpi;
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v60[0] + 64LL);
              }
              else
              {
                v21 = *(_DWORD *)(v20 + 88);
                v22 = v60[0];
                *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v21;
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v22 + 64LL);
              }
              *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(BugCheckParameter2[5] + 92);
              v23 = BugCheckParameter2[5];
              if ( (*(_BYTE *)(v23 + 16) & 8) != 0 )
                *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(
                                         ((*(char *)(v23 + 24) >> 7) & 0x14u) + 2,
                                         WindowDpiLastNotify);
              v24 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v60[0] + 68LL);
            }
            *(_DWORD *)(a4 + 16) = v24;
          }
          v25 = *(__int64 **)(BugCheckParameter2[2] + 608);
          if ( v25 )
            v26 = *v25;
          else
            v26 = 0LL;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v59, v26);
          if ( !*(_QWORD *)v59[0] || (**(_DWORD **)v59[0] & 2) == 0 || (**(_DWORD **)v59[0] & 4) != 0 )
            goto LABEL_28;
          goto LABEL_62;
        }
      }
    }
LABEL_31:
    v10 = 0;
    goto LABEL_28;
  }
  if ( a2 != -1 )
  {
    if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v46 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      v47 = ValidateHmenu(v46);
      v61 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, v47);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v60)
        && (int)v5 >= 0
        && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
      {
        *(_QWORD *)(a4 + 24) = v46;
        if ( (_DWORD)v5 )
        {
          v48 = BugCheckParameter2[5];
          v49 = 96 * v5;
          v50 = *(_QWORD *)(*(_QWORD *)v60[0] + 88LL);
          v51 = *(_QWORD *)(96 * v5 + v50 - 96);
          if ( (*(_BYTE *)(v48 + 26) & 0x40) != 0 )
          {
            v52 = *(_DWORD *)(v48 + 112) - *(_DWORD *)(v51 + 64);
            *(_DWORD *)(a4 + 12) = v52;
            *(_DWORD *)(a4 + 4) = v52 - *(_DWORD *)(*(_QWORD *)(v49 + v50 - 96) + 72LL);
          }
          else
          {
            v53 = *(_DWORD *)(v51 + 64) + *(_DWORD *)(v48 + 104);
            *(_DWORD *)(a4 + 4) = v53;
            *(_DWORD *)(a4 + 12) = v53 + *(_DWORD *)(*(_QWORD *)(v49 + v50 - 96) + 72LL);
          }
          v54 = *(_DWORD *)(BugCheckParameter2[5] + 108) + *(_DWORD *)(*(_QWORD *)(v49 + v50 - 96) + 68LL);
          *(_DWORD *)(a4 + 8) = v54;
          *(_DWORD *)(a4 + 16) = v54 + *(_DWORD *)(*(_QWORD *)(v49 + v50 - 96) + 76LL);
        }
        else
        {
          *(_OWORD *)(a4 + 4) = *(_OWORD *)(BugCheckParameter2[5] + 104);
        }
        v55 = safe_cast_fnid_to_PMENUWND((__int64)BugCheckParameter2);
        if ( !v55 )
          goto LABEL_28;
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v59, *(_QWORD *)(v55 + 8));
        if ( !*(_QWORD *)v59[0] )
          goto LABEL_28;
        v56 = *(_QWORD **)(BugCheckParameter2[2] + 608);
        v57 = v56 ? *v56 : 0LL;
        if ( *(_QWORD *)(*(_QWORD *)v59[0] + 64LL) != v57 )
          goto LABEL_28;
        v44 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v44;
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)v59[0] + 80LL) + 1 )
            goto LABEL_28;
          v58 = v59[0];
          *(_DWORD *)(a4 + 40) |= 2u;
          if ( *(_QWORD *)(*(_QWORD *)v58 + 24LL) )
            v8 = **(_QWORD **)(*(_QWORD *)v59[0] + 24LL);
          goto LABEL_67;
        }
LABEL_88:
        *(_DWORD *)(a4 + 40) = v44 | 2;
        goto LABEL_28;
      }
    }
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(v11 + 30) & 8) == 0 )
    goto LABEL_31;
  SysMenu = xxxGetSysMenu(BugCheckParameter2, 0LL);
  v61 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v60)
    || (int)v5 < 0
    || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 40LL) + 44LL) )
  {
    goto LABEL_31;
  }
  v29 = v61;
  if ( !v61 )
    v29 = *(_QWORD **)v60[0];
  *(_QWORD *)(a4 + 24) = *v29;
  if ( (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2) )
  {
    v32 = GetWindowBordersForDpi(
            *(_DWORD *)(BugCheckParameter2[5] + 28),
            *(_DWORD *)(BugCheckParameter2[5] + 24),
            v30,
            v31,
            WindowDpiLastNotify);
    v33 = BugCheckParameter2[5];
    v34 = v32;
    if ( (*(_BYTE *)(v33 + 26) & 0x40) != 0 )
    {
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(v33 + 96) - v32;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                          - GetDpiDependentMetric(
                              ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                              WindowDpiLastNotify);
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v32 + *(_DWORD *)(v33 + 88);
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                           + GetDpiDependentMetric(
                               ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                               WindowDpiLastNotify);
    }
    *(_DWORD *)(a4 + 8) = v34 + *(_DWORD *)(BugCheckParameter2[5] + 92);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                         + GetDpiDependentMetric(
                             ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 13,
                             WindowDpiLastNotify);
  }
  v35 = *(__int64 **)(BugCheckParameter2[2] + 608);
  if ( v35 )
    v36 = *v35;
  else
    v36 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v59, v36);
  if ( !*(_QWORD *)v59[0] || (**(_DWORD **)v59[0] & 2) == 0 || (**(_DWORD **)v59[0] & 4) == 0 )
    goto LABEL_28;
LABEL_62:
  if ( *(unsigned __int64 **)(*(_QWORD *)v59[0] + 8LL) != BugCheckParameter2 )
    goto LABEL_28;
  v44 = *(_DWORD *)(a4 + 40) | 1;
  *(_DWORD *)(a4 + 40) = v44;
  if ( !(_DWORD)v5 )
    goto LABEL_88;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 64LL) + 80LL) == (_DWORD)v5 - 1 )
  {
    v45 = v59[0];
    *(_DWORD *)(a4 + 40) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 64LL) + 24LL) )
      v8 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v59[0] + 64LL) + 24LL);
LABEL_67:
    *(_QWORD *)(a4 + 32) = v8;
  }
LABEL_28:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v60);
  return v10;
}
