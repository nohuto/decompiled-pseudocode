/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C010ACC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-68h] BYREF
  GUID ActivityId; // [rsp+28h] [rbp-60h] BYREF
  int v7; // [rsp+38h] [rbp-50h]
  char v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h]

  memset_0(v5, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v9 = MEMORY[0xFFFFF78000000014];
  v7 = 32;
  v8 = -1;
  EnterCrit(0LL, 0LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, v5);
  UserSessionSwitchLeaveCrit(v3);
  return updated;
}
