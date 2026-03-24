/*
 * XREFs of GetCPD @ 0x1C0078AC0
 * Callers:
 *     NtUserGetCPD @ 0x1C0079210 (NtUserGetCPD.c)
 *     xxxSetWindowData @ 0x1C008A1A8 (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x1C00BC208 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x1C00FBF4C (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078D28 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *i; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  struct _KTHREAD *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  _QWORD *v25; // rcx
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // [rsp+20h] [rbp-30h] BYREF
  __int64 v39; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v38 = (__int64 *)gSmartObjNullRef;
  v39 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = &v39;
  if ( (a2 & 0x60) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 136);
    if ( v13 == *v38 )
      goto LABEL_12;
    if ( v38 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v38 + 2) )
    {
      if ( *((_BYTE *)v38 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v38);
    }
    goto LABEL_8;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( a1 == *v38 )
      goto LABEL_12;
    if ( v38 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v38 + 2) )
    {
      if ( *((_BYTE *)v38 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v38);
    }
    if ( !a1 )
      goto LABEL_9;
    v14 = *(__int64 **)(a1 + 128);
    goto LABEL_11;
  }
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 != *v38 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v38);
LABEL_8:
    if ( !v13 )
    {
LABEL_9:
      v38 = (__int64 *)gSmartObjNullRef;
      goto LABEL_12;
    }
    v14 = *(__int64 **)(v13 + 128);
LABEL_11:
    v38 = v14;
    ++*((_DWORD *)v14 + 2);
  }
LABEL_12:
  v15 = *v38;
  for ( i = *(__int64 **)(*v38 + 48); i; i = (__int64 *)i[7] )
  {
    v15 = i[5];
    if ( *(_QWORD *)(v15 + 16) == a3 && *(_WORD *)(v15 + 24) == a2 )
      break;
  }
  if ( i )
  {
    v17 = *i;
LABEL_18:
    v18 = (unsigned int)v17 | 0xFFFF0000LL;
    goto LABEL_19;
  }
  LOBYTE(v12) = 7;
  v27 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), v12);
  v28 = (__int64 *)v27;
  if ( v27 )
  {
    v29 = *v38;
    v40[0] = v27 + 56;
    v40[1] = *(_QWORD *)(v29 + 48);
    HMAssignmentLock(v40);
    v41[1] = v28;
    v41[0] = *v38 + 48;
    HMAssignmentLock(v41);
    *(_QWORD *)(v28[5] + 16) = a3;
    *(_WORD *)(v28[5] + 24) = a2;
    v17 = *v28;
    goto LABEL_18;
  }
  v18 = 0LL;
LABEL_19:
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v34 = PsGetCurrentProcess(v22, v21, v23),
        v35 = PsGetProcessSessionIdEx(v34),
        v37 = PsGetCurrentThreadProcess(v36),
        v35 == (unsigned int)PsGetProcessSessionIdEx(v37)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v24 )
      v20 = *v24;
  }
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v38);
  v25 = *(_QWORD **)(v20 + 1472);
  if ( v25 )
    *(_QWORD *)(v20 + 1472) = *v25;
  return v18;
}
