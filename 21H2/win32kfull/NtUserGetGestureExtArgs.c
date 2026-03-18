/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C01F4390
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 CurrentProcessWow64Process; // rax

  EnterCrit(0LL, 0LL);
  if ( !a3 )
  {
    v7 = 87LL;
LABEL_3:
    LODWORD(v8) = 0;
    UserSetLastError(v7, v6);
    goto LABEL_11;
  }
  v10 = HMValidateHandle(a1, 0x15u);
  v8 = v10;
  if ( !v10 )
    goto LABEL_11;
  if ( *(_QWORD *)(v10 + 16) != gptiCurrent )
  {
    v7 = 5LL;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v10 + 80) )
  {
    v7 = 122LL;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
  ProbeForWrite(a3, *(unsigned int *)(v8 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v8 + 88), *(unsigned int *)(v8 + 80));
  LODWORD(v8) = 1;
  v9 = *(_QWORD *)(gptiCurrent + 1104LL);
  if ( v9 == a1 )
  {
    FreeGestureInfo(v9, 1LL);
    *(_QWORD *)(gptiCurrent + 1104LL) = 0LL;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return (int)v8;
}
