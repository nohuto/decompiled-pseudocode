/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C00EDFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetWindowStationUser @ 0x1C00EE0CC (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, _QWORD *a2, volatile void *a3, unsigned int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[4]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+24h] [rbp-24h]
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15[0] = *a2;
    if ( a3 )
    {
      if ( !a4 )
      {
        v13 = 0;
LABEL_9:
        ObfDereferenceObject(Object);
        goto LABEL_10;
      }
      ProbeForRead(a3, a4, 4u);
    }
    v8 = SetWindowStationUser(Object, v15, a3, a4);
    goto LABEL_9;
  }
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
