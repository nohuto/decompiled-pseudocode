/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C00B5B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetWindowStationUser @ 0x1C00B5C2C (_SetWindowStationUser.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, _QWORD *a2, volatile void *a3, unsigned int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[4]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+24h] [rbp-24h]
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20[0] = *a2;
    if ( a3 )
    {
      if ( !a4 )
      {
        v18 = 0;
LABEL_9:
        ObfDereferenceObject(Object);
        goto LABEL_10;
      }
      ProbeForRead(a3, a4, 4u);
    }
    v8 = SetWindowStationUser(Object, v20, a3, a4);
    goto LABEL_9;
  }
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17, v10, v11);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v8;
}
