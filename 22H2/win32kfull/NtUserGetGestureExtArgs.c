/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C01F93D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     _FreeGestureInfo @ 0x1C0227680 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(unsigned __int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 )
  {
    v9 = 87LL;
LABEL_3:
    v6 = 0;
    UserSetLastError(v9, v7, v8);
    goto LABEL_12;
  }
  v11 = HMValidateHandle(a1, 0x15u);
  v12 = v11;
  if ( !v11 )
  {
    v6 = 0;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
  {
    v9 = 5LL;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v11 + 80) )
  {
    v9 = 122LL;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
  ProbeForWrite(a3, *(unsigned int *)(v12 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v12 + 88), *(unsigned int *)(v12 + 80));
  v10 = *(_QWORD *)(gptiCurrent + 1080LL);
  if ( v10 == a1 )
  {
    FreeGestureInfo(v10, 1LL, v14, v15);
    *(_QWORD *)(gptiCurrent + 1080LL) = 0LL;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
