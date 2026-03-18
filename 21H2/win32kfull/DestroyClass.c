/*
 * XREFs of DestroyClass @ 0x1C0060880
 * Callers:
 *     DereferenceClass @ 0x1C005FE40 (DereferenceClass.c)
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     _UnregisterClass @ 0x1C0071084 (_UnregisterClass.c)
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C01042A0 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C0221850 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0221974 (_WOWModuleUnload.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00606D0 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0060AD8 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00631C8 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00633FC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00634AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     DestroyClassSmIcon @ 0x1C00634EC (DestroyClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0119474 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  __int16 v4; // cx
  __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  struct tagDESKTOP *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) && (unsigned __int16)v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || (unsigned __int16)v5 >= 0xC000u)
      && !IsClassAtomRegistered(a1, v5) )
    {
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    }
    v6 = v2[12];
    if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    SmartObjStackRefBase<tagCLS>::Init(v9, v2);
    DestroyClassBrush(v9);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v9);
  }
  SmartObjStackRefBase<tagCLS>::Init(v9, v2);
  DestroyClassSmIcon(v9);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v9);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v10 = v2[4];
  v2[4] = 0LL;
  ClassFree(v10, (char *)v2[13]);
  ClassFree(v10, (struct tagCLS *)v2);
  return UnlockObjectAssignment(&v10);
}
