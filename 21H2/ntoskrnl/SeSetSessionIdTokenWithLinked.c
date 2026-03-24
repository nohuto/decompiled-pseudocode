/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x14091C940
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x14027CA20 (SepReferenceTokenByHandle.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14027F814 (SepDeReferenceLogonSessionDirect.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     SepReferenceLogonSessionSilo @ 0x1405DC7FC (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x1406BA010 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2)
{
  void *v3; // rsi
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v6; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  void *v8; // r14
  _QWORD *v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-18h] BYREF
  void *(__fastcall *AllocateCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER *, unsigned __int8); // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+90h] [rbp+40h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+48h] BYREF

  DmaAdapter = 0LL;
  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v4 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, &DmaAdapter, &v14, &v13);
  if ( v4 < 0 )
  {
    v6 = DmaAdapter;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = DmaAdapter;
    ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
    if ( BYTE4(v6[12].DmaOperations) )
    {
      v4 = -1073741525;
      goto LABEL_13;
    }
    v4 = SepReferenceLogonSessionSilo(
           &v6[13].DmaOperations->PutDmaAdapter,
           (__int64)v6[13].DmaOperations->AllocateAdapterChannelEx,
           (__int64 *)&v10);
    if ( v4 >= 0 )
    {
      DmaOperations = v6[13].DmaOperations;
      v8 = (void *)v10[6];
      AllocateCommonBuffer = DmaOperations->AllocateCommonBuffer;
      if ( AllocateCommonBuffer )
      {
        v4 = SepReferenceLogonSessionSilo(
               &AllocateCommonBuffer,
               (__int64)DmaOperations->AllocateAdapterChannelEx,
               (__int64 *)&v11);
        if ( v4 < 0 )
          goto LABEL_13;
        v3 = (void *)v11[6];
      }
      if ( !v8 || (v4 = SeSetSessionIdToken(v8, a2), v4 >= 0) )
      {
        if ( v3 )
          v4 = SeSetSessionIdToken(v3, a2);
      }
    }
  }
LABEL_13:
  if ( v6 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)&v6[3].Version);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    HalPutDmaAdapter(DmaAdapter);
  }
  if ( v10 )
    SepDeReferenceLogonSessionDirect(v10);
  if ( v11 )
    SepDeReferenceLogonSessionDirect(v11);
  return (unsigned int)v4;
}
