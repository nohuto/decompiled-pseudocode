/*
 * XREFs of NtUserLockWindowStation @ 0x1C00EF0F0
 * Callers:
 *     <none>
 * Callees:
 *     _LockWindowStation @ 0x1C00EF170 (_LockWindowStation.c)
 */

__int64 __fastcall NtUserLockWindowStation(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
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
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
