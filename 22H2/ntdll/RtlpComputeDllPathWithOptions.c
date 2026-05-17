/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18006D5A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006D7D0 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(
        __int16 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r10
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD v15[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  v7 = v15[0];
  if ( (a1 & 0x100) != 0 )
    v7 = 5;
  v15[0] = v7;
  LODWORD(v8) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v8) = v8 + 1;
    v15[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v9 = (unsigned int)v8;
    v8 = (unsigned int)(v8 + 1);
    v10 = (_WORD)LdrpDllDirectory == 0;
    v15[v9] = 6;
    if ( !v10 )
    {
      v15[v8] = 0;
      LODWORD(v8) = v8 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v11 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v15[v11] = 7;
  }
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (LOBYTE(v6) = 1, (a1 & 0x800) == 0) )
    LOBYTE(v6) = 0;
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v12 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v15[v12] = 8;
  }
  v13 = RtlpComputePath(v15, (unsigned int)v8, a2, v6);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v13 )
    *(_BYTE *)(v13 + 116) = 1;
  return v13;
}
