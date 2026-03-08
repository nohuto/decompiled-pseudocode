/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1C01DFEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserTestForInteractiveUser(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // ebx

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  if ( *v3 == *(_QWORD *)(grpWinStaList + 184LL) )
    v4 = 0;
  else
    v4 = -1073741790;
  UserSessionSwitchLeaveCrit(grpWinStaList);
  return v4;
}
