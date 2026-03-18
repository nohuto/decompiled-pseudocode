/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C01F6A40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v16; // rbx

  v6 = a2;
  EnterCrit(0LL, 0LL);
  if ( !a3 || a4 != 48 )
  {
    v13 = 87LL;
    goto LABEL_12;
  }
  v9 = HMValidateHandle(a1, 0x14u);
  v11 = v9;
  if ( !v9 )
  {
    v12 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v13 = 5LL;
LABEL_12:
    v12 = 0;
    UserSetLastError(v13, v8);
    goto LABEL_13;
  }
  v14 = *(_DWORD *)(v9 + 24);
  if ( v14 < (unsigned int)v6 )
    v6 = v14;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
  v16 = 48 * v6;
  ProbeForWrite(a3, v16, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v11 + 32), v16);
  v12 = 1;
  v10 = *(_QWORD *)(gptiCurrent + 1096LL);
  if ( v10 == a1 )
  {
    FreeTouchInputInfo(v10);
    *(_QWORD *)(gptiCurrent + 1096LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
