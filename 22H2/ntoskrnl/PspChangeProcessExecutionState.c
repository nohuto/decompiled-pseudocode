/*
 * XREFs of PspChangeProcessExecutionState @ 0x140605D50
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14031AFD0 (PspExecuteJobFreezeThawCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x140907A30 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14068595C (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r15d
  char v5; // r13
  unsigned __int32 DirectoryTableBase; // eax
  struct _DMA_ADAPTER *v8; // rbp
  int v9; // ebx
  unsigned int v10; // esi
  unsigned __int32 v12; // ett
  char v13; // r12
  char v14; // r14
  unsigned int SessionId; // eax
  __int64 v16; // rdx
  _KPROCESS *SessionById; // rax
  char v18; // r14
  unsigned __int32 v19; // edx
  int v20; // r8d
  bool v21; // zf
  signed __int32 v22; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v24; // eax
  char v25; // [rsp+20h] [rbp-98h]
  _OWORD v26[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v27[3]; // [rsp+58h] [rbp-60h] BYREF

  v25 = 0;
  v4 = 0;
  memset(v27, 0, sizeof(v27));
  v5 = 0;
  memset(v26, 0, sizeof(v26));
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v8 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v9 = (DirectoryTableBase >> 28) & 3;
    v10 = (DirectoryTableBase >> 22) & 3;
    if ( v9 == v10 )
      break;
    v12 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v12 == DirectoryTableBase )
    {
LABEL_6:
      v13 = 0;
      v14 = v10 ^ v9;
      if ( !v5 )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v27, a4);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId, v16);
          v8 = (struct _DMA_ADAPTER *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)v26) < 0 )
            {
              HalPutDmaAdapter(v8);
              v8 = 0LL;
            }
          }
        }
        v5 = 1;
      }
      if ( (v14 & 2) != 0 )
      {
        if ( (v9 & 2) != 0 )
          v13 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v14 & 1) != 0 )
      {
        v18 = 1;
        v25 = 1;
        if ( (v9 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)Process);
        else
          PsThawProcess((ULONG_PTR)Process);
      }
      else
      {
        v18 = v25;
      }
      v10 = v9;
      if ( v13 )
      {
        v24 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v24 < 0 )
        {
          if ( v24 == -1073741671 )
            v4 = -1073741671;
          v10 = v9 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      v19 = Process[1].DirectoryTableBase;
      v20 = v9;
      do
      {
        v9 = (v19 >> 28) & 3;
        if ( v9 != v20 && v9 != v10 )
          goto LABEL_6;
        v22 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                v19 & 0x8F3FFFFF | ((v10 | (v10 << 6)) << 22),
                v19);
        v21 = v19 == v22;
        v19 = v22;
      }
      while ( !v21 );
      if ( v8 )
      {
        MmDetachSession((__int64)v8, (__int64)v26);
        HalPutDmaAdapter(v8);
      }
      KiUnstackDetachProcess((__int64)v27, 0);
      if ( v18 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v4;
    }
  }
  return v4;
}
