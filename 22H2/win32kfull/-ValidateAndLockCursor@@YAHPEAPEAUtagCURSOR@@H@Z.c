/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C007A550
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0079D30 (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = (__int64)*a1;
  if ( !v4 )
    return 1LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoSecure(v4, a2);
  if ( v6 || !v3 )
  {
    *a1 = 0LL;
    v9[0] = a1;
    v9[1] = v6;
    HMAssignmentLock(v9);
    return 1LL;
  }
  UserSetLastError(87LL, v7, v8);
  return 0LL;
}
