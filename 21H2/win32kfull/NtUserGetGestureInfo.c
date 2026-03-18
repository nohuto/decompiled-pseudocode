/*
 * XREFs of NtUserGetGestureInfo @ 0x1C01F44F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rax

  EnterCrit(0LL, 0LL);
  if ( !a2 )
  {
    v5 = 87LL;
LABEL_3:
    v6 = 0;
    UserSetLastError(v5, v4);
    goto LABEL_17;
  }
  v8 = (_DWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  if ( *v8 != 56 )
  {
    v6 = 0;
    UserSetLastError(87LL, v4);
    goto LABEL_17;
  }
  v9 = HMValidateHandle(a1, 0x15u);
  v4 = v9;
  if ( !v9 )
  {
    v6 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v5 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v9 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v9 + 80);
  v6 = 1;
  v7 = *(_QWORD *)(gptiCurrent + 1104LL);
  if ( v7 == a1 && !*(_DWORD *)(v9 + 80) )
  {
    FreeGestureInfo(v7, 1LL);
    *(_QWORD *)(gptiCurrent + 1104LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
