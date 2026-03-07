__int64 __fastcall xxxHkCallHook(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 (*v8)(void); // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v16; // r14d
  __int64 v17; // rsi
  int v18; // ebx
  __int64 v19; // rax
  unsigned __int64 *v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rax
  unsigned __int64 *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rax
  int v27; // r14d
  int v28; // edi
  int v29; // r14d
  unsigned int v30; // r15d
  int v31; // r14d
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // rax
  unsigned __int16 v43; // r10
  int v44; // ecx
  __int64 (__fastcall *v45)(int, int, int, int, __int64, __int64); // rdx
  __int64 (__fastcall *v46)(int, int, int, int, __int64, __int64); // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 *v49; // rax
  __int64 (__fastcall *v50)(int, int, int, int, __int64, __int64); // r14
  __int64 v51; // rax
  int v53[2]; // [rsp+50h] [rbp-108h]
  int v55; // [rsp+60h] [rbp-F8h] BYREF
  __int64 (__fastcall *v56)(int, int, int, int, __int64, __int64); // [rsp+68h] [rbp-F0h]
  __int64 v57; // [rsp+70h] [rbp-E8h]
  unsigned int v58; // [rsp+78h] [rbp-E0h]
  __int64 v59; // [rsp+80h] [rbp-D8h]
  __int64 v60; // [rsp+88h] [rbp-D0h] BYREF
  int v61; // [rsp+90h] [rbp-C8h]
  __int64 (*v62)(void); // [rsp+98h] [rbp-C0h]
  __int64 v63; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+B0h] [rbp-A8h]
  _BYTE v66[56]; // [rsp+D8h] [rbp-80h] BYREF

  v5 = a1;
  v6 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v7 = SGDGetUserSessionState(a1);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) != 1 )
    {
      v37 = SGDGetUserSessionState(a1);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 8))
        || (ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
         && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)
          ? (v38 = 0)
          : (v38 = 1),
            !v38) )
      {
        __int2c();
      }
    }
  }
  v8 = *(__int64 (**)(void))(v5 + 56);
  if ( v8 )
  {
    if ( *(_DWORD *)(v5 + 68) == -1 )
    {
      LODWORD(v12) = -1;
    }
    else
    {
      v9 = SGDGetUserSessionState(a1);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v9 + 8)) )
      {
        v55 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      }
      v10 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
      v12 = *(int *)(v5 + 68);
      v8 = (__int64 (*)(void))(*(_QWORD *)(v5 + 56) + *(_QWORD *)(*(_QWORD *)(v10 + 424) + 8 * v12 + 400));
    }
    if ( (_DWORD)v12 != -1 )
    {
      v13 = 0LL;
      v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v14 )
        v13 = *v14;
      a1 = *(_QWORD *)(v13 + 480);
      *(_QWORD *)(a1 + 224) |= 0x200uLL;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    v58 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v16 = *(_DWORD *)(v5 + 64);
    if ( (v16 & 2) != 0 )
      v17 = gpsi + 392LL;
    else
      v17 = gpsi + 584LL;
    v18 = *(_DWORD *)(v5 + 48);
    if ( v18 == 4 )
    {
      v59 = a4;
      v19 = *(_QWORD *)(a4 + 32);
      v20 = 0LL;
LABEL_21:
      *(_QWORD *)v53 = v19;
      if ( !v19 || (*(_DWORD *)(v19 + 84) & 5) == 0 )
      {
        v21 = 0LL;
        v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v22 )
          v21 = *v22;
        v23 = *(unsigned __int64 **)(v21 + 480);
        if ( *(_DWORD *)(v5 + 48) == 4 )
        {
          v57 = *(_QWORD *)(v17 + 136);
        }
        else
        {
          v57 = *(_QWORD *)(v17 + 144);
          v23[13] = *v20;
        }
        v24 = *v23;
        v25 = *v23 & 0x10;
        v63 = v25;
        v65 = v23[13];
        v64 = v65;
        if ( a3 )
          v26 = v24 | 0x10;
        else
          v26 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
        *v23 = v26;
        v27 = *(_DWORD *)(v5 + 64);
        v28 = *(_DWORD *)(v5 + 48);
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v66);
        v29 = v27 & 2;
        v55 = v29;
        if ( v28 == 4 )
        {
          v30 = *(_DWORD *)(v59 + 16);
          if ( (v30 & 0x1FFFF) >= 0x400 )
          {
            v39 = *(_QWORD *)v59;
            v40 = *(_QWORD *)(v59 + 8);
            v41 = (__int64 *)_HMObjectFromHandle(*(_QWORD *)(v59 + 24));
            v35 = SfnDWORD(v41, v30, v40, v39, (__int64)v8, v57);
          }
          else
          {
            v56 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v30]];
            if ( v29 )
              v31 = 3;
            else
              v31 = 2;
            v32 = *(_QWORD *)v59;
            v33 = *(_QWORD *)(v59 + 8);
            v34 = _HMObjectFromHandle(*(_QWORD *)(v59 + 24));
            v35 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (*)(void), __int64, int, _QWORD))v56)(
                    v34,
                    v30,
                    v33,
                    v32,
                    v8,
                    v57,
                    v31,
                    *(_QWORD *)v53);
          }
        }
        else
        {
          v45 = v56;
          v46 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64))*((unsigned int *)v56 + 6);
          v56 = v46;
          v47 = *((_QWORD *)v45 + 1);
          v48 = *((_QWORD *)v45 + 2);
          if ( ((unsigned int)v46 & 0x1FFFF) < 0x400 )
          {
            v50 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v46]];
            v51 = _HMObjectFromHandle(*((_QWORD *)v45 + 4));
            LOBYTE(v6) = v55 != 0;
            v35 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (*)(void), __int64, int, _QWORD))v50)(
                    v51,
                    (unsigned int)v56,
                    v48,
                    v47,
                    v8,
                    v57,
                    (int)v6 + 2,
                    *(_QWORD *)v53);
          }
          else
          {
            v49 = (__int64 *)_HMObjectFromHandle(*((_QWORD *)v45 + 4));
            v35 = SfnDWORD(v49, (int)v56, v48, v47, (__int64)v8, v57);
          }
        }
        v6 = v35;
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v66);
        *v23 ^= ((unsigned __int8)v25 ^ (unsigned __int8)*v23) & 0x10;
        v23[13] = v65;
      }
      goto LABEL_35;
    }
    switch ( v18 )
    {
      case -1:
      case 6:
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v66);
        v6 = CallfnHkINLPMSG(a2, v18, a3, a4, v8, (struct _PFNCLIENT *)v17, v16);
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v66);
        goto LABEL_35;
      case 0:
        v42 = fnHkOPTINLPEVENTMSG(
                (unsigned __int16)a2 | ((unsigned __int16)v18 << 16),
                a3,
                a4,
                (_DWORD)v8,
                *(_QWORD *)(v17 + 152));
        goto LABEL_50;
      case 1:
        v42 = fnHkOPTINLPEVENTMSG(
                (unsigned __int16)a2 | ((unsigned __int16)v18 << 16),
                *(_QWORD *)v5,
                a4,
                (_DWORD)v8,
                *(_QWORD *)(v17 + 152));
        *(_DWORD *)(v5 + 64) &= ~4u;
        goto LABEL_50;
      case 2:
      case 11:
        v43 = a2;
        goto LABEL_68;
      case 3:
        v55 = *(_DWORD *)(v5 + 64);
        if ( (v16 & 2) != 0 )
          LODWORD(v6) = 1;
        v42 = fnHkINLPMSG(
                (unsigned __int16)a2 | ((unsigned __int16)v18 << 16),
                a3,
                a4,
                (_DWORD)v8,
                *(_QWORD *)(v17 + 152),
                v6,
                (__int64)&v55);
        goto LABEL_50;
      case 5:
        v43 = a2;
        if ( a2 )
        {
          switch ( a2 )
          {
            case 3:
              LOBYTE(v6) = (v16 & 2) != 0;
              v42 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v18 << 16) | 3u, a3, a4, (_DWORD)v8, v6);
              break;
            case 5:
              v42 = fnHkINLPCBTACTIVATESTRUCT(
                      ((unsigned __int16)v18 << 16) | 5u,
                      a3,
                      a4,
                      (_DWORD)v8,
                      *(_QWORD *)(v17 + 152));
              break;
            case 6:
