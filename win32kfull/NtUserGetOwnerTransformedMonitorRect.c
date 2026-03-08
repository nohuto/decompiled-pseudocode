/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C01D3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C0222480 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, __int64 a3, struct tagRECT *a4)
{
  int v5; // r15d
  __int64 v8; // rdx
  struct tagWND *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  struct tagMONITOR *v13; // rax
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  v17 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  v12 = 0;
  if ( v9 )
  {
    v13 = (struct tagMONITOR *)ValidateHmonitor(a2, v8, v10, v11);
    if ( v13 && a4 )
    {
      _GetOwnerTransformedMonitorRect(v9, v13, v5, &v17);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagRECT *)MmUserProbeAddress;
      *a4 = v17;
      v12 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
