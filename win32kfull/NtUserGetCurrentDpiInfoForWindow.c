__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v3; // rdi
  _QWORD *v5; // rax
  ULONG64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (_QWORD *)ValidateHwnd(a1);
  v7 = 0;
  if ( v5 )
  {
    if ( *(_WORD *)(v5[5] + 286LL) )
      v8 = v5[37];
    else
      v8 = v5[36];
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)(v8 + 4);
    v3[1] = *(_OWORD *)(v8 + 20);
    v3[2] = *(_OWORD *)(v8 + 36);
    v3[3] = *(_OWORD *)(v8 + 52);
    v3[4] = *(_OWORD *)(v8 + 68);
    v3[5] = *(_OWORD *)(v8 + 84);
    v7 = 1;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
