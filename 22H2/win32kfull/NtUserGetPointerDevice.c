/*
 * XREFs of NtUserGetPointerDevice @ 0x1C01D2DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0152EB0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v16 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
  if ( !a1 || !a2 )
  {
    v6 = 87;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v16, 0LL) )
  {
    v6 = 6;
LABEL_7:
    UserSetLastError(v6);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties((__int64)a2, v16, v7);
  v5 = 1;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15, v8, v9);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}
