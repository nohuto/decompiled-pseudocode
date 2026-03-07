__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 CurrentProcessWow64Process; // rax

  EnterCrit(0LL, 0LL);
  if ( !a3 )
  {
    v6 = 87;
LABEL_3:
    LODWORD(v7) = 0;
    UserSetLastError(v6);
    goto LABEL_11;
  }
  v9 = HMValidateHandle(a1, 0x15u);
  v7 = v9;
  if ( !v9 )
    goto LABEL_11;
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v6 = 5;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v9 + 80) )
  {
    v6 = 122;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
  ProbeForWrite(a3, *(unsigned int *)(v7 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v7 + 88), *(unsigned int *)(v7 + 80));
  LODWORD(v7) = 1;
  v8 = *(_QWORD *)(gptiCurrent + 1120LL);
  if ( v8 == a1 )
  {
    FreeGestureInfo(v8, 1LL);
    *(_QWORD *)(gptiCurrent + 1120LL) = 0LL;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return (int)v7;
}
