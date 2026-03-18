/*
 * XREFs of ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1C01EE660
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsRimObjectUnregistered @ 0x1C01EEDB8 (IsRimObjectUnregistered.c)
 */

bool __fastcall CBaseInput::ivOnPacketReceived(const void *a1, __int64 a2, unsigned int a3, void *a4, char *Object)
{
  int v5; // ebp
  __int64 v7; // r15
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // di
  __int64 v14; // rcx

  v5 = (int)a1;
  v7 = a3;
  RIMLockExclusive((__int64)(Object + 104));
  v8 = IsRimObjectUnregistered(Object);
  CInpPushLock::UnLockExclusive((CInpPushLock *)(Object + 104));
  v13 = 0;
  if ( !v8 )
  {
    v14 = *(_QWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 48LL * v5 + 3304);
    if ( v14 )
      v13 = ((unsigned int (__fastcall *)(__int64, void *, char *))*(&off_1C0242170 + v7))(v14, a4, Object) != 2;
  }
  ObfDereferenceObject(Object);
  return v13;
}
