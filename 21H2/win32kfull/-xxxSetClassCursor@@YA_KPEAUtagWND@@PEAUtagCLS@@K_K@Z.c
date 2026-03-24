/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8E2C
 * Callers:
 *     xxxSetClassData @ 0x1C00FC29C (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF7D0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C0101110 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C010F6F0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C023DCF8 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, unsigned __int64 a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _CALLPROCDATA **v22; // rbx
  __int64 v23; // rax
  struct _CALLPROCDATA **v24; // rax
  struct _CALLPROCDATA **v25; // rbx
  __int64 v26; // rcx
  struct _CALLPROCDATA **v27; // rbx
  __int64 v28; // rax
  struct _CALLPROCDATA **v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rcx
  __int64 v36[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v37[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v38; // [rsp+48h] [rbp-29h] BYREF
  __int64 v39; // [rsp+58h] [rbp-19h]
  __int128 v40; // [rsp+60h] [rbp-11h] BYREF
  __int64 v41; // [rsp+70h] [rbp-1h]
  _QWORD v42[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v43[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v44; // [rsp+98h] [rbp+27h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+37h]

  v8 = 0LL;
  v9 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v37, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v36, 0LL);
  v41 = 0LL;
  v45 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  if ( a4 )
  {
    v9 = HMValidateHandle(a4, 3u);
    if ( !v9 )
    {
      if ( a3 == -14 || (v12 = 1402LL, a3 == -34) )
        v12 = 1414LL;
      UserSetLastError(v12, v10, v11);
    }
  }
  v13 = *((_QWORD *)a2 + 7);
  if ( v13 != *(_QWORD *)v37[0] )
  {
    if ( v37[0] != gSmartObjNullRef && !--*(_DWORD *)(v37[0] + 8) )
    {
      if ( *(_BYTE *)(v37[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v37[0]);
    }
    if ( v13 )
    {
      v37[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v37[0] + 8);
    }
    else
    {
      v37[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v37[0], &v40) )
  {
    UserSetLastError(5LL, v14, v15);
LABEL_52:
    v8 = 0LL;
    goto LABEL_54;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
  *((_QWORD *)&v38 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  if ( a3 == -34 || a3 == -14 )
  {
    v17 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_24:
    v8 = v17;
    if ( v17 )
      v8 = (_QWORD *)*v17;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    v42[1] = v9;
    v42[0] = *(_QWORD *)v37[0] + 88LL;
    v17 = (_QWORD *)HMAssignmentLock(v42);
    goto LABEL_24;
  }
LABEL_26:
  v18 = *(_QWORD *)v37[0];
  v19 = *(_QWORD *)(*(_QWORD *)v37[0] + 64LL);
LABEL_44:
  if ( v19 != *(_QWORD *)v36[0] )
  {
    if ( v36[0] != gSmartObjNullRef && !--*(_DWORD *)(v36[0] + 8) )
    {
      if ( *(_BYTE *)(v36[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v36[0]);
    }
    if ( v19 )
    {
      v36[0] = *(_QWORD *)(v19 + 128);
      ++*(_DWORD *)(v36[0] + 8);
    }
    else
    {
      v36[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v36[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v36[0], &v44) )
      {
        UserSetLastError(5LL, v20, v21);
        ThreadUnlock1(v26);
        v27 = *(struct _CALLPROCDATA ***)v37[0];
        v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(v28 + 16) = v40;
        ClassUnlockWorker(v27);
        goto LABEL_52;
      }
      xxxSetClassIcon(a1);
      v22 = *(struct _CALLPROCDATA ***)v36[0];
      v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v23 + 16) = v44;
      v24 = ClassUnlockWorker(v22);
      v18 = v36[0];
      v25 = v24;
      if ( v24 != *(struct _CALLPROCDATA ***)v36[0] )
      {
        v18 = v36[0];
        if ( v36[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v36[0] + 8);
          v18 = v36[0];
          if ( !*(_DWORD *)(v36[0] + 8) )
          {
            if ( *(_BYTE *)(v36[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v36[0]);
          }
        }
        if ( v25 )
        {
          v36[0] = (__int64)v25[16];
          ++*(_DWORD *)(v36[0] + 8);
        }
        else
        {
          v36[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      v43[1] = v9;
      v43[0] = *(_QWORD *)v36[0] + 88LL;
      HMAssignmentLock(v43);
    }
    if ( *(_QWORD *)v36[0] )
    {
      v18 = *(_QWORD *)v36[0];
      v19 = **(_QWORD **)v36[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v18);
  v29 = *(struct _CALLPROCDATA ***)v37[0];
  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v30 + 16) = v40;
  ClassUnlockWorker(v29);
LABEL_54:
  v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v36);
  v32 = *(_QWORD **)(v31 + 1472);
  if ( v32 )
    *(_QWORD *)(v31 + 1472) = *v32;
  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v37);
  v34 = *(_QWORD **)(v33 + 1472);
  if ( v34 )
    *(_QWORD *)(v33 + 1472) = *v34;
  return v8;
}
