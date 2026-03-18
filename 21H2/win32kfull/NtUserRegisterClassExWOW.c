/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00615D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _RegisterClassEx @ 0x1C0061460 (_RegisterClassEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C0061D64 (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C0104B1C (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        unsigned __int64 a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        __int16 a5,
        unsigned int a6,
        __int64 *a7)
{
  int v10; // ebx
  unsigned __int64 v11; // r8
  int v12; // r12d
  unsigned __int64 v13; // rdi
  ULONG64 v14; // rdx
  ULONG64 v15; // r13
  __int128 *v16; // rcx
  unsigned __int64 v17; // r15
  ULONG64 v18; // rcx
  __int64 ThreadWin32Thread; // rax
  ULONG64 v20; // rcx
  __int64 v21; // rax
  ULONG64 v22; // rcx
  __int64 v23; // rcx
  __int16 Atom; // r8
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdx
  unsigned __int16 v27; // bx
  unsigned int v29; // ecx
  _WORD *v30; // rax
  int v31; // eax
  int v32; // ecx
  int v33; // [rsp+30h] [rbp-1B8h]
  int v34; // [rsp+34h] [rbp-1B4h]
  int v35; // [rsp+38h] [rbp-1B0h]
  int v36; // [rsp+3Ch] [rbp-1ACh]
  int v37; // [rsp+40h] [rbp-1A8h]
  void *Str1_8; // [rsp+58h] [rbp-190h]
  void *v39; // [rsp+68h] [rbp-180h]
  __int128 v40; // [rsp+78h] [rbp-170h] BYREF
  __int64 (__fastcall *v41)(_QWORD); // [rsp+88h] [rbp-160h]
  __int128 v42; // [rsp+90h] [rbp-158h] BYREF
  __int64 (__fastcall *v43)(_QWORD); // [rsp+A0h] [rbp-148h]
  void *Src; // [rsp+B0h] [rbp-138h]
  __int64 v45; // [rsp+B8h] [rbp-130h]
  __int64 v46; // [rsp+C0h] [rbp-128h]
  __int128 v47; // [rsp+C8h] [rbp-120h] BYREF
  ULONG64 v48; // [rsp+D8h] [rbp-110h]
  _OWORD v49[6]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v50; // [rsp+140h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-98h]
  struct _KTHREAD *v52; // [rsp+158h] [rbp-90h]
  __int128 v53; // [rsp+168h] [rbp-80h]
  ULONG64 v54; // [rsp+178h] [rbp-70h]
  __int128 v55; // [rsp+180h] [rbp-68h]
  __int128 v56; // [rsp+190h] [rbp-58h]
  __int128 v57; // [rsp+1A0h] [rbp-48h]
  __int128 v58; // [rsp+1B0h] [rbp-38h]
  __int128 v59; // [rsp+1C0h] [rbp-28h]

  v50 = 0LL;
  memset(v49, 0, sizeof(v49));
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v35 = 0;
  v34 = 0;
  EnterCrit(0LL, 0LL);
  v46 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_80:
    v27 = 0;
    goto LABEL_73;
  }
  if ( !a5 )
  {
LABEL_3:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_80;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v10 = *(_DWORD *)a2;
    v36 = *(_DWORD *)a2;
    v11 = *(_QWORD *)(a2 + 8);
    Src = (void *)v11;
    Str1_8 = (void *)v11;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v12 = *(_DWORD *)a3;
    v37 = *(_DWORD *)a3;
    v13 = *(_QWORD *)(a3 + 8);
    v39 = (void *)v13;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v53 = *(_OWORD *)a4;
    v54 = *(_QWORD *)(a4 + 16);
    v47 = v53;
    v48 = v54;
    v14 = v54;
    if ( v54 >= MmUserProbeAddress )
      v14 = MmUserProbeAddress;
    v33 = *(_DWORD *)v14;
    LODWORD(v50) = *(_DWORD *)v14;
    v15 = *(_QWORD *)(v14 + 8);
    *((_QWORD *)&v50 + 1) = v15;
    v16 = (__int128 *)a1;
    if ( a1 + 80 < a1 || a1 + 80 > MmUserProbeAddress )
      v16 = (__int128 *)MmUserProbeAddress;
    v55 = *v16;
    v56 = v16[1];
    v57 = v16[2];
    v58 = v16[3];
    v59 = v16[4];
    v49[0] = v55;
    v49[1] = v56;
    v49[2] = v57;
    v49[3] = v58;
    v49[4] = v59;
    v17 = v11 & 0xFFFFFFFFFFFF0000uLL;
    if ( (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_20:
      if ( v17 )
      {
        if ( (unsigned __int16)(v10 + 2) < (unsigned __int16)v10 )
          ExRaiseStatus(-1073741675);
        Str1_8 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v10 + 2), 2020897621LL);
        if ( !Str1_8 )
          ExRaiseStatus(-1073741801);
        v35 = 1;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
        *(_QWORD *)&v42 = *(_QWORD *)(ThreadWin32Thread + 16);
        *(_QWORD *)(ThreadWin32Thread + 16) = &v42;
        *((_QWORD *)&v42 + 1) = Str1_8;
        v43 = Win32FreePool;
        memmove(Str1_8, Src, (unsigned __int16)v10);
        *((_WORD *)Str1_8 + ((unsigned __int64)(unsigned __int16)v10 >> 1)) = 0;
      }
      if ( (v13 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_30:
        if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          if ( (unsigned __int16)(v12 + 2) < (unsigned __int16)v12 )
            ExRaiseStatus(-1073741675);
          v39 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v12 + 2), 2020897621LL);
          if ( !v39 )
            ExRaiseStatus(-1073741801);
          v34 = 1;
          v52 = KeGetCurrentThread();
          v21 = W32GetThreadWin32Thread((__int64)v52);
          *(_QWORD *)&v40 = *(_QWORD *)(v21 + 16);
          *(_QWORD *)(v21 + 16) = &v40;
          *((_QWORD *)&v40 + 1) = v39;
          v41 = Win32FreePool;
          memmove(v39, (const void *)v13, (unsigned __int16)v12);
          *((_WORD *)v39 + ((unsigned __int64)(unsigned __int16)v12 >> 1)) = 0;
        }
        if ( (v15 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_35:
          if ( a7 )
            v45 = *a7;
          *(_QWORD *)&v49[4] = Str1_8;
          *(_QWORD *)&v49[5] = v39;
          *((_QWORD *)&v49[3] + 1) = v15;
          if ( (*(_DWORD *)(*(_QWORD *)(v46 + 424) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
          {
            if ( (*(_QWORD *)&v49[5] & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(*(_QWORD *)&v49[5]);
            else
              Atom = v49[5];
            *((_QWORD *)&v49[5] + 1) = 0LL;
            if ( Atom )
            {
              v25 = 0LL;
              v26 = (unsigned __int16 *)&unk_1C02DD626;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v26 - 3) >> 3) & 0x1F) + 868) )
                {
                  v31 = *v26;
                  if ( (_WORD)v31 )
                    break;
                }
                v25 = (unsigned int)(v25 + 1);
                v26 += 24;
                if ( (unsigned int)v25 >= 8 )
                  goto LABEL_68;
              }
              a6 |= v31;
              if ( (a6 & 0x200) != 0 && SDWORD1(v49[1]) < *((_DWORD *)&gDefaultServerClasses + 12 * v25 + 6) )
              {
                UserSetLastError(5LL);
                v27 = 0;
                UserSetLastError(0LL);
                goto LABEL_69;
              }
              v32 = *((_DWORD *)&gDefaultServerClasses + 12 * v25 + 6);
              if ( SDWORD1(v49[1]) >= v32 )
              {
                DWORD2(v49[5]) = v32;
                DWORD1(v49[1]) -= v32;
              }
            }
LABEL_68:
            v27 = RegisterClassEx((__int64)v49, &v47, a5, a6);
LABEL_69:
            if ( v34 )
              PopAndFreeAlwaysW32ThreadLock(&v40);
            if ( v35 )
              PopAndFreeAlwaysW32ThreadLock(&v42);
            goto LABEL_73;
          }
LABEL_82:
          v27 = 0;
          goto LABEL_69;
        }
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v15 + (unsigned __int16)v33 + 2LL;
        if ( v22 < MmUserProbeAddress && (unsigned __int16)v33 <= HIWORD(v33) )
        {
          if ( (v33 & 1) != 0 )
            goto LABEL_43;
          if ( v22 > v15 )
            goto LABEL_35;
        }
        if ( (v33 & 1) == 0 )
        {
LABEL_44:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_35;
        }
LABEL_43:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
        goto LABEL_44;
      }
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = v13 + (unsigned __int16)v12 + 2LL;
      if ( v20 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v37) )
      {
        if ( (v12 & 1) != 0 )
          goto LABEL_55;
        if ( v20 > v13 )
          goto LABEL_30;
      }
      if ( (v12 & 1) == 0 )
      {
LABEL_56:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_30;
      }
LABEL_55:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      goto LABEL_56;
    }
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (unsigned __int16)v10 + v11 + 2;
    if ( v18 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v36) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_49;
      if ( v18 > v11 )
        goto LABEL_20;
    }
    if ( (v10 & 1) == 0 )
    {
LABEL_50:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_20;
    }
LABEL_49:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    goto LABEL_50;
  }
  v23 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_82;
  v29 = 0;
  v30 = &unk_1C02DD624;
  while ( *v30 != a5 )
  {
    ++v29;
    v30 += 24;
    if ( v29 >= 8 )
      goto LABEL_3;
  }
  v27 = 0;
  UserSetLastError(87LL);
LABEL_73:
  UserSessionSwitchLeaveCrit(v23);
  return v27;
}
