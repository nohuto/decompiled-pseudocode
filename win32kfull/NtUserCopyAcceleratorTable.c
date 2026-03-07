__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rcx
  char v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  LOBYTE(v7) = 8;
  v8 = HMValidateHandle(a1, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v9 + 24) )
        LODWORD(v3) = *(_DWORD *)(v9 + 24);
      while ( v6 < (int)v3 )
      {
        v13 = 3LL * v6;
        *(_BYTE *)(v9 + 2 * v13 + 29) = 0;
        *(_DWORD *)&a2[2 * v13] = *(_DWORD *)(v9 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v13 + 4] = *(_WORD *)(v9 + 6LL * v6 + 32);
        a2[2 * v13] &= ~0x80u;
        ++v6;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v8 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10);
  return (unsigned int)v3;
}
