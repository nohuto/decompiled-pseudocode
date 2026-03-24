/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C007CD60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _RegisterClassEx @ 0x1C007CB90 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C007D654 (RegisterDefaultClass.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     RegisterIconTitleClass @ 0x1C0118998 (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 v13; // bx
  unsigned int v14; // ecx
  _WORD *v15; // rax
  int v16; // r14d
  unsigned __int64 v17; // r8
  int v18; // r13d
  ULONG64 v19; // r12
  ULONG64 v20; // rdx
  unsigned __int64 v21; // rbx
  ULONG64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  ULONG64 v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rax
  ULONG64 v45; // r8
  ULONG64 v46; // rcx
  __int64 Atom; // r8
  __int64 v48; // rcx
  unsigned __int16 *v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rax
  int v57; // [rsp+30h] [rbp-1D8h]
  int v58; // [rsp+38h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-1D0h]
  int v60; // [rsp+44h] [rbp-1C4h]
  int v61; // [rsp+48h] [rbp-1C0h]
  int v62; // [rsp+4Ch] [rbp-1BCh]
  void *Str1_8; // [rsp+60h] [rbp-1A8h]
  void *v64; // [rsp+70h] [rbp-198h]
  void *v65; // [rsp+78h] [rbp-190h]
  ULONG64 v66; // [rsp+80h] [rbp-188h]
  __int128 v67; // [rsp+88h] [rbp-180h] BYREF
  void (*v68)(void *); // [rsp+98h] [rbp-170h]
  __int128 v69; // [rsp+A0h] [rbp-168h] BYREF
  void (*v70)(void *); // [rsp+B0h] [rbp-158h]
  __int64 v71; // [rsp+C0h] [rbp-148h]
  void *Src; // [rsp+C8h] [rbp-140h]
  __int64 v73; // [rsp+D0h] [rbp-138h]
  __int64 v74; // [rsp+D8h] [rbp-130h]
  __int64 v75; // [rsp+E0h] [rbp-128h]
  __int128 v76; // [rsp+E8h] [rbp-120h] BYREF
  ULONG64 v77; // [rsp+F8h] [rbp-110h]
  __int128 v78; // [rsp+100h] [rbp-108h]
  __int128 v79; // [rsp+110h] [rbp-F8h] BYREF
  __int128 v80; // [rsp+120h] [rbp-E8h]
  __int128 v81; // [rsp+130h] [rbp-D8h]
  __int128 v82; // [rsp+140h] [rbp-C8h]
  __int128 v83; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+160h] [rbp-A8h]
  __int64 v85; // [rsp+168h] [rbp-A0h]
  struct _KTHREAD *v86; // [rsp+170h] [rbp-98h]
  struct _KTHREAD *v87; // [rsp+178h] [rbp-90h]
  __int128 v88; // [rsp+188h] [rbp-80h]
  ULONG64 v89; // [rsp+198h] [rbp-70h]
  __int128 v90; // [rsp+1A0h] [rbp-68h]
  __int128 v91; // [rsp+1B0h] [rbp-58h]
  __int128 v92; // [rsp+1C0h] [rbp-48h]
  __int128 v93; // [rsp+1D0h] [rbp-38h]
  __int128 v94; // [rsp+1E0h] [rbp-28h]

  v78 = 0LL;
  v74 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v61 = 0;
  v60 = 0;
  EnterCrit(0LL, 1LL);
  v75 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL, v11, gptiCurrent);
