__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v15; // rbx

  v6 = a2;
  EnterCrit(0LL, 0LL);
  if ( !a3 || a4 != 48 )
  {
    v12 = 87;
    goto LABEL_12;
  }
  v8 = HMValidateHandle(a1, 0x14u);
  v10 = v8;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v8 + 16) != gptiCurrent )
  {
    v12 = 5;
LABEL_12:
    v11 = 0;
    UserSetLastError(v12);
    goto LABEL_13;
  }
  v13 = *(_DWORD *)(v8 + 24);
  if ( v13 < (unsigned int)v6 )
    v6 = v13;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
  v15 = 48 * v6;
  ProbeForWrite(a3, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v10 + 32), v15);
  v11 = 1;
  v9 = *(_QWORD *)(gptiCurrent + 1112LL);
  if ( v9 == a1 )
  {
    FreeTouchInputInfo(v9);
    *(_QWORD *)(gptiCurrent + 1112LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
