/*
 * XREFs of InternalRegisterClassEx @ 0x1C0079DD0
 * Callers:
 *     _RegisterClassEx @ 0x1C007CB90 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C007D654 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C0118998 (RegisterIconTitleClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C007A5F0 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     _InnerGetClassPtr @ 0x1C007A650 (_InnerGetClassPtr.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C007A6B8 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C007A718 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD4F8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     MapClientToServerPfn @ 0x1C00FC888 (MapClientToServerPfn.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010BFBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0119A00 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C0124764 (AllocateUnicodeString.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01681B0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E8DEC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 Atom; // r12
  __int64 *ClassPtr; // r13
  __int64 v14; // rsi
  unsigned int v15; // ecx
  struct tagCLS *v16; // rax
  struct tagCLS *v17; // r13
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r15d
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r13d
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  const WCHAR *v30; // rdx
  unsigned int v31; // r15d
  char *Heap; // rax
  __int64 v33; // r8
  const WCHAR *v34; // rdx
  __int64 *v36; // r12
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r8d
  _QWORD *v44; // r9
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD v49[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v50; // [rsp+30h] [rbp-B8h]
  int v51; // [rsp+34h] [rbp-B4h]
  struct tagDESKTOP *v52; // [rsp+38h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+58h] [rbp-90h]
  __int64 v55; // [rsp+60h] [rbp-88h] BYREF
  struct _STRING v56; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v57[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v58; // [rsp+90h] [rbp-58h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v49);
  DestinationString = 0LL;
  v56 = 0LL;
  v8 = 0LL;
  v50 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a3 & 1;
  v51 = a3 & 1;
  if ( (a3 & 1) == 0 && v9 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_87:
    v39 = 87LL;
    goto LABEL_71;
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    Atom = UserFindAtom(v11);
    LODWORD(v10) = v51;
  }
  else
  {
    Atom = *(_QWORD *)(a1 + 80);
  }
  if ( a4 )
    *a4 = 0;
  if ( Atom && !(_DWORD)v10 )
  {
    v52 = *(struct tagDESKTOP **)(gptiCurrent + 424LL);
    ClassPtr = (__int64 *)InnerGetClassPtr(Atom, (char *)v52 + 344, v9);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
        goto LABEL_70;
      if ( a4 )
        *a4 = 1;
      v8 = *ClassPtr;
      goto LABEL_50;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
    {
      v36 = (__int64 *)InnerGetClassPtr(Atom, (char *)v52 + 352, 0LL);
      if ( v36 )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v8 = *v36;
          goto LABEL_50;
        }
LABEL_70:
        v39 = 1410LL;
LABEL_71:
        UserSetLastError(v39, v10, v7);
        goto LABEL_50;
      }
    }
  }
  v14 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
    v14 = *(_QWORD *)(gptiCurrent + 456LL);
  v52 = (struct tagDESKTOP *)v14;
  v15 = (a3 & 8) != 0 ? 96 : 88;
  v10 = v15 + *(_DWORD *)(a1 + 16);
  if ( (unsigned int)v10 < v15 )
    goto LABEL_87;
  v54 = v15 + *(_DWORD *)(a1 + 16);
  v16 = (struct tagCLS *)ClassAlloc((struct tagDESKTOP *)v14, v10, v7);
  v17 = v16;
  if ( v16 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v16) )
  {
    ClassFree((struct tagDESKTOP *)v14, v17);
    v17 = 0LL;
  }
  if ( v17 == *(struct tagCLS **)v49[0] )
  {
    v18 = 1;
  }
  else
  {
    if ( v49[0] != gSmartObjNullRef && !--*(_DWORD *)(v49[0] + 8LL) )
    {
      if ( *(_BYTE *)(v49[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v49[0]);
    }
    v18 = 1;
    if ( v17 )
    {
      v49[0] = *((_QWORD *)v17 + 16);
      ++*(_DWORD *)(v49[0] + 8LL);
    }
    else
    {
      v49[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v49[0] )
  {
    LockObjectAssignment(*(_QWORD *)v49[0] + 32LL, v14);
    *(_QWORD *)(*(_QWORD *)v49[0] + 56LL) = *(_QWORD *)v49[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v49[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v19 = *(_QWORD *)v49[0];
    *(_OWORD *)(v19 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v19 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)v49[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v38 = *(_DWORD *)(v37 + 84);
      else
        v38 = *(_DWORD *)(v37 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x2FFFu) - 666) + 328) = v38 + 320;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v20 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 32LL));
      if ( v20 )
      {
        v43 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 32LL) = v20;
        v44 = &unk_1C02E1A80;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 32LL) != *v44 )
        {
          ++v43;
          v44 += 6;
          if ( v43 >= 8 )
            goto LABEL_25;
        }
        v45 = 6LL * v43;
        v46 = dword_1C02E1A88[2 * v45];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 80LL) >= v46 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 84LL) = v46;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 80LL) -= dword_1C02E1A88[2 * v45];
        }
      }
    }
LABEL_25:
    v21 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v49[0] + 88LL), v21) )
      goto LABEL_103;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v49[0] + 80LL), v21) )
    {
LABEL_102:
      HMAssignmentUnlock(*(_QWORD *)v49[0] + 88LL);
LABEL_103:
      v55 = *(_QWORD *)(*(_QWORD *)v49[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v49[0] + 32LL) = 0LL;
      ClassFree((struct tagDESKTOP *)v14, *(struct tagCLS **)v49[0]);
      UnlockObjectAssignment(&v55);
      goto LABEL_50;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v49[0] + 112LL), v21) )
    {
LABEL_101:
      HMAssignmentUnlock(*(_QWORD *)v49[0] + 80LL);
      goto LABEL_102;
    }
    v22 = *(__int64 **)(*(_QWORD *)v49[0] + 112LL);
    v23 = *(_QWORD *)v49[0] + 112LL;
    if ( v22 )
      v24 = *v22;
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 56LL) = v24;
    v57[0] = v23;
    v57[1] = v22;
    HMAssignmentLock(v57);
    v25 = *(_QWORD *)(a1 + 64);
    if ( (v25 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v26 = 1;
      v27 = UserAddAtomEx(v25, 0LL, 2LL);
    }
    else
    {
      v27 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v25);
      v26 = 0;
    }
    if ( !v27 )
    {
LABEL_100:
      v48 = *(_QWORD *)v49[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v48);
      goto LABEL_101;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 2LL) = v27;
    v28 = *(_QWORD *)(a1 + 80);
    if ( (v28 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v50 = 1;
      v29 = UserAddAtomEx(v28, 0LL, 2LL);
    }
    else
    {
      v29 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v28);
      v18 = 0;
    }
    if ( !v29 )
    {
LABEL_98:
      if ( v26 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 2LL));
      goto LABEL_100;
    }
    **(_WORD **)(*(_QWORD *)v49[0] + 8LL) = v29;
    v30 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v30);
      v31 = DestinationString.Length + 1;
    }
    else
    {
      v31 = 7;
    }
    if ( v14 )
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(v14 + 128), 0, v31);
    else
      Heap = (char *)Win32AllocPoolZInit(v31, 1818456917LL);
    if ( Heap )
    {
      if ( v14 )
      {
        v33 = *(_QWORD *)v49[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 48LL) = &Heap[-(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL)
                                                                         - *(_QWORD *)(*(_QWORD *)v49[0] + 16LL))];
        *(_QWORD *)(v33 + 104) = Heap;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v49[0] + 104LL) = Heap;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v56.MaximumLength = v31;
        v56.Buffer = *(PCHAR *)(*(_QWORD *)v49[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v56, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v49[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v31 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v49[0] + 104LL) + 1LL));
      }
      v34 = *(const WCHAR **)(*(_QWORD *)v49[0] + 96LL);
      if ( v34 && ((unsigned __int64)v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v34);
        if ( DestinationString.Length )
        {
          v58 = 0LL;
          if ( (unsigned int)AllocateUnicodeString(&v58, &DestinationString) )
          {
            v40 = *(_QWORD *)v49[0];
            v41 = *((_QWORD *)&v58 + 1);
            v42 = *((_QWORD *)&v58 + 1);
            if ( (*((_QWORD *)&v58 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
              v42 = -1LL;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 40LL) = v42;
            *(_QWORD *)(v40 + 96) = v41;
            goto LABEL_46;
          }
          ClassFree((struct tagDESKTOP *)v14, *(char **)(*(_QWORD *)v49[0] + 104LL));
          goto LABEL_96;
        }
        v47 = *(_QWORD *)v49[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v47 + 96) = 0LL;
      }
LABEL_46:
      if ( v51 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v49[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL) = *(_QWORD *)v49[0];
      }
      else
      {
        **(_QWORD **)v49[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL) = *(_QWORD *)v49[0];
      }
      v8 = *(_QWORD *)v49[0];
      goto LABEL_50;
    }
LABEL_96:
    if ( v18 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v49[0] + 8LL));
    goto LABEL_98;
  }
LABEL_50:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v49);
  return v8;
}
