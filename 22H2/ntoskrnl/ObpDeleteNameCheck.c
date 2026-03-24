/*
 * XREFs of ObpDeleteNameCheck @ 0x1406F6EB0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14034C1A8 (ObpDereferenceNamedObject.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObMakeTemporaryObject @ 0x1406F62F0 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ObpReleaseLookupContext @ 0x140347AE0 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x14034D1A0 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x1406F82C0 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406F8330 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406F8970 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  char v1; // al
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v6; // rbp
  char v7; // al
  struct _KTHREAD *v8; // rax
  struct _DMA_ADAPTER *v9; // r10
  struct _DMA_ADAPTER *v11; // r14
  struct _OBJECT_TYPE *v12; // r15
  struct _DMA_ADAPTER *v13; // rax
  __int64 v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]
  __int16 v17; // [rsp+4Ch] [rbp-2Ch]
  __int16 v18; // [rsp+4Eh] [rbp-2Ah]
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]

  v1 = *(_BYTE *)(a1 + 26);
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  if ( (v1 & 2) != 0 )
  {
    v3 = ObpInfoMaskToOffset[v1 & 3];
    v4 = a1 - v3;
    if ( a1 != v3 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v6 = *(struct _DMA_ADAPTER **)v4;
        if ( !*(_QWORD *)v4 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v7 = 0) : (v7 = 1), !v7) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v4);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v18 = 0;
        v19 = -60876;
        *(_OWORD *)v14 = 0LL;
        ObpLockDirectoryExclusive((__int64)v14, v6);
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v9 = *(struct _DMA_ADAPTER **)v4;
        if ( *(struct _DMA_ADAPTER **)v4 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v14);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        HalPutDmaAdapter(v6);
      }
      v11 = 0LL;
      if ( !*(_DWORD *)(v4 + 24) )
      {
        v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v12 == ObpSymbolicLinkObjectType )
        {
          ObpDeleteSymbolicLinkName(a1 + 48);
          v9 = *(struct _DMA_ADAPTER **)v4;
        }
        v13 = (struct _DMA_ADAPTER *)ObpLookupDirectoryEntryEx(
                                       v9,
                                       (unsigned __int16 *)(v4 + 8),
                                       0,
                                       0LL,
                                       0,
                                       (__int64)v14);
        v11 = v13;
        if ( v12 == ObpDirectoryObjectType )
          ObfReferenceObject(v13);
        else
          v11 = 0LL;
        ObpDeleteDirectoryEntry(v14);
      }
      ObpReleaseLookupContext((__int64)v14);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      HalPutDmaAdapter(v6);
      if ( v11 )
      {
        ObpMarkDirectoryTreeTemporary(v11);
        HalPutDmaAdapter(v11);
      }
    }
  }
}
