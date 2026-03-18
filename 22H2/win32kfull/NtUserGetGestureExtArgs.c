/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C01D15B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
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
  v12 = HMValidateHandle(a1, 0x15u);
  v7 = v12;
  if ( !v12 )
    goto LABEL_11;
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v6 = 5;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v12 + 80) )
  {
    v6 = 122;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10);
  ProbeForWrite(a3, *(unsigned int *)(v7 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v7 + 88), *(unsigned int *)(v7 + 80));
  LODWORD(v7) = 1;
  v9 = *(_QWORD *)(gptiCurrent + 1120LL);
  if ( v9 == a1 )
  {
    FreeGestureInfo(v9, 1LL);
    *(_QWORD *)(gptiCurrent + 1120LL) = 0LL;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return (int)v7;
}
