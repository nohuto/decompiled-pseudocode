/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C008AAD8
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00FBBD0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C004C6B8 (GetWindowDpiLastNotify.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C0061D98 (_HasCaptionIcon.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C008AA9C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxGetSysMenu @ 0x1C00DB164 (xxxGetSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00DCADC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GetWindowBordersForDpi @ 0x1C00E11A0 (GetWindowBordersForDpi.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  struct _KTHREAD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r15d
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  unsigned int WindowDpiLastNotify; // ebx
  struct _KTHREAD *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  struct _KTHREAD *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rax
  _QWORD *v41; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // r9d
  _QWORD *v46; // rax
  int v47; // r8d
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rax
  int v58; // r8d
  int v59; // r9d
  int WindowBordersForDpi; // eax
  __int64 v61; // rdx
  int v62; // r12d
  __int64 *v63; // rcx
  __int64 v64; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v67; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  int v77; // ecx
  int v78; // edx
  int v79; // edx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  int v89; // ecx
  int v90; // edx
  int v91; // edx
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // ebx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // ebx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // [rsp+50h] [rbp-30h] BYREF
  __int64 v105; // [rsp+58h] [rbp-28h] BYREF
  __int64 v106; // [rsp+60h] [rbp-20h] BYREF
  __int64 v107; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v108; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v67),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v106 = gSmartObjNullRef;
  v107 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v107;
  v15 = 0LL;
  v108 = 0LL;
  v16 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v69 = PsGetCurrentProcess(v18, v17, v19),
        v70 = PsGetProcessSessionIdEx(v69),
        v72 = PsGetCurrentThreadProcess(v71),
        v70 == (unsigned int)PsGetProcessSessionIdEx(v72)) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v15 = *v20;
  }
  v104 = gSmartObjNullRef;
  v105 = *(_QWORD *)(v15 + 1472);
  *(_QWORD *)(v15 + 1472) = &v105;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v21, v22);
    goto LABEL_15;
  }
  v23 = 1;
  *(_OWORD *)(a4 + 4) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v24 = *(_QWORD *)(a1 + 40);
  v25 = (_DWORD *)(*(_DWORD *)(v24 + 288) & 0xF);
  if ( (_DWORD)v25 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !(_DWORD)v25
         && (v55 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (v25 = **(_DWORD ***)(v55 + 8), (v25[16] & 1) != 0) )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v25 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 424LL);
    WindowDpiLastNotify = *((unsigned __int16 *)v25 + 142);
  }
  if ( a2 != -3 )
  {
    if ( a2 == -1 )
    {
      if ( (*(_BYTE *)(v24 + 30) & 8) != 0 )
      {
        xxxGetSysMenu((struct tagWND *)a1);
        v108 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(&v106);
        if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v106, v56) )
        {
          if ( (int)v6 >= 0 )
          {
            v25 = *(_DWORD **)v106;
            if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v106 + 40LL) + 44LL) )
            {
              v57 = v108;
              if ( !v108 )
                v57 = *(_QWORD **)v106;
              *(_QWORD *)(a4 + 24) = *v57;
              if ( (unsigned int)HasCaptionIcon(a1) )
              {
                WindowBordersForDpi = GetWindowBordersForDpi(
                                        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL),
                                        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL),
                                        v58,
                                        v59,
                                        WindowDpiLastNotify);
                v61 = *(_QWORD *)(a1 + 40);
                v62 = WindowBordersForDpi;
                if ( (*(_BYTE *)(v61 + 26) & 0x40) != 0 )
                {
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(v61 + 96) - WindowBordersForDpi;
                  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                                      - GetDpiDependentMetric(
                                          ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                          WindowDpiLastNotify);
                }
                else
                {
                  *(_DWORD *)(a4 + 4) = WindowBordersForDpi + *(_DWORD *)(v61 + 88);
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                                       + GetDpiDependentMetric(
                                           ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                           WindowDpiLastNotify);
                }
                *(_DWORD *)(a4 + 8) = v62 + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL);
                *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                                     + GetDpiDependentMetric(
                                         ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 13,
                                         WindowDpiLastNotify);
              }
              v63 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 608LL);
              if ( v63 )
                v64 = *v63;
              else
                v64 = 0LL;
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v104, v64);
              if ( *(_QWORD *)v104 )
              {
                v25 = *(_DWORD **)v104;
                if ( (**(_DWORD **)v104 & 2) != 0 )
                {
                  v25 = *(_DWORD **)v104;
                  if ( (**(_DWORD **)v104 & 4) != 0 )
                    goto LABEL_80;
                }
              }
              goto LABEL_16;
            }
          }
        }
      }
    }
    else if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v83 = xxxSendTransformableMessageTimeout(a1, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      ValidateHmenu(v83);
      v108 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v106);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v106, v84) )
      {
        if ( (int)v6 >= 0 )
        {
          v25 = *(_DWORD **)v106;
          if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v106 + 40LL) + 44LL) )
          {
            *(_QWORD *)(a4 + 24) = v83;
            if ( (_DWORD)v6 )
            {
              v85 = *(_QWORD *)(a1 + 40);
              v86 = 96 * v6;
              v87 = *(_QWORD *)(*(_QWORD *)v106 + 88LL);
              v88 = *(_QWORD *)(96 * v6 + v87 - 96);
              if ( (*(_BYTE *)(v85 + 26) & 0x40) != 0 )
              {
                v89 = *(_DWORD *)(v85 + 112) - *(_DWORD *)(v88 + 64);
                *(_DWORD *)(a4 + 12) = v89;
                *(_DWORD *)(a4 + 4) = v89 - *(_DWORD *)(*(_QWORD *)(v86 + v87 - 96) + 72LL);
              }
              else
              {
                v90 = *(_DWORD *)(v88 + 64) + *(_DWORD *)(v85 + 104);
                *(_DWORD *)(a4 + 4) = v90;
                *(_DWORD *)(a4 + 12) = v90 + *(_DWORD *)(*(_QWORD *)(v86 + v87 - 96) + 72LL);
              }
              v91 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) + *(_DWORD *)(*(_QWORD *)(v86 + v87 - 96) + 68LL);
              *(_DWORD *)(a4 + 8) = v91;
              *(_DWORD *)(a4 + 16) = v91 + *(_DWORD *)(*(_QWORD *)(v86 + v87 - 96) + 76LL);
            }
            else
            {
              *(_OWORD *)(a4 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 104LL);
            }
            v92 = safe_cast_fnid_to_PMENUWND(a1);
            if ( v92 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v104, *(_QWORD *)(v92 + 8));
              if ( *(_QWORD *)v104 )
              {
                v25 = *(_DWORD **)v104;
                v93 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
                v94 = v93 ? *v93 : 0LL;
                if ( *((_QWORD *)v25 + 8) == v94 )
                {
                  v80 = *(_DWORD *)(a4 + 40) | 1;
                  *(_DWORD *)(a4 + 40) = v80;
                  if ( (_DWORD)v6 )
                  {
                    v25 = *(_DWORD **)v104;
                    if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)v104 + 80LL) + 1 )
                      goto LABEL_16;
                    v95 = v104;
                    *(_DWORD *)(a4 + 40) |= 2u;
                    v25 = *(_DWORD **)v95;
                    if ( *(_QWORD *)(*(_QWORD *)v95 + 24LL) )
                    {
                      v25 = *(_DWORD **)v104;
                      v82 = **(_QWORD **)(*(_QWORD *)v104 + 24LL);
                      goto LABEL_111;
                    }
