/*
 * XREFs of xxxMNCanClose @ 0x1C0061560
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0061054 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D7CFC (xxxDCETrackCaptionButton.c)
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     xxxCalcCaptionButton @ 0x1C0247748 (xxxCalcCaptionButton.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C00619AC (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C0061BA0 (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C008AA9C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v2; // rbx
  char v3; // si
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  struct _KTHREAD *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // r12d
  char v23; // r14
  struct _KTHREAD *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rsi
  struct _KTHREAD *v32; // r15
  _QWORD *v33; // r13
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rax
  int v39; // ecx
  _QWORD *v40; // r14
  int v41; // r15d
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rdi
  struct _KTHREAD *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *v49; // rax
  _QWORD *v50; // rcx
  __int64 result; // rax
  struct _KTHREAD *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 *v57; // rax
  _QWORD *v58; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v61; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rax
  int v64; // edi
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // edi
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // edi
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // edi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // edi
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 *v86; // [rsp+20h] [rbp-60h] BYREF
  __int64 v87; // [rsp+28h] [rbp-58h] BYREF
  __int64 v88; // [rsp+30h] [rbp-50h]
  __int64 v89; // [rsp+38h] [rbp-48h] BYREF
  __int64 v90; // [rsp+40h] [rbp-40h] BYREF
  __int64 v91; // [rsp+48h] [rbp-38h]
  __int64 *v92; // [rsp+50h] [rbp-30h]
  _QWORD v93[3]; // [rsp+58h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v61),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v86 = (__int64 *)gSmartObjNullRef;
  v87 = *(_QWORD *)(v4 + 1472);
  *(_QWORD *)(v4 + 1472) = &v87;
  v10 = *(_QWORD *)(a1 + 136);
  v88 = 0LL;
  v11 = *(__int64 **)(v10 + 8);
  if ( (*((_BYTE *)v11 + 9) & 2) != 0 )
    goto LABEL_53;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v11 = v86;
  v13 = SysMenuPtr;
  v88 = 0LL;
  if ( SysMenuPtr != *v86 )
  {
    v11 = v86;
    if ( v86 != (__int64 *)gSmartObjNullRef )
    {
      --*((_DWORD *)v86 + 2);
      v11 = v86;
      if ( !*((_DWORD *)v86 + 2) )
      {
        if ( *((_BYTE *)v86 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v86);
      }
    }
    if ( v13 )
    {
      v86 = *(__int64 **)(v13 + 152);
      ++*((_DWORD *)v86 + 2);
    }
    else
    {
      v86 = (__int64 *)gSmartObjNullRef;
    }
    if ( v88 )
      goto LABEL_11;
  }
  if ( *v86 )
  {
LABEL_11:
    v14 = 0LL;
    v15 = KeGetCurrentThread();
    v16 = *v86;
    if ( !(unsigned __int8)KeIsAttachedProcess(v11)
      || (v63 = PsGetCurrentProcess(v18, v17, v19),
          v64 = PsGetProcessSessionIdEx(v63),
          v66 = PsGetCurrentThreadProcess(v65),
          v64 == (unsigned int)PsGetProcessSessionIdEx(v66)) )
    {
      v20 = (__int64 *)PsGetThreadWin32Thread(v15);
      if ( v20 )
        v14 = *v20;
    }
    v92 = (__int64 *)gSmartObjNullRef;
    if ( v16 )
    {
      v92 = *(__int64 **)(v16 + 152);
      ++*(_DWORD *)(*(_QWORD *)(v16 + 152) + 8LL);
    }
    v93[0] = *(_QWORD *)(v14 + 1472);
    *(_QWORD *)(v14 + 1472) = v93;
    v93[1] = v88;
    v21 = *v92;
    if ( *v92 != *v86 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v86);
      if ( v21 )
      {
        v86 = *(__int64 **)(v21 + 152);
        ++*((_DWORD *)v86 + 2);
      }
      else
      {
        v86 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( v88 || *v86 )
    {
      v22 = 1;
      v23 = 0;
      v3 = 1;
      goto LABEL_20;
    }
    v22 = 1;
    v3 = 1;
  }
  else
  {
    v22 = 1;
  }
  v23 = 1;
LABEL_20:
  if ( (v3 & 1) != 0 )
  {
    v24 = KeGetCurrentThread();
    v25 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v11)
      || (v67 = PsGetCurrentProcess(v27, v26, v28),
          v68 = PsGetProcessSessionIdEx(v67),
          v70 = PsGetCurrentThreadProcess(v69),
          v68 == (unsigned int)PsGetProcessSessionIdEx(v70)) )
    {
      v29 = (__int64 *)PsGetThreadWin32Thread(v24);
      if ( v29 )
        v25 = *v29;
    }
    if ( v92 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v92 + 2) )
    {
      if ( *((_BYTE *)v92 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v92);
    }
    v30 = *(_QWORD **)(v25 + 1472);
    if ( v30 )
      *(_QWORD *)(v25 + 1472) = *v30;
  }
  if ( !v23 )
  {
    v31 = v88;
    if ( !v88 )
      v31 = *v86;
    v32 = KeGetCurrentThread();
    v33 = 0LL;
    v34 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v11)
      || (v71 = PsGetCurrentProcess(v36, v35, v37),
          v72 = PsGetProcessSessionIdEx(v71),
          v74 = PsGetCurrentThreadProcess(v73),
          v72 == (unsigned int)PsGetProcessSessionIdEx(v74)) )
    {
      v38 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v38 )
        v34 = *v38;
    }
    v89 = gSmartObjNullRef;
    v90 = *(_QWORD *)(v34 + 1472);
    *(_QWORD *)(v34 + 1472) = &v90;
    v91 = 0LL;
    if ( v31 && (v39 = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 44LL)) != 0 )
    {
      v40 = *(_QWORD **)(v31 + 88);
      v41 = 0;
      if ( v39 > 0 )
      {
        do
        {
          v42 = v40[2];
          v43 = *(_DWORD *)(*v40 + 8LL);
          if ( v42 )
          {
            if ( v43 == 61536 )
            {
              v91 = 0LL;
              SmartObjStackRefBase<tagMENU>::operator=(&v89);
              v42 = v40[2];
              v33 = v40;
            }
            v44 = MNLookUpItem(v42, 61536LL, 0LL, 0LL);
            if ( v44 )
              goto LABEL_41;
          }
          else if ( v43 == 61536 )
          {
            v44 = (__int64)v40;
            goto LABEL_41;
          }
          ++v41;
          v40 += 12;
        }
        while ( v41 < *(_DWORD *)(*(_QWORD *)(v31 + 40) + 44LL) );
      }
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v89) )
      {
        v52 = KeGetCurrentThread();
        v53 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v75)
          || (v76 = PsGetCurrentProcess(v55, v54, v56),
              v77 = PsGetProcessSessionIdEx(v76),
              v79 = PsGetCurrentThreadProcess(v78),
              v77 == (unsigned int)PsGetProcessSessionIdEx(v79)) )
        {
          v57 = (__int64 *)PsGetThreadWin32Thread(v52);
          if ( v57 )
            v53 = *v57;
        }
        if ( v89 != gSmartObjNullRef && !--*(_DWORD *)(v89 + 8) )
        {
          if ( *(_BYTE *)(v89 + 12) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v89);
        }
        v58 = *(_QWORD **)(v53 + 1472);
        if ( v58 )
          *(_QWORD *)(v53 + 1472) = *v58;
      }
      else
      {
        v44 = (__int64)v33;
LABEL_41:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v89);
        if ( v44 )
        {
LABEL_42:
          v11 = (__int64 *)*(unsigned int *)(*(_QWORD *)v44 + 4LL);
          if ( ((unsigned __int8)v11 & 3) == 0 )
            goto LABEL_43;
          goto LABEL_53;
        }
      }
    }
    else
    {
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v89);
    }
    v80 = v88;
    if ( !v88 )
      v80 = *v86;
    v44 = MNLookUpItem(v80, 32864LL, 0LL, 0LL);
    if ( v44 )
      goto LABEL_42;
    v81 = v88;
    if ( !v88 )
      v81 = *v86;
    v44 = MNLookUpItem(v81, 49264LL, 0LL, 0LL);
    if ( v44 )
      goto LABEL_42;
  }
LABEL_53:
  v22 = 0;
LABEL_43:
  v45 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v11)
    || (v82 = PsGetCurrentProcess(v47, v46, v48),
        v83 = PsGetProcessSessionIdEx(v82),
        v85 = PsGetCurrentThreadProcess(v84),
        v83 == (unsigned int)PsGetProcessSessionIdEx(v85)) )
  {
    v49 = (__int64 *)PsGetThreadWin32Thread(v45);
    if ( v49 )
      v2 = *v49;
  }
  if ( v86 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v86 + 2) )
  {
    if ( *((_BYTE *)v86 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v86);
  }
  v50 = *(_QWORD **)(v2 + 1472);
  result = v22;
  if ( v50 )
    *(_QWORD *)(v2 + 1472) = *v50;
  return result;
}
