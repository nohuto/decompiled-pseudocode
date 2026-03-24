/*
 * XREFs of NtUserBuildPropList @ 0x1C0113A50
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C0113B74 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, ULONG64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v11 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = *v11;
      v12 = BuildPropList(v9, a3, a2, a4);
    }
    else
    {
      v12 = -1073741816;
    }
    ThreadUnlock1(v10);
  }
  else
  {
    v12 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v12;
}
