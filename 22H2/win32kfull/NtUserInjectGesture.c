/*
 * XREFs of NtUserInjectGesture @ 0x1C01D52A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _PostMessageCheckIL @ 0x1C01B704C (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C020448C (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C0204A9C (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C0204B50 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  volatile void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  ULONG64 v19; // rcx
  SIZE_T v20; // xmm0_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE v30[16]; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-B8h]
  volatile void *v32; // [rsp+48h] [rbp-B0h]
  __int128 v33; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-98h]
  __int128 v35; // [rsp+68h] [rbp-90h] BYREF
  __int128 v36; // [rsp+78h] [rbp-80h]
  __int128 v37; // [rsp+88h] [rbp-70h]
  SIZE_T v38; // [rsp+98h] [rbp-60h]
  __int128 v39; // [rsp+A8h] [rbp-50h]
  __int128 v40; // [rsp+B8h] [rbp-40h]
  __int128 v41; // [rsp+C8h] [rbp-30h]
  SIZE_T Length; // [rsp+D8h] [rbp-20h]

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v30);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v33;
    *((_QWORD *)&v33 + 1) = v11;
    HMLockObject(v11);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87;
    }
    else
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v11) )
        {
LABEL_10:
          v13 = 0;
LABEL_27:
          ThreadUnlock1(v17, v16, v18);
          goto LABEL_28;
        }
        v19 = a4 + 56;
        if ( a4 + 56 < a4 || v19 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v39 = *(_OWORD *)a4;
        v40 = *(_OWORD *)(a4 + 16);
        v41 = *(_OWORD *)(a4 + 32);
        v20 = *(_QWORD *)(a4 + 48);
        Length = v20;
        v35 = v39;
        v36 = v40;
        v37 = v41;
        v38 = v20;
        if ( (_DWORD)v20 )
        {
          if ( Address )
            goto LABEL_19;
        }
        else if ( !Address )
        {
LABEL_19:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v16, v18);
            ProbeForRead(Address, (unsigned int)v20, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = Address;
            v32 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v35) )
          {
            v22 = AllocGestureInfo(v11, 0LL, &v35, v9);
            v23 = v22;
            if ( v22 )
            {
              EtwTracePostInjectedGestureMessage(v11, v22);
              v24 = _HMObjectFromHandle(v23);
              v13 = PostMessageCheckIL(v11, 0x119u, *(unsigned int *)(v24 + 40), v23);
              if ( !v13 )
                FreeGestureInfo(v23, 1LL);
              goto LABEL_27;
            }
          }
          goto LABEL_10;
        }
        v13 = 0;
        v31 = 0;
        UserSetLastError(87);
        goto LABEL_27;
      }
      v14 = 1400;
    }
    v13 = 0;
    UserSetLastError(v14);
    goto LABEL_27;
  }
  v13 = 0;
LABEL_28:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v30, v10, v12);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v13;
}
