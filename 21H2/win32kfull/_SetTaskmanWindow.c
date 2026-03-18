/*
 * XREFs of _SetTaskmanWindow @ 0x1C011DB1C
 * Callers:
 *     NtUserSetTaskmanWindow @ 0x1C011DAA0 (NtUserSetTaskmanWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall SetTaskmanWindow(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(__int64 **)(gptiCurrent + 464LL);
  if ( a1 && v1[24] )
  {
    UserSetLastError(5LL, gptiCurrent);
    return 0LL;
  }
  else
  {
    v2 = *v1;
    if ( a1 )
      *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 48);
    else
      *(_QWORD *)(v2 + 32) = 0LL;
    v4[1] = a1;
    v4[0] = v1 + 24;
    HMAssignmentLock(v4, 0LL);
    return 1LL;
  }
}
