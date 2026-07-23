/*
 * XREFs of NtQueueApcThreadEx2 @ 0x1405CF9B0
 * Callers:
 *     NtQueueApcThreadEx @ 0x1405D6B00 (NtQueueApcThreadEx.c)
 *     NtQueueApcThread @ 0x14069D450 (NtQueueApcThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx2(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        ULONG ApcFlags,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  char v10; // r14
  KPROCESSOR_MODE PreviousMode; // si
  char v12; // bp
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v14; // rdi
  int v15; // ebx
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(); // r9
  void (__stdcall *v20)(PVOID, ULONG); // rsi
  char *PoolWithQuotaTag; // rbx
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v23; // [rsp+48h] [rbp-30h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (ApcFlags & 0xFFFEFFFE) == 0 )
  {
    if ( (ApcFlags & 1) == 0 )
    {
      v12 = 0;
LABEL_6:
      Object = 0LL;
      result = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
      if ( result < 0 )
        return result;
      v14 = (struct _DMA_ADAPTER *)Object;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0
        || (v14 = (struct _DMA_ADAPTER *)Object,
            (v16 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]) != 0)
        && ((v17 = *(_WORD *)(v16 + 8), v17 == 332) || v17 == 452)
        && ((v18 = *(_QWORD *)(*((_QWORD *)Object + 68) + 1408LL)) == 0 || *(_WORD *)(v18 + 8) == 0x8664)
        && (unsigned __int64)-((__int64)ApcRoutine >> 2) <= 0xFFFFFFFF )
      {
        v15 = -1073741816;
      }
      else
      {
        if ( !ReserveHandle )
        {
          PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
          if ( !PoolWithQuotaTag )
          {
            v15 = -1073741801;
            goto LABEL_29;
          }
          v19 = (__int64 (__fastcall *)())KeSpecialUserApcKernelRoutine;
          v10 = v12 ^ 1;
          v20 = ExFreePoolWithTag;
          if ( !v12 )
            v19 = (__int64 (__fastcall *)())SC_ENV::Free;
          goto LABEL_24;
        }
        v23 = 0LL;
        v15 = ObReferenceObjectByHandle(ReserveHandle, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v23, 0LL);
        if ( v15 >= 0 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0) )
          {
            HalPutDmaAdapter((PADAPTER_OBJECT)v23);
            v14 = (struct _DMA_ADAPTER *)Object;
            v15 = -1073741584;
            goto LABEL_29;
          }
          v19 = PspUserApcReserveKernelRoutine;
          v14 = (struct _DMA_ADAPTER *)Object;
          v20 = (void (__stdcall *)(PVOID, ULONG))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v23 + 8;
LABEL_24:
          KeInitializeApc(
            (__int64)PoolWithQuotaTag,
            (__int64)v14,
            0,
            (__int64)v19,
            (__int64)v20,
            (__int64)ApcRoutine,
            v10,
            (__int64)ApcArgument1);
          if ( (ApcFlags & 0x10000) != 0 )
            PoolWithQuotaTag[1] |= 1u;
          if ( KeInsertQueueApc((__int64)PoolWithQuotaTag, (__int64)ApcArgument2, (__int64)ApcArgument3, 0) )
          {
            v15 = 0;
          }
          else
          {
            ((void (__fastcall *)(char *))v20)(PoolWithQuotaTag);
            v15 = -1073741823;
          }
        }
      }
LABEL_29:
      HalPutDmaAdapter(v14);
      return v15;
    }
    if ( !ReserveHandle )
    {
      v12 = 1;
      goto LABEL_6;
    }
  }
  return -1073741811;
}
