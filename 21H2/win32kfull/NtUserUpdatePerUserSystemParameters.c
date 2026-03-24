/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C0134520
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rcx
  _QWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v5[1]);
  v5[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v5[3]) = 32;
  LOBYTE(v5[6]) = -1;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, (__int64)v5);
  UserSessionSwitchLeaveCrit(v3);
  return updated;
}
