/*
 * XREFs of NtUserDdeInitialize @ 0x1C00E4630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxCsDdeInitialize @ 0x1C00E472C (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C00F4BE0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  ULONG64 v9; // rcx
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v12 = 0;
  EnterCrit(0LL, 0LL);
  v10 = xxxCsDdeInitialize((unsigned int)&v13, (unsigned int)&v14, (unsigned int)&v12, a4, a5);
  if ( !v10 )
  {
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v13;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v14;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v12;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
