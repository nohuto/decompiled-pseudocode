/*
 * XREFs of NtUserGetCurrentDpiInfoForWindow @ 0x1C00A6900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (_QWORD *)ValidateHwnd(a1);
  v9 = 0;
  if ( v5 )
  {
    if ( *(_WORD *)(v5[5] + 286LL) )
      v6 = v5[37];
    else
      v6 = v5[36];
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)(v6 + 4);
    v3[1] = *(_OWORD *)(v6 + 20);
    v3[2] = *(_OWORD *)(v6 + 36);
    v3[3] = *(_OWORD *)(v6 + 52);
    v3[4] = *(_OWORD *)(v6 + 68);
    v3[5] = *(_OWORD *)(v6 + 84);
    v9 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v5, v8);
  return v9;
}
