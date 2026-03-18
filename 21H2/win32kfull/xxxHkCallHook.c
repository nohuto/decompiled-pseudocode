/*
 * XREFs of xxxHkCallHook @ 0x1C0053C4C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     fnHkINDWORD @ 0x1C0075DA8 (fnHkINDWORD.c)
 *     fnHkINLPMSG @ 0x1C0076120 (fnHkINLPMSG.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0104010 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0 (fnHkINLPCBTCREATESTRUCT.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C014095C (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ?CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z @ 0x1C0140CEC (-CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C01509E8 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C015A1F8 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C016DE3E (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C022AAE4 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C022AC78 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C022AF14 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C022B0C0 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0242DB4 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 (*v8)(void); // r15
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v15; // edx
  __int64 v16; // rdi
  int v17; // esi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 *v22; // rax
  unsigned __int64 *v23; // r13
  unsigned __int64 v24; // rax
  __int64 (__fastcall *v25)(int, int, int, int, __int64, __int64); // rsi
  unsigned __int64 v26; // rax
  int v27; // ebx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 *v31; // rax
  int v32; // edx
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // r14d
  unsigned int v43; // [rsp+50h] [rbp-108h]
  unsigned int v44; // [rsp+58h] [rbp-100h] BYREF
  __int64 v45; // [rsp+60h] [rbp-F8h]
  __int64 v46; // [rsp+68h] [rbp-F0h]
  unsigned int v47; // [rsp+70h] [rbp-E8h]
  __int64 v48; // [rsp+78h] [rbp-E0h]
  __int64 (__fastcall *v49)(int, int, int, int, __int64, __int64); // [rsp+80h] [rbp-D8h]
  __int64 v50; // [rsp+88h] [rbp-D0h] BYREF
  int v51; // [rsp+90h] [rbp-C8h]
  __int64 (*v52)(void); // [rsp+98h] [rbp-C0h]
  __int64 (__fastcall *v53)(int, int, int, int, __int64, __int64); // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-A8h]
  _BYTE v56[56]; // [rsp+D8h] [rbp-80h] BYREF

  v7 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
     || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
     && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)) )
  {
    __int2c();
  }
  v8 = *(__int64 (**)(void))(a1 + 56);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 68) != -1 )
    {
      v9 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
      v11 = *(int *)(a1 + 68);
      v8 = (__int64 (*)(void))(*(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v9 + 424) + 8 * v11 + 408));
      if ( (_DWORD)v11 != -1 )
      {
        v12 = 0LL;
        v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v13 )
          v12 = *v13;
        *(_QWORD *)(*(_QWORD *)(v12 + 480) + 224LL) |= 0x200uLL;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v47 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v15 = *(_DWORD *)(a1 + 64);
    v44 = v15;
    if ( (v15 & 2) != 0 )
      v16 = gpsi + 392LL;
    else
      v16 = gpsi + 584LL;
    v17 = *(_DWORD *)(a1 + 48);
    if ( v17 > 6 )
    {
      if ( v17 == 7 )
        goto LABEL_61;
      if ( v17 != 9 )
      {
        if ( v17 == 10 )
        {
          if ( a2 == 5 )
          {
            v39 = ((unsigned __int16)v17 << 16) | 5;
            goto LABEL_65;
          }
        }
        else if ( v17 != 11 )
        {
          if ( v17 != 12 )
          {
            if ( v17 == 13 )
            {
              v50 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              v51 = 13;
              v52 = v8;
              *(_DWORD *)(gptiCurrent + 696LL) = 1;
              v40 = fnHkINLPKBDLLHOOKSTRUCT(
                      (unsigned __int16)a2 | (*(unsigned __int16 *)(a1 + 48) << 16),
                      a3,
                      a4,
                      (_DWORD)v8,
                      *(_QWORD *)(v16 + 152));
            }
            else
            {
              if ( v17 != 14 )
                goto LABEL_39;
              v50 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              v51 = 14;
              v52 = v8;
              *(_DWORD *)(gptiCurrent + 696LL) = 1;
              v40 = fnHkINLPMSLLHOOKSTRUCT(
                      (unsigned __int16)a2 | (*(unsigned __int16 *)(a1 + 48) << 16),
                      a3,
                      a4,
                      (_DWORD)v8,
                      *(_QWORD *)(v16 + 152));
            }
            v7 = v40;
            CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v50);
            goto LABEL_39;
          }
          v18 = 0;
          v19 = *(_QWORD *)(a4 + 40);
LABEL_22:
          v45 = v19;
          v20 = 0LL;
          if ( !v18 )
            v20 = a4;
          v48 = v20;
          if ( !v18 )
            a4 = 0LL;
          if ( v19 && (*(_DWORD *)(v19 + 84) & 5) != 0 )
            goto LABEL_39;
          v21 = 0LL;
          v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v22 )
            v21 = *v22;
          v23 = *(unsigned __int64 **)(v21 + 480);
          if ( *(_DWORD *)(a1 + 48) == 4 )
          {
            v46 = *(_QWORD *)(v16 + 136);
          }
          else
          {
            v46 = *(_QWORD *)(v16 + 144);
            v23[13] = *(_QWORD *)v48;
          }
          v24 = *v23;
          v25 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64))(*v23 & 0x10);
          v49 = v25;
          v53 = v25;
          v55 = v23[13];
          v54 = v55;
          if ( a3 )
            v26 = v24 | 0x10;
          else
            v26 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
          *v23 = v26;
          v44 = *(_DWORD *)(a1 + 64);
          v27 = *(_DWORD *)(a1 + 48);
          SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v56);
          if ( v27 == 4 )
          {
            v28 = *(_DWORD *)(a4 + 16);
            v43 = v28;
            v29 = *(_QWORD *)a4;
            v30 = *(_QWORD *)(a4 + 8);
            if ( (v28 & 0x1FFFF) >= 0x400 )
            {
              v31 = (__int64 *)_HMObjectFromHandle(*(_QWORD *)(a4 + 24));
              v32 = v43;
LABEL_37:
              v33 = SfnDWORD(v31, v32, v30, v29, (__int64)v8, v46);
LABEL_38:
              v7 = v33;
              SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v56);
              *v23 ^= ((unsigned __int8)v25 ^ (unsigned __int8)*v23) & 0x10;
              v23[13] = v55;
LABEL_39:
              W32SetCurrentThreadDpiAwarenessContext(v47);
              return v7;
            }
            v25 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v28]];
            v35 = _HMObjectFromHandle(*(_QWORD *)(a4 + 24));
            v36 = v43;
          }
          else
          {
            v41 = *(_DWORD *)(v48 + 24);
            v29 = *(_QWORD *)(v48 + 8);
            v30 = *(_QWORD *)(v48 + 16);
            if ( (v41 & 0x1FFFF) >= 0x400 )
            {
              v31 = (__int64 *)_HMObjectFromHandle(*(_QWORD *)(v48 + 32));
              v32 = v41;
              goto LABEL_37;
            }
            v25 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v41]];
            v35 = _HMObjectFromHandle(*(_QWORD *)(v48 + 32));
            v36 = v41;
          }
          v33 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 (*)(void), __int64, unsigned int, __int64))v25)(
                  v35,
                  v36,
                  v30,
                  v29,
                  v8,
                  v46,
                  (unsigned int)((v44 & 2) != 0) + 2,
                  v45);
          LOBYTE(v25) = (_BYTE)v49;
          goto LABEL_38;
        }
LABEL_57:
        v37 = fnHkINDWORD(
                (unsigned __int16)a2 | ((unsigned __int16)v17 << 16),
                a3,
                a4,
                (_DWORD)v8,
                *(_QWORD *)(v16 + 152),
                a1 + 64);
        goto LABEL_49;
      }
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v56);
      v38 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)a2 | 0x90000u, a3, a4, v8, *(_QWORD *)(v16 + 152));
    }
    else
    {
      if ( v17 != 6 && v17 != -1 )
      {
        if ( !v17 )
        {
          v37 = fnHkOPTINLPEVENTMSG((unsigned __int16)a2, a3, a4, (_DWORD)v8, *(_QWORD *)(v16 + 152));
          goto LABEL_49;
        }
        if ( v17 == 3 )
        {
          v44 = v15;
          v37 = fnHkINLPMSG(
                  (unsigned __int16)a2 | 0x30000u,
                  a3,
                  a4,
                  (_DWORD)v8,
                  *(_QWORD *)(v16 + 152),
                  (v15 >> 1) & 1,
                  (__int64)&v44);
LABEL_49:
          v7 = v37;
          goto LABEL_39;
        }
        if ( v17 != 2 )
        {
          if ( v17 == 1 )
          {
            v37 = fnHkOPTINLPEVENTMSG(
                    (unsigned __int16)a2 | 0x10000u,
                    *(_QWORD *)a1,
                    a4,
                    (_DWORD)v8,
                    *(_QWORD *)(v16 + 152));
            *(_DWORD *)(a1 + 64) &= ~4u;
            goto LABEL_49;
          }
          v18 = v17 == 4;
          if ( v17 == 4 )
          {
            v19 = *(_QWORD *)(a4 + 32);
            goto LABEL_22;
          }
          if ( v17 != 5 )
            goto LABEL_39;
          if ( a2 )
          {
            if ( a2 == 3 )
            {
              LOBYTE(v7) = (v15 & 2) != 0;
              v37 = fnHkINLPCBTCREATESTRUCT(327683, a3, a4, (_DWORD)v8, v7);
              goto LABEL_49;
            }
            if ( a2 == 5 )
            {
              v37 = fnHkINLPCBTACTIVATESTRUCT(327685, a3, a4, (_DWORD)v8, *(_QWORD *)(v16 + 152));
              goto LABEL_49;
            }
            if ( a2 != 6 )
              goto LABEL_57;
LABEL_61:
            v37 = fnHkINLPMOUSEHOOKSTRUCTEX(
                    (unsigned __int16)a2 | ((unsigned __int16)v17 << 16),
                    a3,
                    a4,
                    (_DWORD)v8,
                    *(_QWORD *)(v16 + 152),
                    a1 + 64);
            goto LABEL_49;
          }
          v39 = 327680;
LABEL_65:
          v37 = fnHkINLPRECT(v39, a3, a4, (_DWORD)v8, *(_QWORD *)(v16 + 152));
          goto LABEL_49;
        }
        goto LABEL_57;
      }
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v56);
      v38 = CallfnHkINLPMSG(a2, v17, a3, a4, v8, (struct _PFNCLIENT *)v16, v44);
    }
    v7 = v38;
    SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v56);
    goto LABEL_39;
  }
  return 0LL;
}
