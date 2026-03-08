/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01AFA08
 * Callers:
 *     NtUserSetCancelRotationDelayHintWindow @ 0x1C01DBA10 (NtUserSetCancelRotationDelayHintWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  int v1; // eax
  __int64 v2; // r9
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 1;
  LOBYTE(v1) = IAMThreadAccessGranted(gptiCurrent);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v2 + 24) + 296LL;
    v5[1] = v2;
    v5[0] = v3;
    HMAssignmentLock(v5, 0LL);
  }
  else
  {
    UserSetLastError(5);
    return 0;
  }
  return v0;
}
