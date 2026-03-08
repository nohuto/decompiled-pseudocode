/*
 * XREFs of InternalRegisterClassEx @ 0x1C0030830
 * Callers:
 *     RegisterDefaultClass @ 0x1C003124C (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C00DBAB8 (RegisterIconTitleClass.c)
 *     _RegisterClassEx @ 0x1C012DD34 (_RegisterClassEx.c)
 * Callees:
 *     MapClientToServerPfn @ 0x1C0031460 (MapClientToServerPfn.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0031AA8 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DC9D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     AllocateUnicodeString @ 0x1C00E9BB0 (AllocateUnicodeString.c)
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0109744 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC6C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC8C (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BF140 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BF268 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BF2A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, unsigned __int16 a2, __int16 a3, _DWORD *a4)
{
  __int64 v7; // r12
  __int64 v8; // r14
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rbx
  char *Heap; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  BOOL v25; // r14d
  __int64 *v26; // r13
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // r14
  _QWORD *v30; // rcx
  bool v31; // zf
  int v32; // eax
  _QWORD *v33; // rbx
  int v34; // eax
  _QWORD *v35; // rbx
  int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // r13d
  unsigned __int16 v42; // ax
  __int64 v43; // rax
  int v44; // r14d
  unsigned __int16 v45; // ax
  __int64 v46; // r8
  char *v47; // r9
  __int64 v48; // rdx
  const WCHAR *v49; // rdx
  unsigned int v50; // ebx
  char *v51; // rax
  __int64 v52; // r8
  const WCHAR *v53; // rdx
  __int64 v54; // rbx
  __int64 v56; // rax
  int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r9d
  _DWORD *v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rcx
  _QWORD v69[2]; // [rsp+20h] [rbp-F8h] BYREF
  int v70; // [rsp+30h] [rbp-E8h]
  int v71; // [rsp+34h] [rbp-E4h]
  struct tagDESKTOP *v72; // [rsp+38h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v74[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v75; // [rsp+70h] [rbp-A8h]
  _STRING v76; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v78[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v79[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-58h] BYREF
  BOOL v82; // [rsp+130h] [rbp+18h]

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v69);
  DestinationString = 0LL;
  v76 = 0LL;
  v70 = 0;
  v7 = gptiCurrent;
  v74[0] = gptiCurrent;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a3 & 1;
  v71 = v9;
  if ( (a3 & 1) == 0 && v8 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_111:
    v59 = 87LL;
    goto LABEL_91;
  }
  v10 = *(_QWORD *)(a1 + 80);
  if ( (v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LOWORD(v10) = UserFindAtom(*(_QWORD *)(a1 + 80));
    v9 = v71;
  }
  if ( a4 )
    *a4 = 0;
  if ( !(_WORD)v10 || v9 )
    goto LABEL_16;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = (__int64 *)(v11 + 344);
  v13 = *(__int64 **)(v11 + 344);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = v13[1];
      if ( *(_WORD *)v14 == (_WORD)v10
        && (!v8 || WORD1(*(_QWORD *)(v14 + 64)) == WORD1(v8))
        && (*(_WORD *)(v14 + 6) & 4) == 0 )
      {
        break;
      }
      v12 = v13;
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_12;
    }
    if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
      goto LABEL_90;
    if ( !a4 )
      goto LABEL_114;
LABEL_113:
    *a4 = 1;
LABEL_114:
    v54 = *v12;
LABEL_74:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v69);
    return v54;
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 4) & 0x4000) == 0 || (v12 = (__int64 *)(v11 + 352), (v15 = *(__int64 **)(v11 + 352)) == 0LL) )
  {
LABEL_16:
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
      v17 = 0LL;
    else
      v17 = *(_QWORD *)(gptiCurrent + 456LL);
    v72 = (struct tagDESKTOP *)v17;
    v18 = *(_DWORD *)(a1 + 16) + 88;
    if ( *(_DWORD *)(a1 + 16) >= 0xFFFFFFA8 )
      goto LABEL_111;
    if ( v17 )
    {
      if ( *gpUserTypeIsolation )
      {
        v19 = NSInstrumentation::CTypeIsolation<36864,144>::Allocate();
        if ( v19 )
        {
          Heap = (char *)RtlAllocateHeap(*(PVOID *)(v17 + 128), 0, v18);
          *(_QWORD *)(v19 + 8) = Heap;
          if ( Heap )
          {
            *(_QWORD *)(v19 + 16) = &Heap[-*(_QWORD *)(v17 + 16)];
          }
          else
          {
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v19);
            v19 = 0LL;
          }
LABEL_24:
          if ( v19 )
          {
            if ( !gpStackRefLookAside )
              KeBugCheck(4u);
            v21 = (__int64 *)Win32AllocateFromPagedLookasideList();
            *(_QWORD *)(v19 + 128) = v21;
            if ( v21 )
            {
              *v21 = v19;
              *(_DWORD *)(*(_QWORD *)(v19 + 128) + 8LL) = 0;
              *(_BYTE *)(*(_QWORD *)(v19 + 128) + 12LL) = 0;
            }
            else
            {
              ClassFree((struct tagDESKTOP *)v17, (struct tagCLS *)v19);
              v19 = 0LL;
            }
          }
          if ( v19 != *(_QWORD *)v69[0] )
          {
            if ( v69[0] != gSmartObjNullRef && !--*(_DWORD *)(v69[0] + 8LL) )
            {
              if ( *(_BYTE *)(v69[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v69[0]);
            }
            if ( v19 )
            {
              v69[0] = *(_QWORD *)(v19 + 128);
              ++*(_DWORD *)(v69[0] + 8LL);
            }
            else
            {
              v69[0] = gSmartObjNullRef;
            }
          }
          if ( !*(_QWORD *)v69[0] )
            goto LABEL_92;
          LockObjectAssignment(*(_QWORD *)v69[0] + 32LL, v17);
          *(_QWORD *)(*(_QWORD *)v69[0] + 56LL) = *(_QWORD *)v69[0];
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
          *(_OWORD *)(*(_QWORD *)v69[0] + 80LL) = *(_OWORD *)(a1 + 32);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
          v22 = *(_QWORD *)v69[0];
          *(_OWORD *)(v22 + 96) = *(_OWORD *)(a1 + 56);
          *(_QWORD *)(v22 + 112) = *(_QWORD *)(a1 + 72);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 6LL) = a3;
          v23 = a2;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 4LL) = a2;
          if ( a2 )
          {
            v56 = *(_QWORD *)(*(_QWORD *)v69[0] + 8LL);
            if ( *(_DWORD *)(a1 + 92) == 1 )
              v57 = *(_DWORD *)(v56 + 84);
            else
              v57 = *(_DWORD *)(v56 + 80);
            v23 = (a2 & 0x2FFFu) - 666;
            *(_WORD *)(gpsi + 2LL * (unsigned int)v23 + 328) = v57 + 328;
          }
          if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 6LL) & 1) == 0 )
          {
            v24 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 32LL));
            if ( v24 )
            {
              v65 = 0;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 6LL) |= 1u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 6LL) &= ~2u;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 32LL) = v24;
              v23 = (unsigned __int64)&unk_1C030A990;
              while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 32LL) != *(_QWORD *)v23 )
              {
                ++v65;
                v23 += 48LL;
                if ( v65 >= 8 )
                  goto LABEL_36;
              }
              v23 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 80LL);
              v66 = (_DWORD *)((char *)&unk_1C030A998 + 48 * v65);
              if ( (int)v23 >= *v66 )
              {
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 84LL) = *v66;
                v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 80LL) - *v66);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 80LL) = v23;
              }
            }
          }
LABEL_36:
          v25 = (a3 & 0x40) != 0;
          v82 = v25;
          v26 = (__int64 *)(*(_QWORD *)v69[0] + 88LL);
          v27 = *v26;
          if ( !*v26 )
            goto LABEL_44;
          v28 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)v27 >= *(_QWORD *)(gpsi + 8LL) )
          {
LABEL_42:
            if ( !v28 && v25 )
            {
              UserSetLastError(87LL);
              v32 = 0;
              v7 = v74[0];
LABEL_45:
              if ( !v32 )
              {
LABEL_154:
                v72 = *(struct tagDESKTOP **)(*(_QWORD *)v69[0] + 32LL);
                *(_QWORD *)(*(_QWORD *)v69[0] + 32LL) = 0LL;
                ClassFree((struct tagDESKTOP *)v17, *(struct tagCLS **)v69[0]);
                UnlockObjectAssignment(&v72);
                goto LABEL_92;
              }
              v33 = (_QWORD *)(*(_QWORD *)v69[0] + 80LL);
              if ( *v33 )
              {
                LOBYTE(v23) = 3;
                v58 = HMValidateHandleNoSecure(*v33, v23);
                if ( !v58 && v25 )
                {
                  UserSetLastError(87LL);
                  v34 = 0;
LABEL_48:
                  if ( !v34 )
                  {
LABEL_153:
                    HMAssignmentUnlock(*(_QWORD *)v69[0] + 88LL);
                    goto LABEL_154;
                  }
                  v35 = (_QWORD *)(*(_QWORD *)v69[0] + 112LL);
                  if ( *v35 )
                  {
                    LOBYTE(v23) = 3;
                    v60 = HMValidateHandleNoSecure(*v35, v23);
                    if ( !v60 && v25 )
                    {
                      UserSetLastError(87LL);
                      v36 = 0;
                      goto LABEL_51;
                    }
                    *v35 = 0LL;
                    v78[0] = v35;
                    v78[1] = v60;
                    HMAssignmentLock(v78, 0LL);
                  }
                  v36 = 1;
LABEL_51:
                  if ( v36 )
                  {
                    v37 = *(__int64 **)(*(_QWORD *)v69[0] + 112LL);
                    v38 = *(_QWORD *)v69[0] + 112LL;
                    if ( v37 )
                      v39 = *v37;
                    else
                      v39 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 56LL) = v39;
                    v79[0] = v38;
                    v79[1] = v37;
                    HMAssignmentLock(v79, 0LL);
                    v40 = *(_QWORD *)(a1 + 64);
                    if ( (v40 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                    {
                      v41 = 1;
                      v42 = UserAddAtomEx(v40, 0LL, 2LL);
                    }
                    else
                    {
                      v42 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v7 + 424), v40);
                      v41 = 0;
                    }
                    if ( v42 )
                    {
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 2LL) = v42;
                      v43 = *(_QWORD *)(a1 + 80);
                      if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                      {
                        v44 = 1;
                        v70 = 1;
                        v45 = UserAddAtomEx(v43, 0LL, 2LL);
                      }
                      else
                      {
                        v45 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v7 + 424), v43);
                        v44 = 0;
                      }
                      v48 = v45;
                      if ( v45 )
                      {
                        **(_WORD **)(*(_QWORD *)v69[0] + 8LL) = v45;
                        v49 = *(const WCHAR **)(a1 + 64);
                        if ( ((unsigned __int64)v49 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                        {
                          RtlInitUnicodeString(&DestinationString, v49);
                          v50 = DestinationString.Length + 1;
                        }
                        else
                        {
                          v50 = 7;
                        }
                        if ( v17 )
                          v51 = (char *)RtlAllocateHeap(*(PVOID *)(v17 + 128), 0, v50);
                        else
                          v51 = (char *)Win32AllocPoolZInit(v50, 1818456917LL);
                        v47 = v51;
                        if ( v51 )
                        {
                          if ( v17 )
                          {
                            v52 = *(_QWORD *)v69[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 48LL) = &v51[-(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL)
                                                                                            - *(_QWORD *)(*(_QWORD *)v69[0] + 16LL))];
                            *(_QWORD *)(v52 + 104) = v51;
                          }
                          else
                          {
                            *(_QWORD *)(*(_QWORD *)v69[0] + 104LL) = v51;
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 48LL) = 0LL;
                          }
                          if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
                          {
                            v76.MaximumLength = v50;
                            v76.Buffer = *(PCHAR *)(*(_QWORD *)v69[0] + 104LL);
                            RtlUnicodeStringToAnsiString(&v76, &DestinationString, 0);
                          }
                          else
                          {
                            **(_BYTE **)(*(_QWORD *)v69[0] + 104LL) = 35;
                            RtlIntegerToChar(
                              *(unsigned __int16 *)(a1 + 64),
                              0xAu,
                              v50 - 1,
                              (PCHAR)(*(_QWORD *)(*(_QWORD *)v69[0] + 104LL) + 1LL));
                          }
                          v53 = *(const WCHAR **)(*(_QWORD *)v69[0] + 96LL);
                          if ( !v53 || ((unsigned __int64)v53 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                          {
LABEL_70:
                            if ( v71 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 8LL) & 0x4000) != 0 )
                            {
                              **(_QWORD **)v69[0] = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 352LL);
                              *(_QWORD *)(*(_QWORD *)(v7 + 424) + 352LL) = *(_QWORD *)v69[0];
                            }
                            else
                            {
                              **(_QWORD **)v69[0] = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 344LL);
                              *(_QWORD *)(*(_QWORD *)(v7 + 424) + 344LL) = *(_QWORD *)v69[0];
                            }
                            v54 = *(_QWORD *)v69[0];
                            goto LABEL_74;
                          }
                          RtlInitUnicodeString(&DestinationString, v53);
                          if ( !DestinationString.Length )
                          {
                            v67 = *(_QWORD *)v69[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 40LL) = 0LL;
                            *(_QWORD *)(v67 + 96) = 0LL;
                            goto LABEL_70;
                          }
                          v80 = 0LL;
                          if ( (unsigned int)AllocateUnicodeString(&v80, &DestinationString) )
                          {
                            v61 = *(_QWORD *)v69[0];
                            v62 = *((_QWORD *)&v80 + 1);
                            v63 = *(_QWORD *)(*(_QWORD *)v69[0] + 8LL);
                            if ( (*((_QWORD *)&v80 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
                              *(_QWORD *)(v63 + 40) = -1LL;
                            else
                              *(_QWORD *)(v63 + 40) = *((_QWORD *)&v80 + 1);
                            *(_QWORD *)(v61 + 96) = v62;
                            goto LABEL_70;
                          }
                          ClassFree((struct tagDESKTOP *)v17, *(char **)(*(_QWORD *)v69[0] + 104LL));
                        }
                        if ( v44 )
                          UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v69[0] + 8LL), v48, v46, v47);
                      }
                      if ( v41 )
                        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 2LL), v48, v46, v47);
                    }
                    v68 = *(_QWORD *)v69[0] + 112LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69[0] + 8LL) + 56LL) = 0LL;
                    HMAssignmentUnlock(v68);
                  }
                  HMAssignmentUnlock(*(_QWORD *)v69[0] + 80LL);
                  goto LABEL_153;
                }
                *v33 = 0LL;
                v74[0] = v33;
                v74[1] = v58;
                HMAssignmentLock(v74, 0LL);
              }
              v34 = 1;
              goto LABEL_48;
            }
            *v26 = 0LL;
            v77[0] = v26;
            v77[1] = v28;
            HMAssignmentLock(v77, 0LL);
            v7 = v74[0];
LABEL_44:
            v32 = 1;
            goto LABEL_45;
          }
          v29 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v27;
          v30 = (_QWORD *)HMPkheFromPhe(v29);
          v75 = v30;
          LOWORD(v27) = WORD1(v27) & 0x7FFF;
          if ( (WORD1(v27) & 0x7FFF) != *(_WORD *)(v29 + 26) && (_WORD)v27 != 0x7FFF )
          {
            if ( (_WORD)v27 || !PsGetCurrentProcessWow64Process(v30) )
            {
LABEL_137:
              v25 = v82;
              goto LABEL_42;
            }
            v30 = v75;
          }
          if ( (*(_BYTE *)(v29 + 25) & 1) == 0 )
          {
            v31 = *(_BYTE *)(v29 + 24) == 3;
            v25 = v82;
            if ( v31 )
              v28 = *v30;
            goto LABEL_42;
          }
          goto LABEL_137;
        }
      }
    }
    else
    {
      v19 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
      if ( !v19 )
        goto LABEL_24;
      v64 = Win32AllocPoolZInit(v18, 1818456917LL);
      *(_QWORD *)(v19 + 8) = v64;
      if ( v64 )
      {
        *(_QWORD *)(v19 + 16) = 0LL;
        goto LABEL_24;
      }
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v19);
    }
    v19 = 0LL;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v16 = (_WORD *)v15[1];
    if ( *v16 == (_WORD)v10 && (v16[3] & 4) == 0 )
      break;
    v12 = v15;
    v15 = (__int64 *)*v15;
    if ( !v15 )
      goto LABEL_16;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    if ( !a4 )
      goto LABEL_114;
    goto LABEL_113;
  }
LABEL_90:
  v59 = 1410LL;
LABEL_91:
  UserSetLastError(v59);
LABEL_92:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v69);
  return 0LL;
}
