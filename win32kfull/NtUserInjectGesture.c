/*
 * XREFs of NtUserInjectGesture @ 0x1C01D62D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C0207064 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C0207674 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C0207728 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  volatile void *v9; // r14
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  ULONG64 v17; // rcx
  SIZE_T v18; // xmm0_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rax
  __int128 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE v25[16]; // [rsp+30h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-B8h]
  volatile void *v27; // [rsp+48h] [rbp-B0h]
  __int128 v28; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-98h]
  __int128 v30; // [rsp+68h] [rbp-90h] BYREF
  __int128 v31; // [rsp+78h] [rbp-80h]
  __int128 v32; // [rsp+88h] [rbp-70h]
  SIZE_T v33; // [rsp+98h] [rbp-60h]
  __int128 v34; // [rsp+A8h] [rbp-50h]
  __int128 v35; // [rsp+B8h] [rbp-40h]
  __int128 v36; // [rsp+C8h] [rbp-30h]
  SIZE_T Length; // [rsp+D8h] [rbp-20h]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v28;
    *((_QWORD *)&v28 + 1) = v10;
    HMLockObject(v10);
    if ( a3 || !a4 || a2 )
    {
      v12 = 87;
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v13 + 20) >= 0 && *(char *)(v13 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10) )
        {
LABEL_10:
          v11 = 0;
LABEL_27:
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_28;
        }
        v17 = a4 + 56;
        if ( a4 + 56 < a4 || v17 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v34 = *(_OWORD *)a4;
        v35 = *(_OWORD *)(a4 + 16);
        v36 = *(_OWORD *)(a4 + 32);
        v18 = *(_QWORD *)(a4 + 48);
        Length = v18;
        v30 = v34;
        v31 = v35;
        v32 = v36;
        v33 = v18;
        if ( (_DWORD)v18 )
        {
          if ( Address )
            goto LABEL_19;
        }
        else if ( !Address )
        {
LABEL_19:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17);
            ProbeForRead(Address, (unsigned int)v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = Address;
            v27 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v30) )
          {
            v20 = AllocGestureInfo(v10, 0LL, &v30, v9);
            v21 = (__int128 *)v20;
            if ( v20 )
            {
              EtwTracePostInjectedGestureMessage(v10, v20);
              v22 = _HMObjectFromHandle(v21);
              v11 = PostMessageCheckIL(v10, 0x119u, *(unsigned int *)(v22 + 40), v21);
              if ( !v11 )
                FreeGestureInfo(v21, 1LL);
              goto LABEL_27;
            }
          }
          goto LABEL_10;
        }
        v11 = 0;
        v26 = 0;
        UserSetLastError(87);
        goto LABEL_27;
      }
      v12 = 1400;
    }
    v11 = 0;
    UserSetLastError(v12);
    goto LABEL_27;
  }
  v11 = 0;
LABEL_28:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  UserSessionSwitchLeaveCrit(v23);
  return v11;
}
