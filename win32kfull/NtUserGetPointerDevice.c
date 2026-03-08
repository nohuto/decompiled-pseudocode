/*
 * XREFs of NtUserGetPointerDevice @ 0x1C01D3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0146180 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rcx
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v11 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  if ( !a1 || !a2 )
  {
    v6 = 87;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v11, 0LL) )
  {
    v6 = 6;
LABEL_7:
    UserSetLastError(v6);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties((__int64)a2, v11, v7);
  v5 = 1;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
