/*
 * XREFs of NtUserUnlockWindowStation @ 0x1C00F0380
 * Callers:
 *     <none>
 * Callees:
 *     _UnlockWindowStation @ 0x1C00F0400 (_UnlockWindowStation.c)
 */

__int64 __fastcall NtUserUnlockWindowStation(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v3) = 1;
  if ( (int)ValidateHwinsta(a1, v3, 0LL, &Object) >= 0 )
  {
    v2 = UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
