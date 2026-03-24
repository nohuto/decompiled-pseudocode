/*
 * XREFs of NtUserUnlockWindowStation @ 0x1C0130FD0
 * Callers:
 *     <none>
 * Callees:
 *     _UnlockWindowStation @ 0x1C0131050 (_UnlockWindowStation.c)
 */

__int64 __fastcall NtUserUnlockWindowStation(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v3) = 1;
  if ( (int)ValidateHwinsta(a1, v3, 0LL, &Object) >= 0 )
  {
    v1 = UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v1;
}
