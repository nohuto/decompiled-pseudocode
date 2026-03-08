/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01DB750
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     _SetCalibrationData @ 0x1C01AB99C (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v15; // rax
  __int64 v16; // rcx
  _DWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v19[2]; // [rsp+28h] [rbp-30h] BYREF
  void *v20; // [rsp+30h] [rbp-28h]
  char v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  v20 = 0LL;
  v19[0] = 0x2000;
  v19[1] = -1;
  v18[0] = 12288;
  v18[1] = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_28;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_28;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_28;
  }
  if ( a4 == 3 )
  {
    if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, v19) )
      goto LABEL_10;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, v18) )
  {
LABEL_10:
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 11LL);
    v9 = 5;
LABEL_29:
    v12 = 0;
    UserSetLastError(v9);
    goto LABEL_30;
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_28:
    v9 = 87;
    goto LABEL_29;
  }
  v10 = HMValidateHandle(a1, 0x13u);
  v11 = v10;
  if ( !v10 )
  {
LABEL_24:
    UserSetLastError(6);
    v12 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v10 + 184) & 0x2000) == 0 )
  {
    v13 = *(_QWORD *)(v10 + 472);
    if ( (*(_DWORD *)(v10 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v13 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v15 = (void *)Win32AllocPoolWithQuotaZInit(v6, 1633907541LL);
        v8 = v15;
        v20 = v15;
        if ( !v15 )
          ExRaiseStatus(-1073741801);
        memmove(v15, (const void *)a3, v6);
      }
      v12 = SetCalibrationData(v11, v6, v8, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6);
  v12 = 0;
  UserSetLastError(0);
LABEL_25:
  if ( v8 && !v12 )
    Win32FreePool(v8);
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
  UserSessionSwitchLeaveCrit(v16);
  return v12;
}