LABEL_3:
    v13 = 0;
    goto LABEL_98;
  }
  if ( !a5 )
  {
LABEL_9:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v16 = *(_DWORD *)a2;
    v58 = *(_DWORD *)a2;
    v17 = *(_QWORD *)(a2 + 8);
    Src = (void *)v17;
    Str1_8 = (void *)v17;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v18 = *(_DWORD *)a3;
    v62 = *(_DWORD *)a3;
    v19 = *(_QWORD *)(a3 + 8);
    v65 = (void *)v19;
    v64 = (void *)v19;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v88 = *(_OWORD *)a4;
    v89 = *(_QWORD *)(a4 + 16);
    v76 = v88;
    v77 = v89;
    v20 = v89;
    if ( v89 >= MmUserProbeAddress )
      v20 = MmUserProbeAddress;
    v57 = *(_DWORD *)v20;
    LODWORD(v78) = *(_DWORD *)v20;
    v66 = *(_QWORD *)(v20 + 8);
    *((_QWORD *)&v78 + 1) = v66;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v90 = *a1;
    v91 = a1[1];
    v92 = a1[2];
    v93 = a1[3];
    v94 = a1[4];
    v79 = v90;
    v80 = v91;
    v81 = v92;
    v82 = v93;
    v83 = v94;
    v21 = v17 & 0xFFFFFFFFFFFF0000uLL;
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_35:
      if ( v21 )
      {
        if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
          ExRaiseStatus(-1073741675);
        Str1_8 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v16 + 2), 2020897621LL);
        if ( !Str1_8 )
          ExRaiseStatus(-1073741801);
        v61 = 1;
        CurrentThread = KeGetCurrentThread();
        v86 = CurrentThread;
        v24 = 0LL;
        v71 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v23)
          || (CurrentProcess = PsGetCurrentProcess(v26, v25, v27),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v24 = *ThreadWin32Thread;
            v71 = *ThreadWin32Thread;
          }
        }
        *(_QWORD *)&v69 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 16) = &v69;
        *((_QWORD *)&v69 + 1) = Str1_8;
        v70 = Win32FreePool;
        memmove(Str1_8, Src, (unsigned __int16)v16);
        *((_WORD *)Str1_8 + ((unsigned __int64)(unsigned __int16)v16 >> 1)) = 0;
      }
      if ( (v19 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_55:
        if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
            ExRaiseStatus(-1073741675);
          v64 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v18 + 2), 2020897621LL);
          if ( !v64 )
            ExRaiseStatus(-1073741801);
          v60 = 1;
          v35 = KeGetCurrentThread();
          v87 = v35;
          v36 = 0LL;
          v73 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v34)
            || (v40 = PsGetCurrentProcess(v38, v37, v39),
                v41 = PsGetProcessSessionIdEx(v40),
                v43 = PsGetCurrentThreadProcess(v42),
                v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
          {
            v44 = (__int64 *)PsGetThreadWin32Thread(v35);
            if ( v44 )
            {
              v36 = *v44;
              v73 = *v44;
            }
          }
          *(_QWORD *)&v67 = *(_QWORD *)(v36 + 16);
          *(_QWORD *)(v36 + 16) = &v67;
          *((_QWORD *)&v67 + 1) = v64;
          v68 = Win32FreePool;
          memmove(v64, v65, (unsigned __int16)v18);
          *((_WORD *)v64 + ((unsigned __int64)(unsigned __int16)v18 >> 1)) = 0;
        }
        v45 = v66;
        if ( (v66 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_75:
          if ( a7 )
            v74 = *a7;
          *(_QWORD *)&v83 = Str1_8;
          v84 = (unsigned __int64)v64;
          *((_QWORD *)&v82 + 1) = v45;
          if ( (*(_DWORD *)(*(_QWORD *)(v75 + 424) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
          {
            if ( (v84 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = (unsigned __int16)UserFindAtom(v84);
            else
              Atom = (unsigned __int16)v84;
            v85 = 0LL;
            if ( (_WORD)Atom )
            {
              v48 = 0LL;
              v49 = (unsigned __int16 *)&unk_1C02E1A76;
              while ( 1 )
              {
                if ( (_WORD)Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v49 - 3) >> 3) & 0x1F) + 868) )
                {
                  v50 = *v49;
                  if ( (_WORD)v50 )
                    break;
                }
                v48 = (unsigned int)(v48 + 1);
                v49 += 24;
                if ( (unsigned int)v48 >= 8 )
                  goto LABEL_93;
              }
              a6 |= v50;
              if ( (a6 & 0x200) != 0 && SDWORD1(v80) < *((_DWORD *)&gDefaultServerClasses + 12 * v48 + 6) )
              {
                UserSetLastError(5LL, (__int64)&gDefaultServerClasses, Atom);
                v13 = 0;
                UserSetLastError(0LL, v51, v52);
                goto LABEL_94;
              }
              v53 = *((_DWORD *)&gDefaultServerClasses + 12 * v48 + 6);
              if ( SDWORD1(v80) >= v53 )
              {
                LODWORD(v85) = v53;
                DWORD1(v80) -= v53;
              }
            }
LABEL_93:
            v13 = RegisterClassEx((__int64)&v79, &v76, a5, a6);
            goto LABEL_94;
          }
LABEL_27:
          v13 = 0;
LABEL_94:
          if ( v60 )
          {
            v54 = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)(v54 + 16) = v67;
            ((void (__fastcall *)(_QWORD))v68)(*((_QWORD *)&v67 + 1));
          }
          if ( v61 )
          {
            v55 = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)(v55 + 16) = v69;
            ((void (__fastcall *)(_QWORD))v70)(*((_QWORD *)&v69 + 1));
          }
          goto LABEL_98;
        }
        if ( (v66 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v46 = (unsigned __int16)v57 + v66 + 2;
        if ( v46 < MmUserProbeAddress && (unsigned __int16)v57 <= HIWORD(v57) )
        {
          if ( (v57 & 1) != 0 )
            goto LABEL_73;
          if ( v46 > v66 )
            goto LABEL_75;
        }
        if ( (v57 & 1) == 0 )
        {
LABEL_74:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_75;
        }
LABEL_73:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9939LL);
        v45 = v66;
        goto LABEL_74;
      }
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = v19 + (unsigned __int16)v18 + 2LL;
      if ( v33 < MmUserProbeAddress && (unsigned __int16)v18 <= HIWORD(v62) )
      {
        if ( (v18 & 1) != 0 )
          goto LABEL_53;
        if ( v33 > v19 )
          goto LABEL_55;
      }
      if ( (v18 & 1) == 0 )
      {
LABEL_54:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_55;
      }
LABEL_53:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9914LL);
      goto LABEL_54;
    }
    if ( (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (unsigned __int16)v16 + v17 + 2;
    if ( v22 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v58) )
    {
      if ( (v16 & 1) != 0 )
        goto LABEL_33;
      if ( v22 > v17 )
        goto LABEL_35;
    }
    if ( (v16 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9889LL);
    goto LABEL_34;
  }
  v12 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v14 = 0;
  v15 = &unk_1C02E1A74;
  while ( *v15 != a5 )
  {
    ++v14;
    v15 += 24;
    if ( v14 >= 8 )
      goto LABEL_9;
  }
  v13 = 0;
  UserSetLastError(87LL, a5, gptiCurrent);
LABEL_98:
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
