/*
 * XREFs of NtUserGetGestureInfo @ 0x1C01F9530
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _FreeGestureInfo @ 0x1C0227680 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(unsigned __int64 a1, ULONG64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a2 )
  {
    v7 = 87LL;
LABEL_3:
    v4 = 0;
    UserSetLastError(v7, v5, v6);
    goto LABEL_17;
  }
  v9 = (_DWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  if ( *v9 != 56 )
  {
    v4 = 0;
    UserSetLastError(87LL, v5, v6);
    goto LABEL_17;
  }
  v10 = HMValidateHandle(a1, 0x15u);
  v5 = v10;
  if ( !v10 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v10 + 16) != gptiCurrent )
  {
    v7 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v10 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v10 + 80);
  v8 = *(_QWORD *)(gptiCurrent + 1080LL);
  if ( v8 == a1 && !*(_DWORD *)(v10 + 80) )
  {
    FreeGestureInfo(v8, 1LL, v6, v11);
    *(_QWORD *)(gptiCurrent + 1080LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
