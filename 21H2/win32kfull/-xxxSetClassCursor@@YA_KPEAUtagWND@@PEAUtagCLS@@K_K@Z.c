/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498
 * Callers:
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00F56D8 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C0239060 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  struct _CALLPROCDATA **v21; // rbx
  __int64 v22; // rax
  struct _CALLPROCDATA **v23; // rax
  struct _CALLPROCDATA **v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _CALLPROCDATA **v28; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v30; // rbx
  __int64 v31; // rax
  _QWORD v33[2]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v35; // [rsp+48h] [rbp-39h] BYREF
  __int64 v36; // [rsp+58h] [rbp-29h]
  _QWORD v37[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v39; // [rsp+88h] [rbp+7h] BYREF
  __int64 v40; // [rsp+98h] [rbp+17h]
  __int128 v41; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v42; // [rsp+B0h] [rbp+2Fh]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v34, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v33, 0LL);
  v36 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  if ( a4 )
  {
    v8 = HMValidateHandle(a4, 3u);
    if ( !v8 )
    {
      if ( a3 == -14 || (v12 = 1402LL, a3 == -34) )
        v12 = 1414LL;
      UserSetLastError(v12, v11);
    }
  }
  v13 = *((_QWORD *)a2 + 7);
  if ( v13 != *(_QWORD *)v34[0] )
  {
    if ( v34[0] != gSmartObjNullRef && !--*(_DWORD *)(v34[0] + 8LL) )
    {
      if ( *(_BYTE *)(v34[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v34[0]);
    }
    if ( v13 )
    {
      v34[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v34[0] + 8LL);
    }
    else
    {
      v34[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v34[0], &v35) )
  {
    UserSetLastError(5LL, v14);
    goto LABEL_51;
  }
  ThreadLock(v8, (__int64 *)&v41);
  if ( a3 == -34 || a3 == -14 )
  {
    v17 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_22:
    v7 = v17;
    if ( v17 )
      v7 = (_QWORD *)*v17;
    goto LABEL_24;
  }
  if ( a3 == -12 )
  {
    v37[1] = v8;
    v37[0] = *(_QWORD *)v34[0] + 88LL;
    v17 = (_QWORD *)HMAssignmentLock(v37, 0LL);
    goto LABEL_22;
  }
LABEL_24:
  v18 = *(_QWORD *)v34[0];
  v19 = *(_QWORD *)(*(_QWORD *)v34[0] + 64LL);
LABEL_42:
  if ( v19 != *(_QWORD *)v33[0] )
  {
    if ( v33[0] != gSmartObjNullRef && !--*(_DWORD *)(v33[0] + 8LL) )
    {
      if ( *(_BYTE *)(v33[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v33[0]);
    }
    if ( v19 )
    {
      v33[0] = *(_QWORD *)(v19 + 128);
      ++*(_DWORD *)(v33[0] + 8LL);
    }
    else
    {
      v33[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v33[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v33[0], &v39) )
      {
        UserSetLastError(5LL, v20);
        ThreadUnlock1(v26, v25, v27);
        v28 = *(struct _CALLPROCDATA ***)v34[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v35;
        ClassUnlockWorker(v28);
        goto LABEL_51;
      }
      xxxSetClassIcon(a1);
      v21 = *(struct _CALLPROCDATA ***)v33[0];
      v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v22 + 16) = v39;
      v23 = ClassUnlockWorker(v21);
      v18 = v33[0];
      v24 = v23;
      if ( v23 != *(struct _CALLPROCDATA ***)v33[0] )
      {
        v18 = v33[0];
        if ( v33[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v33[0] + 8LL);
          v18 = v33[0];
          if ( !*(_DWORD *)(v33[0] + 8LL) )
          {
            if ( *(_BYTE *)(v33[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v33[0]);
          }
        }
        if ( v24 )
        {
          v33[0] = v24[16];
          ++*(_DWORD *)(v33[0] + 8LL);
        }
        else
        {
          v33[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      v38[1] = v8;
      v38[0] = *(_QWORD *)v33[0] + 88LL;
      HMAssignmentLock(v38, 0LL);
    }
    if ( *(_QWORD *)v33[0] )
    {
      v18 = *(_QWORD *)v33[0];
      v19 = **(_QWORD **)v33[0];
      goto LABEL_42;
    }
  }
  ThreadUnlock1(v18, v15, v16);
  v30 = *(struct _CALLPROCDATA ***)v34[0];
  v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v31 + 16) = v35;
  ClassUnlockWorker(v30);
  v6 = v7;
LABEL_51:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v33);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v34);
  return v6;
}
