/*
 * XREFs of WmipQueryGuidInfo @ 0x140932DBC
 * Callers:
 *     WmipIoControl @ 0x1406A8220 (WmipIoControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall WmipQueryGuidInfo(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS v3; // ebx
  struct _DMA_ADAPTER *v4; // rdi
  _DMA_OPERATIONS *DmaOperations; // rsi
  void (__fastcall **p_FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // rsi
  void (__fastcall *i)(_DMA_ADAPTER *, void *, unsigned int); // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(void **)a1;
  DmaAdapter = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 1u, WmipGuidObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  if ( v3 >= 0 )
  {
    v4 = DmaAdapter;
    DmaOperations = DmaAdapter[3].DmaOperations;
    if ( DmaOperations )
    {
      *(_BYTE *)(a1 + 8) = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      p_FreeMapRegisters = &DmaOperations->FreeMapRegisters;
      for ( i = *p_FreeMapRegisters;
            (char *)i != (char *)p_FreeMapRegisters;
            i = *(void (__fastcall **)(_DMA_ADAPTER *, void *, unsigned int))i )
      {
        if ( (*((_DWORD *)i + 4) & 4) != 0 )
        {
          *(_BYTE *)(a1 + 8) = 1;
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    else
    {
      v3 = -1073741055;
    }
    HalPutDmaAdapter(v4);
  }
  return (unsigned int)v3;
}
