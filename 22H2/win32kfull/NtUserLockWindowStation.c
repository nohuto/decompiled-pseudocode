/*
 * XREFs of NtUserLockWindowStation @ 0x1C00B6EE0
 * Callers:
 *     <none>
 * Callees:
 *     _LockWindowStation @ 0x1C00B6F60 (_LockWindowStation.c)
 */

__int64 __fastcall NtUserLockWindowStation(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v3) = 1;
  if ( (int)ValidateHwinsta(a1, v3, 0LL, &Object) >= 0 )
  {
    v2 = LockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
