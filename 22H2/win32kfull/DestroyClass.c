/*
 * XREFs of DestroyClass @ 0x1C00EAB74
 * Callers:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00135D0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DereferenceClass @ 0x1C001F550 (DereferenceClass.c)
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 *     DestroyProcessesClasses @ 0x1C00EBC40 (DestroyProcessesClasses.c)
 *     _UnregisterClass @ 0x1C00F01B0 (_UnregisterClass.c)
 * Callees:
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0013FF0 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00991C4 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00EA67C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00EA8C8 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00EAEF8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     DestroyClassSmIcon @ 0x1C00EB5B0 (DestroyClassSmIcon.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // dx
  __int64 v5; // rdx
  unsigned __int16 v6; // dx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  struct _CALLPROCDATA *v9; // rdx
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdi
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // rax
  _QWORD *v19; // rax
  struct _CALLPROCDATA *v20; // rdx
  bool v21; // zf
  struct _CALLPROCDATA *v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  struct _CALLPROCDATA *v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  struct _CALLPROCDATA *v27; // [rsp+58h] [rbp+18h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    v4 = *(_WORD *)v2[1];
    if ( (v4 < gatomFirstPinned || v4 > gatomLastPinned) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1], v5);
    v6 = *((_WORD *)v2[1] + 1);
    if ( (v6 < gatomFirstPinned || v6 > gatomLastPinned || v6 >= 0xC000u) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1), v7);
    v8 = (unsigned __int64)v2[12];
    if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v8);
    v9 = v2[5];
    if ( v9 )
      DestroyCacheDC(0LL, *((_QWORD *)v9 + 1));
    v10 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
    v23 = (struct _CALLPROCDATA *)gSmartObjNullRef;
    v23 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
    v24 = *(_QWORD *)(v10 + 1512);
    *(_QWORD *)(v10 + 1512) = &v24;
    DestroyClassBrush((__int64)&v23);
    v12 = 0LL;
    v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v13 )
      v12 = *v13;
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v23);
    v14 = *(_QWORD **)(v12 + 1512);
    if ( v14 )
      *(_QWORD *)(v12 + 1512) = *v14;
  }
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v15 = *v16;
  v25 = (struct _CALLPROCDATA *)gSmartObjNullRef;
  v25 = v2[16];
  ++*((_DWORD *)v2[16] + 2);
  v26 = *(_QWORD *)(v15 + 1512);
  *(_QWORD *)(v15 + 1512) = &v26;
  DestroyClassSmIcon(&v25);
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v25);
  v19 = *(_QWORD **)(v17 + 1512);
  if ( v19 )
    *(_QWORD *)(v17 + 1512) = *v19;
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v27 = v2[4];
  v2[4] = 0LL;
  if ( v27 )
    RtlFreeHeap(*((PVOID *)v27 + 17), 0, v2[13]);
  else
    Win32FreePool(v2[13]);
  if ( v27 )
    RtlFreeHeap(*((PVOID *)v27 + 17), 0, v2[1]);
  else
    Win32FreePool(v2[1]);
  v20 = v2[16];
  if ( v20 )
  {
    *(_QWORD *)v20 = 0LL;
    v21 = *((_DWORD *)v20 + 2) == 0;
    *((_BYTE *)v20 + 12) = 1;
    if ( v21 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v20);
  }
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)*gpUserTypeIsolation, v2);
  return UnlockObjectAssignment(&v27);
}
