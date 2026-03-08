/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624
 * Callers:
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 * Callees:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0012890 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ClassLock @ 0x1C00128B8 (ClassLock.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSetClassIcon @ 0x1C0223360 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // r15
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct tagCLS *v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rcx
  struct tagCLS *v22; // rbx
  __int64 v23; // rax
  struct tagCLS *v24; // rax
  struct tagCLS *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct tagCLS *v29; // rbx
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v32[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v33; // [rsp+48h] [rbp-39h] BYREF
  __int64 v34; // [rsp+58h] [rbp-29h]
  _QWORD v35[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v37; // [rsp+88h] [rbp+7h] BYREF
  __int64 v38; // [rsp+98h] [rbp+17h]
  __int128 v39; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v40; // [rsp+B0h] [rbp+2Fh]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v32, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v31, 0LL);
  v34 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  if ( a4 )
  {
    LOBYTE(v11) = 3;
    v8 = HMValidateHandle(a4, v11);
    if ( !v8 )
    {
      if ( a3 == -14 || (v21 = 1402LL, a3 == -34) )
        v21 = 1414LL;
      UserSetLastError(v21);
    }
  }
  v12 = *((_QWORD *)a2 + 7);
  if ( v12 != *(_QWORD *)v32[0] )
  {
    if ( v32[0] != gSmartObjNullRef && !--*(_DWORD *)(v32[0] + 8LL) )
    {
      if ( *(_BYTE *)(v32[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v32[0]);
    }
    if ( v12 )
    {
      v32[0] = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v32[0] + 8LL);
    }
    else
    {
      v32[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v32[0], &v33) )
  {
    UserSetLastError(5LL);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
    return 0LL;
  }
  ThreadLock(v8, &v39);
  if ( a3 == -34 || a3 == -14 )
  {
    v15 = (_QWORD *)xxxSetClassIcon(a1);
  }
  else
  {
    if ( a3 != -12 )
      goto LABEL_14;
    v35[1] = v8;
    v35[0] = *(_QWORD *)v32[0] + 88LL;
    v15 = (_QWORD *)HMAssignmentLock(v35, 0LL);
  }
  v7 = v15;
  if ( v15 )
    v7 = (_QWORD *)*v15;
LABEL_14:
  v16 = *(_QWORD *)v32[0];
  v17 = *(_QWORD *)(*(_QWORD *)v32[0] + 64LL);
LABEL_15:
  if ( v17 != *(_QWORD *)v31[0] )
  {
    if ( v31[0] != gSmartObjNullRef && !--*(_DWORD *)(v31[0] + 8LL) )
    {
      if ( *(_BYTE *)(v31[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v31[0]);
    }
    if ( v17 )
    {
      v31[0] = *(_QWORD *)(v17 + 128);
      ++*(_DWORD *)(v31[0] + 8LL);
    }
    else
    {
      v31[0] = gSmartObjNullRef;
    }
  }
  while ( 1 )
  {
    if ( !*(_QWORD *)v31[0] )
    {
      ThreadUnlock1(v16, v13, v14);
      v18 = *(struct tagCLS **)v32[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v33;
      ClassUnlockWorker(v18);
      v6 = v7;
      goto LABEL_22;
    }
    if ( a3 == -34 || a3 == -14 )
      break;
    if ( a3 == -12 )
    {
      v36[1] = v8;
      v36[0] = *(_QWORD *)v31[0] + 88LL;
      HMAssignmentLock(v36, 0LL);
    }
LABEL_49:
    if ( *(_QWORD *)v31[0] )
    {
      v16 = *(_QWORD *)v31[0];
      v17 = **(_QWORD **)v31[0];
      goto LABEL_15;
    }
  }
  if ( (unsigned int)ClassLock(*(_QWORD *)v31[0], &v37) )
  {
    xxxSetClassIcon(a1);
    v22 = *(struct tagCLS **)v31[0];
    v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v23 + 16) = v37;
    v24 = ClassUnlockWorker(v22);
    v16 = v31[0];
    v25 = v24;
    if ( v24 != *(struct tagCLS **)v31[0] )
    {
      v16 = v31[0];
      if ( v31[0] != gSmartObjNullRef )
      {
        --*(_DWORD *)(v31[0] + 8LL);
        v16 = v31[0];
        if ( !*(_DWORD *)(v31[0] + 8LL) )
        {
          if ( *(_BYTE *)(v31[0] + 12LL) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v31[0]);
        }
      }
      if ( v25 )
      {
        v31[0] = *((_QWORD *)v25 + 16);
        ++*(_DWORD *)(v31[0] + 8LL);
      }
      else
      {
        v31[0] = gSmartObjNullRef;
      }
    }
    goto LABEL_49;
  }
  UserSetLastError(5LL);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(struct tagCLS **)v32[0];
  v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v30 + 16) = v33;
  ClassUnlockWorker(v29);
LABEL_22:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
  return v6;
}