LABEL_110:
                    v82 = 0LL;
                    goto LABEL_111;
                  }
LABEL_109:
                  *(_DWORD *)(a4 + 40) = v80 | 2;
                  goto LABEL_16;
                }
              }
            }
            goto LABEL_16;
          }
        }
      }
    }
LABEL_15:
    v23 = 0;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 )
    goto LABEL_15;
  if ( !*(_QWORD *)(a1 + 168) )
    goto LABEL_15;
  v108 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v106);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v106, v43) )
    goto LABEL_15;
  if ( (int)v6 < 0 )
    goto LABEL_15;
  v25 = *(_DWORD **)v106;
  if ( (unsigned int)v6 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v106 + 40LL) + 44LL) )
    goto LABEL_15;
  v46 = v108;
  if ( !v108 )
    v46 = *(_QWORD **)v106;
  *(_QWORD *)(a4 + 24) = *v46;
  if ( *(_DWORD *)(*(_QWORD *)v106 + 64LL) && *(_DWORD *)(*(_QWORD *)v106 + 68LL) )
  {
    if ( (_DWORD)v6 )
    {
      v73 = *(_QWORD *)(a1 + 40);
      v74 = 96 * v6;
      v75 = *(_QWORD *)(*(_QWORD *)v106 + 88LL);
      v76 = *(_QWORD *)(96 * v6 + v75 - 96);
      if ( (*(_BYTE *)(v73 + 26) & 0x40) != 0 )
      {
        v77 = *(_DWORD *)(v73 + 96) - *(_DWORD *)(v76 + 64);
        *(_DWORD *)(a4 + 12) = v77;
        *(_DWORD *)(a4 + 4) = v77 - *(_DWORD *)(*(_QWORD *)(v74 + v75 - 96) + 72LL);
      }
      else
      {
        v78 = *(_DWORD *)(v76 + 64) + *(_DWORD *)(v73 + 88);
        *(_DWORD *)(a4 + 4) = v78;
        *(_DWORD *)(a4 + 12) = v78 + *(_DWORD *)(*(_QWORD *)(v74 + v75 - 96) + 72LL);
      }
      v79 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL) + *(_DWORD *)(*(_QWORD *)(v74 + v75 - 96) + 68LL);
      *(_DWORD *)(a4 + 8) = v79;
      v52 = v79 + *(_DWORD *)(*(_QWORD *)(v74 + v75 - 96) + 76LL);
    }
    else
    {
      v47 = GetWindowBordersForDpi(
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL),
              v44,
              v45,
              WindowDpiLastNotify);
      v48 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v48 + 26) & 0x40) != 0 )
      {
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(v48 + 96) - v47;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v106 + 64LL);
      }
      else
      {
        v49 = *(_DWORD *)(v48 + 88);
        v50 = v106;
        *(_DWORD *)(a4 + 4) = v47 + v49;
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v50 + 64LL);
      }
      *(_DWORD *)(a4 + 8) = v47 + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL);
      v51 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v51 + 16) & 8) != 0 )
        *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v51 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
      v52 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v106 + 68LL);
    }
    *(_DWORD *)(a4 + 16) = v52;
  }
  v53 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 608LL);
  if ( v53 )
    v54 = *v53;
  else
    v54 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v104, v54);
  if ( *(_QWORD *)v104 )
  {
    v25 = *(_DWORD **)v104;
    if ( (**(_DWORD **)v104 & 2) != 0 )
    {
      v25 = *(_DWORD **)v104;
      if ( (**(_DWORD **)v104 & 4) == 0 )
      {
LABEL_80:
        v25 = *(_DWORD **)v104;
        if ( *(_QWORD *)(*(_QWORD *)v104 + 8LL) != a1 )
          goto LABEL_16;
        v80 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v80;
        if ( (_DWORD)v6 )
        {
          v25 = *(_DWORD **)v104;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v104 + 64LL) + 80LL) != (_DWORD)v6 - 1 )
            goto LABEL_16;
          v81 = v104;
          *(_DWORD *)(a4 + 40) |= 2u;
          v25 = *(_DWORD **)v81;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 64LL) + 24LL) )
          {
            v25 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v104 + 64LL) + 24LL);
            v82 = *(_QWORD *)v25;
