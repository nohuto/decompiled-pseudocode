/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0079960
 * Callers:
 *     DestroyClass @ 0x1C0078FA0 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0119680 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078D28 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  char v11; // bl
  __int64 **v12; // rax
  __int64 *v13; // rdi
  __int64 i; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 **v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h] BYREF

  v2 = *((_QWORD *)a1 + 43);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v11 = 1;
  v22 = (__int64 **)gSmartObjNullRef;
  if ( v2 )
  {
    v22 = *(__int64 ***)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v23 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v23;
  while ( 1 )
  {
    v12 = v22;
    if ( !*v22 )
      break;
    if ( *(_WORD *)(*v22)[1] == a2 || *(_WORD *)((*v22)[1] + 2) == a2 )
      goto LABEL_31;
    v13 = (__int64 *)**v22;
    if ( v13 != *v22 )
    {
      if ( v22 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v22 + 2) )
      {
        if ( *((_BYTE *)v22 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v22);
      }
      if ( v13 )
      {
        v22 = (__int64 **)v13[16];
        ++*((_DWORD *)v22 + 2);
      }
      else
      {
        v22 = (__int64 **)gSmartObjNullRef;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 44); ; i = **v22 )
  {
    if ( (__int64 *)i != *v12 )
    {
      if ( v22 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v22 + 2) )
      {
        if ( *((_BYTE *)v22 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v22);
      }
      if ( i )
      {
        v22 = *(__int64 ***)(i + 128);
        ++*((_DWORD *)v22 + 2);
      }
      else
      {
        v22 = (__int64 **)gSmartObjNullRef;
      }
    }
    if ( !*v22 )
      break;
    if ( *(_WORD *)(*v22)[1] == a2 || *(_WORD *)((*v22)[1] + 2) == a2 )
      goto LABEL_31;
    v12 = v22;
  }
  v11 = 0;
LABEL_31:
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v22);
  v16 = *(_QWORD **)(v15 + 1472);
  if ( v16 )
    *(_QWORD *)(v15 + 1472) = *v16;
  return v11;
}
