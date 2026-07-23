/*
 * XREFs of NtAlpcCreateSectionView @ 0x1406FFC00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D9700 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x1406DB348 (AlpcpDeleteView.c)
 *     AlpcpCreateSectionView @ 0x1406FFE28 (AlpcpCreateSectionView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v7; // rcx
  KPROCESSOR_MODE v8; // r9
  int SectionView; // ebx
  struct _DMA_ADAPTER *v10; // r13
  void *v11; // r15
  ULONG_PTR v12; // r14
  PVOID Object[6]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  memset(&Object[2], 0, 32);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v7 = (__int64)ViewAttributes;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  else
  {
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  if ( LODWORD(Object[2]) || !Object[5] || Object[4] )
  {
LABEL_22:
    SectionView = -1073741811;
  }
  else
  {
    v8 = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v8, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v10 = (struct _DMA_ADAPTER *)Object[0];
      v11 = (void *)AlpcReferenceBlobByHandle(
                      (_QWORD *)(*((_QWORD *)Object[0] + 2) + 40LL),
                      (int)Object[3],
                      AlpcSectionType);
      Object[1] = v11;
      if ( v11 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v11, v10, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v12);
          }
          else
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
          }
          AlpcpDereferenceBlobEx(v12, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v11, 1);
      }
      else
      {
        SectionView = -1073741816;
      }
      HalPutDmaAdapter(v10);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SectionView;
}
