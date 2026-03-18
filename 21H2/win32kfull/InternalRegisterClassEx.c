/*
 * XREFs of InternalRegisterClassEx @ 0x1C005FF10
 * Callers:
 *     _RegisterClassEx @ 0x1C0061460 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C0061D64 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C0104B1C (RegisterIconTitleClass.c)
 * Callees:
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C006066C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C00610E8 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0061130 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C0061158 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00611B8 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1C006128C (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     MapClientToServerPfn @ 0x1C00622BC (MapClientToServerPfn.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00633FC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00634AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     _InnerGetClassPtr @ 0x1C00714A8 (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0106C94 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C01105E4 (AllocateUnicodeString.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A258 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A278 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int16 Atom; // r12
  __int64 *ClassPtr; // r13
  struct tagDESKTOP *v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  struct tagCLS *v17; // rax
  struct tagCLS *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r15d
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned int v26; // r8d
  const WCHAR *v27; // rdx
  int v28; // r15d
  void *v29; // rax
  const WCHAR *v30; // rdx
  __int64 *v32; // r12
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r8d
  _QWORD *v39; // rdx
  __int64 v40; // r8
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD v44[2]; // [rsp+20h] [rbp-B8h] BYREF
  struct tagDESKTOP *v45; // [rsp+30h] [rbp-A8h] BYREF
  int v46; // [rsp+38h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  _STRING v48; // [rsp+50h] [rbp-88h] BYREF
  __int128 v49; // [rsp+60h] [rbp-78h] BYREF
  __int128 v50; // [rsp+80h] [rbp-58h] BYREF
  char v51[72]; // [rsp+90h] [rbp-48h] BYREF
  int v52; // [rsp+E0h] [rbp+8h]
  int v54; // [rsp+F0h] [rbp+18h]

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v44);
  DestinationString = 0LL;
  v48 = 0LL;
  v8 = 0LL;
  v46 = 0;
  v52 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a3 & 1;
  v54 = v10;
  if ( (a3 & 1) != 0 || v9 != hModuleWin || *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      Atom = UserFindAtom(v11);
      v10 = a3 & 1;
    }
    else
    {
      Atom = *(_QWORD *)(a1 + 80);
    }
    if ( a4 )
      *a4 = 0;
    if ( Atom && !v10 )
    {
      v45 = *(struct tagDESKTOP **)(gptiCurrent + 424LL);
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, (char *)v45 + 344, v9);
      if ( ClassPtr )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v8 = *ClassPtr;
          goto LABEL_46;
        }
LABEL_66:
        UserSetLastError(1410LL);
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
      {
        v32 = (__int64 *)InnerGetClassPtr(Atom, (char *)v45 + 352, 0LL);
        if ( v32 )
        {
          if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
          {
            if ( a4 )
              *a4 = 1;
            v8 = *v32;
            goto LABEL_46;
          }
          goto LABEL_66;
        }
      }
    }
    v14 = 0LL;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
      v14 = *(struct tagDESKTOP **)(gptiCurrent + 456LL);
    v45 = v14;
    v15 = (a3 & 8) != 0 ? 96 : 88;
    v16 = v15 + *(_DWORD *)(a1 + 16);
    if ( v16 < v15 )
      goto LABEL_75;
    v17 = (struct tagCLS *)ClassAlloc(v14, v16, v7);
    v18 = v17;
    if ( v17 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v17) )
    {
      ClassFree(v14, v18);
      v18 = 0LL;
    }
    if ( v18 != *(struct tagCLS **)v44[0] )
    {
      if ( v44[0] != gSmartObjNullRef && !--*(_DWORD *)(v44[0] + 8LL) )
      {
        if ( *(_BYTE *)(v44[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v44[0]);
      }
      if ( v18 )
      {
        v44[0] = *((_QWORD *)v18 + 16);
        ++*(_DWORD *)(v44[0] + 8LL);
      }
      else
      {
        v44[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v44[0] )
    {
LABEL_46:
      SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v44);
      return v8;
    }
    LockObjectAssignment(*(_QWORD *)v44[0] + 32LL, v14);
    *(_QWORD *)(*(_QWORD *)v44[0] + 56LL) = *(_QWORD *)v44[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v44[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v19 = *(_QWORD *)v44[0];
    *(_OWORD *)(v19 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v19 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)v44[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v34 = *(_DWORD *)(v33 + 84);
      else
        v34 = *(_DWORD *)(v33 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x2FFFu) - 666) + 328) = v34 + 328;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v20 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL));
      if ( v20 )
      {
        v38 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL) = v20;
        v39 = &unk_1C02DD630;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL) != *v39 )
        {
          ++v38;
          v39 += 6;
          if ( v38 >= 8 )
            goto LABEL_25;
        }
        v40 = 6LL * v38;
        v41 = dword_1C02DD638[2 * v40];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL) >= v41 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL) = v41;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL) -= dword_1C02DD638[2 * v40];
        }
      }
    }
LABEL_25:
    v21 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v44[0] + 88LL), v21) )
    {
LABEL_97:
      v45 = *(struct tagDESKTOP **)(*(_QWORD *)v44[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v44[0] + 32LL) = 0LL;
      ClassFree(v14, *(struct tagCLS **)v44[0]);
      UnlockObjectAssignment(&v45);
      goto LABEL_46;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v44[0] + 80LL), v21) )
    {
LABEL_96:
      HMAssignmentUnlock(*(_QWORD *)v44[0] + 88LL);
      goto LABEL_97;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v44[0] + 112LL), v21) )
    {
LABEL_95:
      HMAssignmentUnlock(*(_QWORD *)v44[0] + 80LL);
      goto LABEL_96;
    }
    v50 = *(_OWORD *)LockPointer(v51, *(_QWORD *)v44[0] + 112LL, *(_QWORD *)(*(_QWORD *)v44[0] + 112LL));
    HMAssignmentLock(&v50, 0LL);
    v22 = *(_QWORD *)(a1 + 64);
    if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v46 = 1;
      v23 = UserAddAtomEx(v22, 0LL, 2LL);
    }
    else
    {
      v23 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v22);
    }
    if ( !v23 )
    {
LABEL_94:
      v43 = *(_QWORD *)v44[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v43);
      goto LABEL_95;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 2LL) = v23;
    v24 = *(_QWORD *)(a1 + 80);
    if ( (v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v52 = 1;
      v25 = UserAddAtomEx(v24, 0LL, 2LL);
    }
    else
    {
      v25 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v24);
    }
    if ( !v25 )
    {
LABEL_92:
      if ( v46 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 2LL));
      goto LABEL_94;
    }
    **(_WORD **)(*(_QWORD *)v44[0] + 8LL) = v25;
    v27 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v27);
      v28 = DestinationString.Length + 1;
    }
    else
    {
      v28 = 7;
    }
    v29 = ClassAllocString(v14, v28, v26);
    if ( v29 )
    {
      if ( v14 )
      {
        tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(*(_QWORD *)v44[0] + 104LL, v29);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v44[0] + 104LL) = v29;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v48.MaximumLength = v28;
        v48.Buffer = *(PCHAR *)(*(_QWORD *)v44[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v48, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v44[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v28 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v44[0] + 104LL) + 1LL));
      }
      v30 = *(const WCHAR **)(*(_QWORD *)v44[0] + 96LL);
      if ( v30 && ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v30);
        if ( DestinationString.Length )
        {
          v49 = 0LL;
          if ( (unsigned int)AllocateUnicodeString(&v49, &DestinationString) )
          {
            v35 = *(_QWORD *)v44[0];
            v36 = *((_QWORD *)&v49 + 1);
            v37 = *((_QWORD *)&v49 + 1);
            if ( (*((_QWORD *)&v49 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
              v37 = -1LL;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 40LL) = v37;
            *(_QWORD *)(v35 + 96) = v36;
            goto LABEL_42;
          }
          ClassFree(v14, *(char **)(*(_QWORD *)v44[0] + 104LL));
          goto LABEL_90;
        }
        v42 = *(_QWORD *)v44[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v42 + 96) = 0LL;
      }
LABEL_42:
      if ( v54 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v44[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL) = *(_QWORD *)v44[0];
      }
      else
      {
        **(_QWORD **)v44[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL) = *(_QWORD *)v44[0];
      }
      v8 = *(_QWORD *)v44[0];
      goto LABEL_46;
    }
LABEL_90:
    if ( v52 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v44[0] + 8LL));
    goto LABEL_92;
  }
LABEL_75:
  UserSetLastError(87LL);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v44);
  return 0LL;
}
