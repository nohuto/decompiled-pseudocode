/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1406FB498
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14035188C (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1406FB400 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x14070C958 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 *     ObIsKernelHandle @ 0x14034FF70 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140538F10 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _DWORD *v14; // r9
  _KPROCESS *v15; // rax
  ULONG_PTR BugCheckParameter1a; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h]
  unsigned __int64 v19; // [rsp+58h] [rbp-31h]
  _OWORD v20[3]; // [rsp+60h] [rbp-29h] BYREF

  v18 = a3;
  v19 = a2;
  BugCheckParameter1a = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  if ( !BugCheckParameter1 )
  {
    SessionVm = 1LL;
    goto LABEL_31;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    if ( BugCheckParameter1 == -3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[281] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle((HANDLE)BugCheckParameter1) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                8,
                (__int64)PsProcessType,
                0,
                0x66506D4Du,
                &BugCheckParameter1a,
                0LL,
                0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1a;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v20, v14);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle((HANDLE)BugCheckParameter1, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v7 = (struct _DMA_ADAPTER *)Object;
    if ( result < 0 )
      return result;
    v15 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v8 = (struct _DMA_ADAPTER *)v15;
    if ( !v15 )
    {
LABEL_29:
      HalPutDmaAdapter(v7);
      return 0;
    }
    if ( (int)MmAttachSession(v15, (__int64)v20) < 0 )
    {
      HalPutDmaAdapter(v8);
      goto LABEL_29;
    }
    SessionVm = MiGetSessionVm();
LABEL_31:
    p_LockNV = (_DWORD *)BugCheckParameter1a;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 416);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v19, v18, SessionVm, a4);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v20, 0);
  if ( v8 )
  {
    MmDetachSession((__int64)v8, (__int64)v20);
    HalPutDmaAdapter(v8);
  }
  if ( BugCheckParameter1 == -2LL || BugCheckParameter1 - 1 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v7 )
    {
      HalPutDmaAdapter(v7);
    }
  }
  return v12;
}