LABEL_111:
            *(_QWORD *)(a4 + 32) = v82;
            goto LABEL_16;
          }
          goto LABEL_110;
        }
        goto LABEL_109;
      }
    }
  }
LABEL_16:
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v96 = PsGetCurrentProcess(v30, v29, v31),
        v97 = PsGetProcessSessionIdEx(v96),
        v99 = PsGetCurrentThreadProcess(v98),
        v97 == (unsigned int)PsGetProcessSessionIdEx(v99)) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v32 )
      v28 = *v32;
  }
  if ( v104 != gSmartObjNullRef && !--*(_DWORD *)(v104 + 8) )
  {
    if ( *(_BYTE *)(v104 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v104);
  }
  v34 = *(_QWORD **)(v28 + 1472);
  if ( v34 )
    *(_QWORD *)(v28 + 1472) = *v34;
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v33)
    || (v100 = PsGetCurrentProcess(v38, v37, v39),
        v101 = PsGetProcessSessionIdEx(v100),
        v103 = PsGetCurrentThreadProcess(v102),
        v101 == (unsigned int)PsGetProcessSessionIdEx(v103)) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v40 )
      v36 = *v40;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v106);
  v41 = *(_QWORD **)(v36 + 1472);
  if ( v41 )
    *(_QWORD *)(v36 + 1472) = *v41;
  return v23;
}
