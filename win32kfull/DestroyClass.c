/*
 * XREFs of DestroyClass @ 0x1C0033D18
 * Callers:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0012890 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C0031B80 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C0033D18 (DestroyClass.c)
 *     _UnregisterClass @ 0x1C0040D80 (_UnregisterClass.c)
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     DereferenceClass @ 0x1C010AA40 (DereferenceClass.c)
 * Callees:
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C00132A0 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0033820 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0033A6C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     DestroyClass @ 0x1C0033D18 (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C003409C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     DestroyClassSmIcon @ 0x1C00343D0 (DestroyClassSmIcon.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00CF5C8 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // dx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // dx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  struct _CALLPROCDATA *v13; // rdx
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rdi
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 *v22; // rax
  _QWORD *v23; // rax
  struct _CALLPROCDATA *v24; // rdx
  bool v25; // zf
  struct _CALLPROCDATA *v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h] BYREF
  struct _CALLPROCDATA *v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+38h] [rbp-8h] BYREF
  struct _CALLPROCDATA *v31; // [rsp+58h] [rbp+18h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    v4 = *(_WORD *)v2[1];
    if ( (v4 < gatomFirstPinned || v4 > gatomLastPinned) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1], v5, v6, v7);
    v8 = *((_WORD *)v2[1] + 1);
    if ( (v8 < gatomFirstPinned || v8 > gatomLastPinned || v8 >= 0xC000u) && !IsClassAtomRegistered(a1, v8) )
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1), v9, v10, v11);
    v12 = (unsigned __int64)v2[12];
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v12);
    v13 = v2[5];
    if ( v13 )
      DestroyCacheDC(0LL, *((_QWORD *)v13 + 1));
    v14 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
    v27 = (struct _CALLPROCDATA *)gSmartObjNullRef;
    v27 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
    v28 = *(_QWORD *)(v14 + 1512);
    *(_QWORD *)(v14 + 1512) = &v28;
    DestroyClassBrush((__int64)&v27);
    v16 = 0LL;
    v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v17 )
      v16 = *v17;
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v27);
    v18 = *(_QWORD **)(v16 + 1512);
    if ( v18 )
      *(_QWORD *)(v16 + 1512) = *v18;
  }
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
    v19 = *v20;
  v29 = (struct _CALLPROCDATA *)gSmartObjNullRef;
  v29 = v2[16];
  ++*((_DWORD *)v2[16] + 2);
  v30 = *(_QWORD *)(v19 + 1512);
  *(_QWORD *)(v19 + 1512) = &v30;
  DestroyClassSmIcon(&v29);
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v29);
  v23 = *(_QWORD **)(v21 + 1512);
  if ( v23 )
    *(_QWORD *)(v21 + 1512) = *v23;
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v31 = v2[4];
  v2[4] = 0LL;
  if ( v31 )
    RtlFreeHeap(*((PVOID *)v31 + 16), 0, v2[13]);
  else
    Win32FreePool(v2[13]);
  if ( v31 )
    RtlFreeHeap(*((PVOID *)v31 + 16), 0, v2[1]);
  else
    Win32FreePool(v2[1]);
  v24 = v2[16];
  if ( v24 )
  {
    *(_QWORD *)v24 = 0LL;
    v25 = *((_DWORD *)v24 + 2) == 0;
    *((_BYTE *)v24 + 12) = 1;
    if ( v25 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v24);
  }
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free(*gpUserTypeIsolation, v2);
  return UnlockObjectAssignment(&v31);
}
