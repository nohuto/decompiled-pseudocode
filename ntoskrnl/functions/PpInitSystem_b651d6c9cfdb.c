char PpInitSystem()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  }
  else
  {
    ExInitializeResourceLite(&PnpRegistryDeviceResource);
    PnpDeviceReferenceTableLock.Owner = 0LL;
    PnpDeviceReferenceTableLock.Contention = 0;
    PnpDeviceReferenceTableLock.Event.Header.SignalState = 0;
    PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
    PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
    PnpDeviceReferenceTableLock.Count = 1;
    LOWORD(PnpDeviceReferenceTableLock.Event.Header.Lock) = 1;
    PnpDeviceReferenceTableLock.Event.Header.Size = 6;
    RtlInitializeGenericTableAvl(
      &PnpDeviceReferenceTable,
      (PRTL_AVL_COMPARE_ROUTINE)PnpCompareInstancePath,
      (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
      0LL);
  }
  return 1;
}
