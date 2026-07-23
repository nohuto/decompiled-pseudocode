/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x14091CAA0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceTokenByHandle @ 0x14026A9C0 (SepReferenceTokenByHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeSetSessionIdToken @ 0x140619180 (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2)
{
  void *v3; // rsi
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v6; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  void *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-18h] BYREF
  void *(__fastcall *AllocateCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER *, unsigned __int8); // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  char v17; // [rsp+90h] [rbp+40h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+48h] BYREF

  DmaAdapter = 0LL;
  v13 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, &DmaAdapter, &v17, &v16);
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
           (__int64 *)&v13);
    if ( v4 >= 0 )
    {
      DmaOperations = v6[13].DmaOperations;
      v8 = (void *)v13[6];
      AllocateCommonBuffer = DmaOperations->AllocateCommonBuffer;
      if ( AllocateCommonBuffer )
      {
        v4 = SepReferenceLogonSessionSilo(
               &AllocateCommonBuffer,
               (__int64)DmaOperations->AllocateAdapterChannelEx,
               (__int64 *)&v14);
        if ( v4 < 0 )
          goto LABEL_13;
        v3 = (void *)v14[6];
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    HalPutDmaAdapter(DmaAdapter);
  }
  if ( v13 )
    SepDeReferenceLogonSessionDirect(v13);
  if ( v14 )
    SepDeReferenceLogonSessionDirect(v14);
  return (unsigned int)v4;
}
