/*
 * XREFs of NtUserInjectGesture @ 0x1C01F7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _PostMessageCheckIL @ 0x1C01DD244 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C0221000 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C0221618 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C02216CC (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  volatile void *v9; // r14
  __int64 v10; // rdx
  struct tagWND *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  ULONG64 v19; // rcx
  SIZE_T v20; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE v27[16]; // [rsp+30h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-B8h]
  volatile void *v29; // [rsp+48h] [rbp-B0h]
  __int128 v30; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-98h]
  __int128 v32; // [rsp+68h] [rbp-90h] BYREF
  __int128 v33; // [rsp+78h] [rbp-80h]
  __int128 v34; // [rsp+88h] [rbp-70h]
  SIZE_T v35; // [rsp+98h] [rbp-60h]
  __int128 v36; // [rsp+A8h] [rbp-50h]
  __int128 v37; // [rsp+B8h] [rbp-40h]
  __int128 v38; // [rsp+C8h] [rbp-30h]
  SIZE_T Length; // [rsp+D8h] [rbp-20h]

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v27);
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
    *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v30;
    *((_QWORD *)&v30 + 1) = v11;
    HMLockObject(v11);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87LL;
    }
    else
    {
      v15 = *((_QWORD *)v11 + 5);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v11) )
        {
LABEL_9:
          LODWORD(v11) = 0;
LABEL_26:
          ThreadUnlock1(v17, v16, v18);
          goto LABEL_27;
        }
        v19 = a4 + 56;
        if ( a4 + 56 < a4 || v19 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v36 = *(_OWORD *)a4;
        v37 = *(_OWORD *)(a4 + 16);
        v38 = *(_OWORD *)(a4 + 32);
        Length = *(_QWORD *)(a4 + 48);
        v32 = v36;
        v33 = v37;
        v34 = v38;
        v35 = Length;
        v20 = (unsigned int)Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
            ProbeForRead(Address, v20, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = Address;
            v29 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v32) )
          {
            v22 = AllocGestureInfo(v11, 0LL, &v32, v9);
            v23 = v22;
            if ( v22 )
            {
              EtwTracePostInjectedGestureMessage(v11, v22);
              v24 = _HMObjectFromHandle(v23);
              LODWORD(v11) = PostMessageCheckIL(v11, 0x119u, *(unsigned int *)(v24 + 40), v23);
              if ( !(_DWORD)v11 )
                FreeGestureInfo(v23, 1LL);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v11) = 0;
        v28 = 0;
        UserSetLastError(87LL, v16);
        goto LABEL_26;
      }
      v14 = 1400LL;
    }
    LODWORD(v11) = 0;
    UserSetLastError(v14, v13);
    goto LABEL_26;
  }
LABEL_27:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27, v10, v12);
  UserSessionSwitchLeaveCrit(v25);
  return (int)v11;
}