LABEL_52:
              v6 = fnHkINLPMOUSEHOOKSTRUCTEX(
                     v43 | ((unsigned __int16)v18 << 16),
                     a3,
                     (__int128 *)a4,
                     (__int64)v8,
                     *(_QWORD *)(v17 + 152),
                     (int *)(v5 + 64));
LABEL_35:
              W32SetCurrentThreadDpiAwarenessContext(v58);
              return v6;
            default:
LABEL_68:
              v42 = fnHkINDWORD(
                      v43 | ((unsigned __int16)v18 << 16),
                      a3,
                      a4,
                      (_DWORD)v8,
                      *(_QWORD *)(v17 + 152),
                      v5 + 64);
              break;
          }
        }
        else
        {
          v44 = (unsigned __int16)v18 << 16;
LABEL_64:
          v42 = fnHkINLPRECT(v44, a3, a4, (_DWORD)v8, *(_QWORD *)(v17 + 152));
        }
LABEL_50:
        v6 = v42;
        goto LABEL_35;
      case 7:
        v43 = a2;
        goto LABEL_52;
      case 9:
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v66);
        v6 = fnHkINLPDEBUGHOOKSTRUCT(
               (unsigned __int16)a2 | ((unsigned __int16)v18 << 16),
               a3,
               a4,
               v8,
               *(_QWORD *)(v17 + 152));
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v66);
        goto LABEL_35;
      case 10:
        v43 = a2;
        if ( a2 != 5 )
          goto LABEL_68;
        v44 = ((unsigned __int16)v18 << 16) | 5;
        goto LABEL_64;
      case 12:
        v20 = (unsigned __int64 *)a4;
        v56 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64))a4;
        v19 = *(_QWORD *)(a4 + 40);
        goto LABEL_21;
      case 13:
        v60 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v61 = v18;
        v62 = v8;
        *(_DWORD *)(gptiCurrent + 696LL) = 1;
        v6 = fnHkINLPKBDLLHOOKSTRUCT(
               (unsigned __int16)a2 | (*(unsigned __int16 *)(v5 + 48) << 16),
               a3,
               a4,
               (_DWORD)v8,
               *(_QWORD *)(v17 + 152));
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v60);
        goto LABEL_35;
      case 14:
        v60 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v61 = v18;
        v62 = v8;
        *(_DWORD *)(gptiCurrent + 696LL) = 1;
        v6 = fnHkINLPMSLLHOOKSTRUCT(
               (unsigned __int16)a2 | (*(unsigned __int16 *)(v5 + 48) << 16),
               a3,
               a4,
               (_DWORD)v8,
               *(_QWORD *)(v17 + 152));
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v60);
        goto LABEL_35;
      default:
        goto LABEL_35;
    }
  }
  return 0LL;
}
