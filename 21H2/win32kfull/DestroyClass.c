/*
 * XREFs of DestroyClass @ 0x1C0079040
 * Callers:
 *     _UnregisterClass @ 0x1C0069828 (_UnregisterClass.c)
 *     DestroyClass @ 0x1C0079040 (DestroyClass.c)
 *     DereferenceClass @ 0x1C0079C50 (DereferenceClass.c)
 *     FinalUserInit @ 0x1C00E5318 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C010F6F0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C0116080 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C0227D20 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0227E50 (_WOWModuleUnload.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     DestroyClass @ 0x1C0079040 (DestroyClass.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0079288 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0079A00 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00FC5F4 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF7D0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010BFBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C010E6D0 (DestroyClassSmIcon.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0131D74 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // cx
  unsigned __int64 v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  struct tagDESKTOP *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || v5 >= 0xC000u) && !IsClassAtomRegistered(a1, v5) )
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    v6 = (unsigned __int64)v2[12];
    if ( (v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    SmartObjStackRefBase<tagCLS>::Init(v13, v2);
    DestroyClassBrush(v13);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v13);
    v9 = *(_QWORD **)(ThreadWin32Thread + 1472);
    if ( v9 )
      *(_QWORD *)(ThreadWin32Thread + 1472) = *v9;
  }
  SmartObjStackRefBase<tagCLS>::Init(v14, v2);
  DestroyClassSmIcon(v14);
  v10 = W32GetThreadWin32Thread(KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v14);
  v11 = *(_QWORD **)(v10 + 1472);
  if ( v11 )
    *(_QWORD *)(v10 + 1472) = *v11;
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v15 = v2[4];
  v2[4] = 0LL;
  if ( v15 )
    RtlFreeHeap(*((PVOID *)v15 + 16), 0, v2[13]);
  else
    Win32FreePool(v2[13]);
  ClassFree(v15, (struct tagCLS *)v2);
  return UnlockObjectAssignment(&v15);
}
