/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01DA720
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     _SetCalibrationData @ 0x1C01AA7AC (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD v25[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v26[2]; // [rsp+28h] [rbp-30h] BYREF
  void *v27; // [rsp+30h] [rbp-28h]
  char v28; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  v27 = 0LL;
  v26[0] = 0x2000;
  v26[1] = -1;
  v25[0] = 12288;
  v25[1] = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28);
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
    if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 888LL, v26) )
      goto LABEL_10;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 888LL, v25) )
  {
LABEL_10:
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 11LL);
    v9 = 5;
LABEL_29:
    v14 = 0;
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
  v13 = v10;
  if ( !v10 )
  {
LABEL_24:
    UserSetLastError(6);
    v14 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v10 + 184) & 0x2000) == 0 )
  {
    v17 = *(_QWORD *)(v10 + 472);
    if ( (*(_DWORD *)(v10 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v17 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v11, v12);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v19 = (void *)Win32AllocPoolWithQuotaZInit(v6, 1633907541LL);
        v8 = v19;
        v27 = v19;
        if ( !v19 )
          ExRaiseStatus(-1073741801);
        memmove(v19, (const void *)a3, v6);
      }
      v14 = SetCalibrationData(v13, v6, v8, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6);
  v14 = 0;
  UserSetLastError(0);
LABEL_25:
  if ( v8 && !v14 )
    Win32FreePool(v8);
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28, v15, v16);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v14;
}
