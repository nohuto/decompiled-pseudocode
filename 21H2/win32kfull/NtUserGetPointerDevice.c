/*
 * XREFs of NtUserGetPointerDevice @ 0x1C01F58D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01E9950 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v13 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
  if ( !a1 || !a2 )
  {
    v7 = 87LL;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v13, 0LL) )
  {
    v7 = 6LL;
LABEL_7:
    UserSetLastError(v7, v6);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties((__int64)a2, v13);
  v5 = 1;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12, v8, v9);
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
