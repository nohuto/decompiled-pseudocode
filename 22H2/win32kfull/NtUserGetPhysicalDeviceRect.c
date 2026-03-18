/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01D2C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // r8
  int v7; // ecx
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v15 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  if ( !a1 || !a2 )
  {
    v7 = 87;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v15, 0LL) )
  {
    v7 = 6;
LABEL_9:
    UserSetLastError(v7);
    goto LABEL_10;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v8[15] = v8[15];
  *a2 = *(_OWORD *)(v15 + 140);
  v5 = 1;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, (__int64)v8, v6);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v5;
}
