/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00FC5F4
 * Callers:
 *     DestroyClass @ 0x1C0079040 (DestroyClass.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall DestroyClassBrush(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  _QWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 *i; // rbx
  __int64 **v17; // rax
  __int64 j; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 **v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = CurrentProcessWin32Process;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v23 = (__int64 **)gSmartObjNullRef;
  v24 = *(_QWORD *)(v4 + 1472);
  *(_QWORD *)(v4 + 1472) = &v24;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v14 = 0;
    v15 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v15 + gpsi) )
    {
      ++v14;
      v15 += 8LL;
      if ( v14 >= 0x1F )
      {
        for ( i = *(__int64 **)(v5 + 352); ; i = (__int64 *)**v23 )
        {
          if ( i != *v23 )
          {
            if ( v23 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v23 + 2) )
            {
              if ( *((_BYTE *)v23 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v23);
            }
            if ( i )
            {
              v23 = (__int64 **)i[16];
              ++*((_DWORD *)v23 + 2);
            }
            else
            {
              v23 = (__int64 **)gSmartObjNullRef;
            }
          }
          v17 = v23;
          if ( !*v23 )
            break;
          if ( *v23 != **(__int64 ***)a1
            && *(_QWORD *)((*v23)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            goto LABEL_5;
          }
        }
        for ( j = *(_QWORD *)(v5 + 344); ; j = **v23 )
        {
          if ( (__int64 *)j != *v17 )
          {
            if ( v23 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v23 + 2) )
            {
              if ( *((_BYTE *)v23 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v23);
            }
            if ( j )
            {
              v23 = *(__int64 ***)(j + 128);
              ++*((_DWORD *)v23 + 2);
            }
            else
            {
              v23 = (__int64 **)gSmartObjNullRef;
            }
          }
          if ( !*v23 )
            break;
          if ( *v23 != **(__int64 ***)a1
            && *(_QWORD *)((*v23)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            goto LABEL_5;
          }
          v17 = v23;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        break;
      }
    }
  }
LABEL_5:
  v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v23);
  v13 = *(_QWORD **)(v11 + 1472);
  if ( v13 )
    *(_QWORD *)(v11 + 1472) = *v13;
  return result;
}
