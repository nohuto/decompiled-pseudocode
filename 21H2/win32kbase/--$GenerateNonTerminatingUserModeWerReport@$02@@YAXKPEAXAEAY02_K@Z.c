/*
 * XREFs of ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1C0152668
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0164A30 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall GenerateNonTerminatingUserModeWerReport<3>(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  _OWORD v8[10]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v8, 0, 0x98uLL);
  v5 = *a3;
  v6 = *((_QWORD *)a3 + 2);
  LODWORD(v8[0]) = -1073740791;
  *(_QWORD *)&v8[1] = a2;
  DWORD2(v8[1]) = 3;
  *(_QWORD *)&v8[3] = v6;
  v8[2] = v5;
  return WerSubmitUserCrashReport(-2LL, v8, 0LL, 30LL, 3);
}
