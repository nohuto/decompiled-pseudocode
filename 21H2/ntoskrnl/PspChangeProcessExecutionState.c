/*
 * XREFs of PspChangeProcessExecutionState @ 0x1406F5340
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14023FDD0 (PspExecuteJobFreezeThawCallback.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x140907B40 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  unsigned int v1; // r15d
  char v2; // r13
  unsigned __int32 DirectoryTableBase; // eax
  struct _DMA_ADAPTER *v5; // rbp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned __int32 v9; // ett
  char v10; // r12
  char v11; // r14
  unsigned int SessionId; // eax
  __int64 v13; // rdx
  ULONG_PTR SessionById; // rax
  char v15; // r14
  unsigned __int32 v16; // edx
  int v17; // r8d
  bool v18; // zf
  signed __int32 v19; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v21; // eax
  char v22; // [rsp+20h] [rbp-98h]
  _OWORD v23[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v24[3]; // [rsp+58h] [rbp-60h] BYREF

  v22 = 0;
  v1 = 0;
  memset(v24, 0, sizeof(v24));
  v2 = 0;
  memset(v23, 0, sizeof(v23));
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v5 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v6 = (DirectoryTableBase >> 28) & 3;
    v7 = (DirectoryTableBase >> 22) & 3;
    if ( v6 == v7 )
      break;
    v9 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v9 == DirectoryTableBase )
    {
LABEL_6:
      v10 = 0;
      v11 = v7 ^ v6;
      if ( !v2 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v24);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId, v13);
          v5 = (struct _DMA_ADAPTER *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              HalPutDmaAdapter(v5);
              v5 = 0LL;
            }
          }
        }
        v2 = 1;
      }
      if ( (v11 & 2) != 0 )
      {
        if ( (v6 & 2) != 0 )
          v10 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v11 & 1) != 0 )
      {
        v15 = 1;
        v22 = 1;
        if ( (v6 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)Process, 1);
        else
          PsThawProcess((ULONG_PTR)Process, 1);
      }
      else
      {
        v15 = v22;
      }
      v7 = v6;
      if ( v10 )
      {
        v21 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v21 < 0 )
        {
          if ( v21 == -1073741671 )
            v1 = -1073741671;
          v7 = v6 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      v16 = Process[1].DirectoryTableBase;
      v17 = v6;
      do
      {
        v6 = (v16 >> 28) & 3;
        if ( v6 != v17 && v6 != v7 )
          goto LABEL_6;
        v19 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                v16 & 0x8F3FFFFF | ((v7 | (v7 << 6)) << 22),
                v16);
        v18 = v16 == v19;
        v16 = v19;
      }
      while ( !v18 );
      if ( v5 )
      {
        MmDetachSession((__int64)v5, (__int64)v23);
        HalPutDmaAdapter(v5);
      }
      KiUnstackDetachProcess((__int64)v24, 0LL);
      if ( v15 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v1;
    }
  }
  return v1;
}
