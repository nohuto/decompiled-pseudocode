/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0051290
 * Callers:
 *     <none>
 * Callees:
 *     SetGestureConfigSettings @ 0x1C00509F8 (SetGestureConfigSettings.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  struct tagWND *v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  void *v11; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  _BYTE v23[24]; // [rsp+30h] [rbp-58h] BYREF
  void *v24; // [rsp+48h] [rbp-40h]
  __int128 v25; // [rsp+58h] [rbp-30h] BYREF
  __int64 v26; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v8 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v8;
    HMLockObject(v8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v10 = *((_QWORD *)v8 + 5);
      if ( *(char *)(v10 + 20) >= 0
        && *(char *)(v10 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v8 + 2) + 424LL) )
      {
        v11 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)(12 * v6), 1667724117LL);
        v24 = v11;
        if ( v11 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v11, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings(v8, v13, v6, (__int64)v11);
          Win32FreePool(v11);
LABEL_10:
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_11;
        }
        v22 = 8LL;
      }
      else
      {
        v22 = 1400LL;
      }
    }
    else
    {
      v22 = 87LL;
    }
    UserSetLastError(v22);
    goto LABEL_10;
  }
LABEL_11:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v9;
}
