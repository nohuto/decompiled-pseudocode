/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C01F5680
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C0238378 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, __int64 a3, struct tagRECT *a4)
{
  int v5; // r15d
  __int64 v8; // rdx
  struct tagWND *v9; // rsi
  __int64 v10; // r8
  int v11; // ebx
  struct tagMONITOR *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  v17 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  v11 = 0;
  if ( v9 )
  {
    v12 = (struct tagMONITOR *)ValidateHmonitor(a2, v8);
    if ( v12 && a4 )
    {
      _GetOwnerTransformedMonitorRect(v9, v12, v5, &v17);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagRECT *)MmUserProbeAddress;
      *a4 = v17;
      v11 = 1;
    }
    else
    {
      UserSetLastError(87LL, v13);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16, v8, v10);
  UserSessionSwitchLeaveCrit(v14);
  return v11;
}
