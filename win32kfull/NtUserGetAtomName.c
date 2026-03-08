/*
 * XREFs of NtUserGetAtomName @ 0x1C00D6920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned __int16 v4; // di
  unsigned int AtomName; // ebx
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp-20h]
  volatile void *v9; // [rsp+40h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v8 = *(_DWORD *)v3;
  v9 = *(volatile void **)(v3 + 8);
  ProbeForWrite(v9, (unsigned __int16)HIWORD(*(_DWORD *)v3), 2u);
  AtomName = UserGetAtomName(v4, v9, HIWORD(v8) >> 1);
  UserSessionSwitchLeaveCrit(v6);
  return AtomName;
}
