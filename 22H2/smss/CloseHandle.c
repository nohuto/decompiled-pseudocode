/*
 * XREFs of CloseHandle @ 0x1400109A8
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000F84C (BasepGetVolumeDosLetterNameFromNTName.c)
 * Callees:
 *     SetStdHandleEx @ 0x140011170 (SetStdHandleEx.c)
 *     BaseSetLastNTError @ 0x1400119F0 (BaseSetLastNTError.c)
 *     _guard_dispatch_icall_nop @ 0x140011DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CloseHandle(HANDLE Handle, __int64 a2)
{
  HANDLE v2; // rbx
  void (*v3)(void); // rax
  NTSTATUS v4; // eax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = Handle;
  if ( (unsigned int)((_DWORD)Handle + 12) <= 2 && (unsigned int)SetStdHandleEx(Handle, a2, &v6) )
    v2 = v6;
  v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 4LL);
  if ( v3 )
    v3();
  v4 = NtClose(v2);
  if ( v4 >= 0 )
    return 1LL;
  BaseSetLastNTError((unsigned int)v4);
  return 0LL;
}
