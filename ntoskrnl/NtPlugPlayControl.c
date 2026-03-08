/*
 * XREFs of NtPlugPlayControl @ 0x1406CF8E0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtPlugPlayControl(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char PreviousMode; // si
  __int64 *v6; // rbx
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx
  int UserModeCallersCopy; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v4 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return 3221225569LL;
  if ( (unsigned int)v4 >= 0x18 )
    return 3221225711LL;
  v6 = &PlugPlayHandlerTable[3 * v4];
  if ( *(_DWORD *)v6 != (_DWORD)v4 )
    return 3221225701LL;
  if ( !v6 )
    return 3221225711LL;
  if ( !v6[1] )
    return 3221225474LL;
  if ( *((_DWORD *)v6 + 1) != a3 )
    return 3221225520LL;
  if ( PsIsCurrentThreadInServerSilo(3 * v4, a2) && !*((_BYTE *)v6 + 16) )
    return 3221225569LL;
  v13 = 0LL;
  result = PiControlMakeUserModeCallersCopy(&v13, v12, a3, 4LL, PreviousMode, 1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = PreviousMode;
    v9 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, __int64))v6[1])((unsigned int)v4, v13, a3, v8);
    if ( (v9 & 0xC0000000) != 0xC0000000 || v9 == -1073741789 )
    {
      LOBYTE(v11) = PreviousMode;
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v12, v13, a3, 4LL, v11, 0);
      if ( UserModeCallersCopy < 0 )
        v9 = UserModeCallersCopy;
    }
    if ( v9 == -1073741738 )
      v9 = -1073741810;
    PiControlFreeUserModeCallersBuffer(PreviousMode, v13);
    return v9;
  }
  return result;
}
