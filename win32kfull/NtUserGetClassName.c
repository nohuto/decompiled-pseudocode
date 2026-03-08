/*
 * XREFs of NtUserGetClassName @ 0x1C00CED90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, __int64 a2, ULONG64 a3)
{
  ULONG64 v3; // rsi
  int v4; // r14d
  unsigned int AtomName; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  volatile void *v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned __int16 v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = a2;
  AtomName = 0;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v14 = *(_DWORD *)v3;
    v9 = *(volatile void **)(v3 + 8);
    ProbeForWrite(v9, HIWORD(v14), 2u);
    v13 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL) + 2LL);
    if ( v4 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) != 0 )
      {
        v10 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) - 666;
        if ( v10 < 0x1F )
        {
          _mm_lfence();
          v11 = byte_1C0319530[v10];
          if ( (_BYTE)v11 != 25 )
            v13 = *(_WORD *)(gpsi + 2LL * v11 + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v13, v9, HIWORD(v14) >> 1);
  }
  UserSessionSwitchLeaveCrit(v7);
  return AtomName;
}
