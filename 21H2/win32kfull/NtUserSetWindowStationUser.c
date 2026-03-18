/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C0119200
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetWindowStationUser @ 0x1C011932C (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, _QWORD *a2, volatile void *a3, unsigned int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v14[4]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+24h] [rbp-24h]
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17[0] = *a2;
    if ( a3 )
    {
      if ( !a4 )
      {
        v15 = 0;
LABEL_9:
        ObfDereferenceObject(Object);
        goto LABEL_10;
      }
      ProbeForRead(a3, a4, 4u);
    }
    v8 = SetWindowStationUser(Object, v17, a3, a4);
    goto LABEL_9;
  }
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14, v10, v11);
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
