__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  struct tagWND *v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v19; // ecx
  _BYTE v20[24]; // [rsp+30h] [rbp-58h] BYREF
  void *v21; // [rsp+48h] [rbp-40h]
  __int128 v22; // [rsp+58h] [rbp-30h] BYREF
  __int64 v23; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  v8 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v8;
    HMLockObject(v8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v10 = *((_QWORD *)v8 + 5);
      if ( *(char *)(v10 + 20) >= 0
        && *(char *)(v10 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v8 + 2) + 424LL) )
      {
        v12 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)(12 * v6), 1667724117LL);
        v21 = v12;
        if ( v12 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v12, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings(v8);
          Win32FreePool(v12);
LABEL_10:
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_11;
        }
        v19 = 8;
      }
      else
      {
        v19 = 1400;
      }
    }
    else
    {
      v19 = 87;
    }
    UserSetLastError(v19);
    goto LABEL_10;
  }
LABEL_11:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  UserSessionSwitchLeaveCrit(v17);
  return v9;
}
