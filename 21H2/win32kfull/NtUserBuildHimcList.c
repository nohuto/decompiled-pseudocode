/*
 * XREFs of NtUserBuildHimcList @ 0x1C010F110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z @ 0x1C010F208 (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z.c)
 */

__int64 __fastcall NtUserBuildHimcList(__int64 a1, __int64 a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const struct tagTHREADINFO *ThreadWin32Thread; // rbx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rax
  _BYTE v18[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-24h]

  v6 = (unsigned int)a2;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  if ( (*gpsi & 4) != 0 )
  {
    if ( v7 )
    {
      if ( v7 == -1 )
      {
        ThreadWin32Thread = 0LL;
      }
      else
      {
        v17 = PtiFromThreadId(v7);
        ThreadWin32Thread = (const struct tagTHREADINFO *)v17;
        if ( !v17 || !*(_QWORD *)(v17 + 456) )
        {
          v14 = -1073741811;
          goto LABEL_7;
        }
        if ( *(_QWORD *)(v17 + 456) != *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
        {
          v14 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      ThreadWin32Thread = (const struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = _BuildHimcList(ThreadWin32Thread, v6, (struct HIMC__ **)a3);
    v14 = (unsigned int)v6 < v11 ? 0xC0000023 : 0;
    v19 = v14;
    *a4 = v11;
  }
  else
  {
    UserSetLastError(120LL, v8);
    v14 = -1073741823;
  }
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18, v12, v13);
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
