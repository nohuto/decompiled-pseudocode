__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v10; // r14
  int v11; // ebx
  unsigned __int64 v12; // r15
  int v13; // esi
  unsigned __int64 v14; // r12
  ULONG64 v15; // rcx
  ULONG64 v16; // r8
  ULONG64 v17; // rcx
  __int64 v18; // r13
  __int64 *ThreadWin32Thread; // rax
  wchar_t *v20; // r13
  ULONG64 v21; // rdx
  __int64 v22; // rbx
  __int64 *v23; // rax
  unsigned __int64 v24; // rdi
  ULONG64 v25; // rdx
  __int64 v26; // rcx
  __int16 Atom; // r8
  unsigned int v28; // eax
  unsigned __int16 *v29; // rdx
  unsigned __int16 v30; // di
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 *v33; // rax
  unsigned int v35; // ecx
  _WORD *v36; // rax
  int v37; // ecx
  int v38; // ecx
  int v39; // [rsp+20h] [rbp-1A8h]
  int v40; // [rsp+24h] [rbp-1A4h]
  int v41; // [rsp+28h] [rbp-1A0h]
  int v42; // [rsp+2Ch] [rbp-19Ch]
  int v43; // [rsp+30h] [rbp-198h]
  wchar_t *Str1_8; // [rsp+48h] [rbp-180h]
  void *v45; // [rsp+58h] [rbp-170h]
  ULONG64 v46; // [rsp+60h] [rbp-168h]
  __int128 v47; // [rsp+68h] [rbp-160h] BYREF
  void (*v48)(void *); // [rsp+78h] [rbp-150h]
  __int128 v49; // [rsp+80h] [rbp-148h] BYREF
  void (*v50)(void *); // [rsp+90h] [rbp-138h]
  __int64 v51; // [rsp+A0h] [rbp-128h]
  __int128 v52; // [rsp+A8h] [rbp-120h] BYREF
  ULONG64 v53; // [rsp+B8h] [rbp-110h]
  __int128 v54; // [rsp+C0h] [rbp-108h]
  __int128 v55; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v56; // [rsp+E0h] [rbp-E8h]
  __int128 v57; // [rsp+F0h] [rbp-D8h]
  __int128 v58; // [rsp+100h] [rbp-C8h]
  __int128 v59; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v60; // [rsp+120h] [rbp-A8h]
  __int64 v61; // [rsp+128h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-98h]
  struct _KTHREAD *v63; // [rsp+138h] [rbp-90h]
  __int128 v64; // [rsp+148h] [rbp-80h]
  ULONG64 v65; // [rsp+158h] [rbp-70h]
  __int128 v66; // [rsp+160h] [rbp-68h]
  __int128 v67; // [rsp+170h] [rbp-58h]
  __int128 v68; // [rsp+180h] [rbp-48h]
  __int128 v69; // [rsp+190h] [rbp-38h]
  __int128 v70; // [rsp+1A0h] [rbp-28h]

  v54 = 0LL;
  memset_0(&v55, 0, 0x60uLL);
  v52 = 0LL;
  v53 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v10 = 0LL;
  v42 = 0;
  v41 = 0;
  EnterCrit(0LL, 0LL);
  v51 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_87:
    v30 = 0;
    goto LABEL_85;
  }
  if ( !a5 )
  {
LABEL_3:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_87;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_DWORD *)a2;
    v40 = *(_DWORD *)a2;
    v12 = *(_QWORD *)(a2 + 8);
    Str1_8 = (wchar_t *)v12;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v13 = *(_DWORD *)a3;
    v43 = *(_DWORD *)a3;
    v14 = *(_QWORD *)(a3 + 8);
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v64 = *(_OWORD *)a4;
    v65 = *(_QWORD *)(a4 + 16);
    v52 = v64;
    v53 = v65;
    v15 = v65;
    if ( v65 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    v39 = *(_DWORD *)v15;
    LODWORD(v54) = *(_DWORD *)v15;
    v16 = *(_QWORD *)(v15 + 8);
    v46 = v16;
    *((_QWORD *)&v54 + 1) = v16;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v66 = *a1;
    v67 = a1[1];
    v68 = a1[2];
    v69 = a1[3];
    v70 = a1[4];
    v55 = v66;
    v56 = v67;
    v57 = v68;
    v58 = v69;
    v59 = v70;
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v12 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int16)v11 + v12 + 2;
      if ( v17 <= v12 || v17 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v11 > HIWORD(v40) || (v11 & 1) != 0 )
      {
        if ( (v11 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10231LL);
        ExRaiseAccessViolation();
      }
    }
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v11 + 2) < (unsigned __int16)v11 )
        ExRaiseStatus(-1073741675);
      Str1_8 = (wchar_t *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v11 + 2), 2020897621LL);
      if ( !Str1_8 )
        ExRaiseStatus(-1073741801);
      v42 = 1;
      CurrentThread = KeGetCurrentThread();
      v18 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
      *(_QWORD *)&v49 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)(v18 + 16) = &v49;
      v20 = Str1_8;
      *((_QWORD *)&v49 + 1) = Str1_8;
      v50 = Win32FreePool;
      memmove(Str1_8, (const void *)v12, (unsigned __int16)v11);
      Str1_8[(unsigned __int64)(unsigned __int16)v11 >> 1] = 0;
      v16 = v46;
    }
    else
    {
      v20 = (wchar_t *)v12;
    }
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v14 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (unsigned __int16)v13 + v14 + 2;
      if ( v21 <= v14 || v21 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v13 > HIWORD(v43) || (v13 & 1) != 0 )
      {
        if ( (v13 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10256LL);
        ExRaiseAccessViolation();
      }
    }
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v13 + 2) < (unsigned __int16)v13 )
        ExRaiseStatus(-1073741675);
      v45 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v13 + 2), 2020897621LL);
      if ( !v45 )
        ExRaiseStatus(-1073741801);
      v41 = 1;
      v63 = KeGetCurrentThread();
      v22 = 0LL;
      v23 = (__int64 *)PsGetThreadWin32Thread(v63);
      if ( v23 )
        v22 = *v23;
      *(_QWORD *)&v47 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)(v22 + 16) = &v47;
      v24 = (unsigned __int64)v45;
      *((_QWORD *)&v47 + 1) = v45;
      v48 = Win32FreePool;
      memmove(v45, (const void *)v14, (unsigned __int16)v13);
      *((_WORD *)v45 + ((unsigned __int64)(unsigned __int16)v13 >> 1)) = 0;
      v20 = Str1_8;
      v16 = v46;
    }
    else
    {
      v24 = v14;
    }
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = v16 + (unsigned __int16)v39 + 2LL;
      if ( v25 <= v16 || v25 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v39 > HIWORD(v39) || (v39 & 1) != 0 )
      {
        if ( (v39 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10281LL);
        ExRaiseAccessViolation();
      }
    }
    *(_QWORD *)&v59 = v20;
    v60 = v24;
    *((_QWORD *)&v58 + 1) = v16;
    if ( (*(_DWORD *)(*(_QWORD *)(v51 + 424) + 12LL) & 0x2000) != 0 )
      goto LABEL_70;
    if ( (unsigned int)RegisterDefaultClass(v20) )
    {
      v24 = v60;
LABEL_70:
      if ( (v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v24);
      else
        Atom = v60;
      v61 = 0LL;
      if ( Atom )
      {
        v28 = 0;
        v29 = (unsigned __int16 *)&unk_1C030A986;
        while ( 1 )
        {
          if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v29 - 3) >> 3) & 0x1F) + 868) )
          {
            v37 = *v29;
            if ( (_WORD)v37 )
              break;
          }
          ++v28;
          v29 += 24;
          if ( v28 >= 8 )
            goto LABEL_76;
        }
        a6 |= v37;
        if ( (a6 & 0x200) != 0 && SDWORD1(v56) < *((_DWORD *)&gDefaultServerClasses + 12 * v28 + 6) )
        {
          UserSetLastError(5LL);
          v30 = 0;
          UserSetLastError(0LL);
          goto LABEL_77;
        }
        v38 = *((_DWORD *)&gDefaultServerClasses + 12 * v28 + 6);
        if ( SDWORD1(v56) >= v38 )
        {
          LODWORD(v61) = *((_DWORD *)&gDefaultServerClasses + 12 * v28 + 6);
          DWORD1(v56) -= v38;
        }
      }
LABEL_76:
      v30 = RegisterClassEx(&v55, &v52, a5, a6);
LABEL_77:
      if ( v41 )
      {
        v31 = 0LL;
        v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v32 )
          v31 = *v32;
        *(_QWORD *)(v31 + 16) = v47;
        ((void (__fastcall *)(_QWORD))v48)(*((_QWORD *)&v47 + 1));
      }
      if ( v42 )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v33 )
          v10 = *v33;
        *(_QWORD *)(v10 + 16) = v49;
        ((void (__fastcall *)(_QWORD))v50)(*((_QWORD *)&v49 + 1));
      }
      goto LABEL_85;
    }
LABEL_94:
    v30 = 0;
    goto LABEL_77;
  }
  v26 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_94;
  v35 = 0;
  v36 = &unk_1C030A984;
  while ( *v36 != a5 )
  {
    ++v35;
    v36 += 24;
    if ( v35 >= 8 )
      goto LABEL_3;
  }
  v30 = 0;
  UserSetLastError(87LL);
LABEL_85:
  UserSessionSwitchLeaveCrit(v26);
  return v30;
}
