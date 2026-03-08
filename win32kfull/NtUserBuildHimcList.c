/*
 * XREFs of NtUserBuildHimcList @ 0x1C00E8D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z @ 0x1C00E8DF0 (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z.c)
 */

__int64 __fastcall NtUserBuildHimcList(__int64 a1, __int64 a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rbx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _BYTE v17[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-24h]

  v6 = (unsigned int)a2;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  if ( (*gpsi & 4) != 0 )
  {
    if ( v7 )
    {
      if ( v7 == -1 )
      {
        v9 = 0LL;
      }
      else
      {
        v15 = PtiFromThreadId(v7);
        v9 = (struct tagTHREADINFO *)v15;
        if ( !v15 || !*(_QWORD *)(v15 + 456) )
        {
          v12 = -1073741811;
          goto LABEL_7;
        }
        if ( *(_QWORD *)(v15 + 456) != *((_QWORD *)PtiCurrentShared(v16) + 57) )
        {
          v12 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v9 = PtiCurrentShared(v8);
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = _BuildHimcList(v9, v6, (struct HIMC__ **)a3);
    v12 = (unsigned int)v6 < v11 ? 0xC0000023 : 0;
    v18 = v12;
    *a4 = v11;
  }
  else
  {
    UserSetLastError(120);
    v12 = -1073741823;
  }
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}
