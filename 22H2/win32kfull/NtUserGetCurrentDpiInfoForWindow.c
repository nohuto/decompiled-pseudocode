/*
 * XREFs of NtUserGetCurrentDpiInfoForWindow @ 0x1C0114E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  ULONG64 v6; // rcx
  __int64 v7; // rdx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v5 = (_QWORD *)ValidateHwnd(a1);
  if ( v5 )
  {
    if ( *(_WORD *)(v5[5] + 286LL) )
      v7 = v5[37];
    else
      v7 = v5[36];
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = *(_OWORD *)(v7 + 4);
    a2[1] = *(_OWORD *)(v7 + 20);
    a2[2] = *(_OWORD *)(v7 + 36);
    a2[3] = *(_OWORD *)(v7 + 52);
    a2[4] = *(_OWORD *)(v7 + 68);
    a2[5] = *(_OWORD *)(v7 + 84);
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
