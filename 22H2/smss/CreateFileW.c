/*
 * XREFs of CreateFileW @ 0x140010898
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000F84C (BasepGetVolumeDosLetterNameFromNTName.c)
 * Callees:
 *     CreateFileInternal @ 0x14001031C (CreateFileInternal.c)
 */

__int64 __fastcall CreateFileW(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[2] = 0;
  v5[3] = 0;
  v5[0] = 32;
  v5[1] = 128;
  v6 = 0LL;
  return CreateFileInternal(a1, a2, a3, a4, (__int64)v5);
}
