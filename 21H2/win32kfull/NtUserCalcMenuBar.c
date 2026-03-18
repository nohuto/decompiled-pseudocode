/*
 * XREFs of NtUserCalcMenuBar @ 0x1C00C2670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxCalcMenuBar @ 0x1C00C27B0 (xxxCalcMenuBar.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+38h] [rbp-30h] BYREF
  __int128 v20; // [rsp+48h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v11 = 0;
  if ( v10 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v10;
    HMLockObject(v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL, v12);
    }
    else
    {
      v13 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v13 = (__int128 *)MmUserProbeAddress;
        v14 = *v13;
      }
      else
      {
        v14 = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
      }
      v19 = v14;
      v11 = xxxCalcMenuBar(v10, a2, a3, a4, (__int64)&v19);
    }
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
