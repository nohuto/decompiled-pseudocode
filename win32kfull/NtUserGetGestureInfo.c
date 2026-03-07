__int64 __fastcall NtUserGetGestureInfo(__int64 a1, ULONG64 a2)
{
  int v4; // ecx
  int v5; // ebx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rax

  EnterCrit(0LL, 0LL);
  if ( !a2 )
  {
    v4 = 87;
LABEL_3:
    v5 = 0;
    UserSetLastError(v4);
    goto LABEL_17;
  }
  v7 = (_DWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  if ( *v7 != 56 )
  {
    v5 = 0;
    UserSetLastError(87);
    goto LABEL_17;
  }
  v8 = HMValidateHandle(a1, 0x15u);
  if ( !v8 )
  {
    v5 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v8 + 16) != gptiCurrent )
  {
    v4 = 5;
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v8 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v8 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v8 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v8 + 80);
  v5 = 1;
  v6 = *(_QWORD *)(gptiCurrent + 1120LL);
  if ( v6 == a1 && !*(_DWORD *)(v8 + 80) )
  {
    FreeGestureInfo(v6, 1LL);
    *(_QWORD *)(gptiCurrent + 1120LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
