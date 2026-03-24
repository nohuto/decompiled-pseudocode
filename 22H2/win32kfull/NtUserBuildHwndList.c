/*
 * XREFs of NtUserBuildHwndList @ 0x1C006CC80
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D3A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  struct tagBWL *v11; // r12
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rdx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  PVOID v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // r14
  PVOID v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  struct tagWND *v26; // rdx
  _QWORD *v27; // rax
  struct tagBWL *v28; // rdx
  __int16 *v29; // rcx
  struct tagBWL *v30; // rdi
  char *v31; // r15
  __int64 *v32; // r14
  unsigned __int64 v33; // rsi
  __int64 v34; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 *v40; // r12
  unsigned __int64 v41; // rsi
  bool v42; // zf
  __int16 v43; // dx
  __int64 v44; // rax
  struct tagBWL *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // ebx
  _DWORD *v48; // rdx
  int v49; // edi
  int v50; // ebx
  struct tagBWL *v51; // rdx
  struct tagBWL *v52; // rcx
  struct tagBWL *v53; // rcx
  int v55; // edx
  signed __int64 v56; // r15
  __int64 ThreadDesktopWindow; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  unsigned int v72; // edx
  unsigned __int64 v73; // rbx
  __int64 v74; // rax
  int ProcessSessionId; // edi
  __int64 v76; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int v78; // r8d
  struct tagBWL *v79; // [rsp+20h] [rbp-98h]
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  struct tagBWL *v81; // [rsp+38h] [rbp-80h]
  struct tagBWL *v82; // [rsp+48h] [rbp-70h]
  __int128 v83; // [rsp+58h] [rbp-60h] BYREF
  __int128 v84; // [rsp+68h] [rbp-50h]
  int v85; // [rsp+C8h] [rbp+10h]
  int v87; // [rsp+D8h] [rbp+20h]

  Object = 0LL;
  v11 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive(v12) && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v87 = ++gdwAtomicCheckSerial;
    v72 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v72 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v72 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v73 = (unsigned __int64)v72 << 6;
      *(_DWORD *)(gpAtomickCheckStacks + v73) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v73 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v73 + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v73 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v87 = v85;
  }
LABEL_5:
  v13 = 2 * (*gpsi & 4 | 1);
  if ( a4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
    v17 = *(unsigned int *)(CurrentProcessWin32Process + 820);
    if ( (v17 & 0x30) == 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v17, v14, v16);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        && *(int *)(CurrentProcessWin32Process + 12) >= 0
        && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
        && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x800) == 0 )
      {
        LOBYTE(v13) = v13 | 0x20;
      }
    }
  }
  if ( a2 )
  {
    v21 = (_QWORD *)ValidateHwnd(a2);
    if ( !v21 )
    {
      v49 = -1073741816;
      v50 = v87;
      goto LABEL_68;
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( a5 )
  {
    v60 = PtiFromThreadId(a5);
    v22 = v60;
    if ( !v60 )
      goto LABEL_104;
    v61 = *(_QWORD *)(v60 + 456);
    if ( !v61 )
      goto LABEL_104;
    v21 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v61 + 8) + 24LL) + 112LL);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !a1 )
  {
    v23 = Object;
LABEL_20:
    if ( v21 )
    {
      if ( a3 )
      {
        LOBYTE(v13) = v13 | 1;
        v21 = (_QWORD *)v21[14];
      }
LABEL_23:
      v11 = pbwlCache;
      v81 = pbwlCache;
      if ( pbwlCache )
      {
        pbwlCache = 0LL;
      }
      else
      {
        v65 = Win32AllocPool(296LL, 1819767637LL);
        v11 = (struct tagBWL *)v65;
        v81 = (struct tagBWL *)v65;
        if ( !v65 )
        {
LABEL_108:
          v49 = -1073741816;
          UserSetLastError(8LL, v66, v67);
          v11 = 0LL;
          goto LABEL_109;
        }
        *(_QWORD *)(v65 + 16) = v65 + 280;
      }
      *((_QWORD *)v11 + 1) = (char *)v11 + 32;
      *((_QWORD *)v11 + 3) = v22;
      if ( v21 )
      {
        do
        {
          v24 = *((_QWORD *)v11 + 3);
          if ( (v13 & 0x20) == 0 || (v55 = *(_DWORD *)(v21[5] + 236LL), (unsigned int)(v55 - 1) <= 1) || v55 == 16 )
          {
            if ( !v24 || v24 == v21[2] )
            {
              **((_QWORD **)v11 + 1) = *v21;
              *((_QWORD *)v11 + 1) += 8LL;
              v25 = *((_QWORD *)v11 + 1);
              if ( v25 == *((_QWORD *)v11 + 2) )
              {
                v62 = v25 - (_QWORD)v11;
                v63 = UserReAllocPool(v11, (unsigned int)v62 + 8LL, (unsigned int)v62 + 72LL, 1819767637LL);
                if ( !v63 )
                  break;
                v64 = v63 + v62;
                *(_QWORD *)(v63 + 8) = v64;
                *(_QWORD *)(v63 + 16) = v64 + 64;
                v11 = (struct tagBWL *)v63;
              }
            }
          }
          if ( (v13 & 1) != 0 )
          {
            v26 = (struct tagWND *)v21[14];
            if ( v26 )
            {
              v11 = InternalBuildHwndList(v11, v26, 3u);
              if ( *((_QWORD *)v11 + 1) >= *((_QWORD *)v11 + 2) )
                break;
            }
          }
          v21 = (_QWORD *)v21[11];
        }
        while ( v21 );
        v81 = v11;
      }
      v27 = (_QWORD *)*((_QWORD *)v11 + 1);
      if ( (unsigned __int64)v27 < *((_QWORD *)v11 + 2) )
      {
        *v27 = 1LL;
        if ( (v13 & 8) != 0 )
        {
          v28 = (struct tagBWL *)Win32AllocPool(*((_QWORD *)v11 + 2) - (_QWORD)v11 + 8LL, 1819767637LL);
          v82 = v28;
          v30 = v28;
          v79 = v28;
          if ( v28 )
          {
            v31 = (char *)v11 + 32;
            v32 = (__int64 *)((char *)v11 + 32);
            v33 = *((_QWORD *)v11 + 4);
            if ( v33 != 1 )
            {
              do
              {
                v34 = 0LL;
                CurrentThread = KeGetCurrentThread();
                if ( !(unsigned __int8)KeIsAttachedProcess(v29)
                  || (v74 = PsGetCurrentProcess(v37, v36, v38),
                      ProcessSessionId = PsGetProcessSessionIdEx(v74),
                      CurrentThreadProcess = PsGetCurrentThreadProcess(v76),
                      v42 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                      v30 = v79,
                      v42) )
                {
                  PsGetThreadWin32Thread(CurrentThread);
                }
                v29 = (__int16 *)gpsi;
                if ( (unsigned __int64)(unsigned __int16)v33 < *(_QWORD *)(gpsi + 8LL) )
                {
                  v39 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v33 * LODWORD(gSharedInfo[2]);
                  v40 = (__int64 *)HMPkheFromPhe(v39);
                  v41 = v33 >> 16;
                  if ( ((_WORD)v41 == *(_WORD *)(v39 + 26)
                     || (_WORD)v41 == 0xFFFF
                     || !(_WORD)v41 && PsGetCurrentProcessWow64Process(v29))
                    && (*(_BYTE *)(v39 + 25) & 1) == 0 )
                  {
                    v42 = *(_BYTE *)(v39 + 24) == 1;
                    v30 = v79;
                    if ( v42 )
                      v34 = *v40;
                  }
                  else
                  {
                    v30 = v79;
                  }
                }
                if ( v34 )
                {
                  while ( 1 )
                  {
                    v29 = *(__int16 **)(*(_QWORD *)(v34 + 136) + 8LL);
                    if ( (v29[5] & 1) != 0 )
                      break;
                    v43 = *v29;
                    v29 = (__int16 *)gpsi;
                    if ( v43 == *(_WORD *)(gpsi + 898LL) )
                      break;
                    v34 = *(_QWORD *)(v34 + 120);
                    if ( !v34 )
                      goto LABEL_48;
                  }
                }
                else
                {
LABEL_48:
                  v34 = 0LL;
                }
                v44 = *v32;
                if ( v34 )
                {
                  *(_QWORD *)v30 = v44;
                  v30 = (struct tagBWL *)((char *)v30 + 8);
                  v79 = v30;
                }
                else
                {
                  *(_QWORD *)v31 = v44;
                  v31 += 8;
                }
                v33 = *++v32;
              }
              while ( *v32 != 1 );
              v11 = v81;
              v28 = v82;
            }
            *(_QWORD *)v30 = 0LL;
            v45 = v28;
            v46 = *(_QWORD *)v28;
            if ( *(_QWORD *)v28 )
            {
              v56 = v31 - (char *)v28;
              do
              {
                *(_QWORD *)((char *)v45 + v56) = v46;
                v45 = (struct tagBWL *)((char *)v45 + 8);
                v46 = *(_QWORD *)v45;
              }
              while ( *(_QWORD *)v45 );
            }
            Win32FreePool(v28);
          }
        }
        *((_QWORD *)v11 + 3) = gptiCurrent;
        *(_QWORD *)v11 = gpbwlList;
        gpbwlList = v11;
        v82 = v11;
        v47 = ((*((_QWORD *)v11 + 1) - (_QWORD)v11 - 32LL) >> 3) + 1;
        ProbeForWrite(Address, 8LL * a6, 4u);
        v48 = a8;
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v48 = (_DWORD *)MmUserProbeAddress;
        *v48 = *v48;
        if ( v47 > a6 )
        {
          v49 = -1073741789;
        }
        else
        {
          memmove((void *)Address, (char *)v11 + 32, 8LL * v47);
          v49 = 0;
        }
        *a8 = v47;
        v50 = v87;
        goto LABEL_61;
      }
      Win32FreePool(v11);
      goto LABEL_108;
    }
    if ( v23 )
      goto LABEL_23;
    ThreadDesktopWindow = GetThreadDesktopWindow(v22);
    if ( ThreadDesktopWindow )
    {
      v21 = *(_QWORD **)(ThreadDesktopWindow + 112);
      goto LABEL_23;
    }
LABEL_104:
    v49 = -1073741816;
    UserSetLastError(87LL, v58, v59);
    v50 = v87;
    goto LABEL_68;
  }
  if ( (int)ValidateHdesk(a1, 1LL, 1LL, &Object) < 0 )
  {
    v49 = -1073741816;
    v50 = v87;
    goto LABEL_68;
  }
  *(_QWORD *)&v84 = Object;
  LODWORD(v83) = 1;
  *((_QWORD *)&v83 + 1) = PsGetCurrentProcess(v20, v68, v69);
  v49 = MapDesktop((__int64)&v83);
  if ( v49 >= 0 )
  {
    v23 = Object;
    v21 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
    goto LABEL_20;
  }
  UserSetLastError(6LL, v70, v71);
LABEL_109:
  v50 = v87;
LABEL_61:
  if ( v11 )
  {
    v51 = (struct tagBWL *)gpbwlList;
    v52 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v52 != v11 )
      {
        v51 = v52;
        v52 = *(struct tagBWL **)v52;
        if ( !v52 )
          goto LABEL_66;
      }
      *(_QWORD *)v51 = *(_QWORD *)v11;
      v53 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v11 + 2) - (_QWORD)v11 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v53 = v11;
        else
          pbwlCache = v11;
        Win32FreePool(v53);
      }
      else
      {
        pbwlCache = v11;
      }
    }
  }
LABEL_66:
  v20 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_68:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v20) )
    {
      --gdwInAtomicOperation;
      v20 = (PVOID)gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v78 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v78 << 6) + gpAtomickCheckStacks) != v50 )
          {
            if ( ++v78 >= gdwAtomicCheckLogSize )
              goto LABEL_71;
          }
          *(_DWORD *)(((unsigned __int64)v78 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_71:
  UserSessionSwitchLeaveCrit(v20);
  return (unsigned int)v49;
}
