void __fastcall FxPoolFree(FX_POOL_TRACKER *ptr)
{
  FX_POOL_TRACKER *CallersAddress; // rbx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !ptr )
    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
  if ( ((unsigned __int16)ptr & 0xFFF) != 0 )
  {
    CallersAddress = (FX_POOL_TRACKER *)ptr[-1].CallersAddress;
    if ( *(_BYTE *)(*((_QWORD *)&ptr[-1].CallersAddress + 1) + 272LL) )
    {
      if ( FxIsPagedPoolType(CallersAddress->PoolType) )
        FxPoolRemovePagedAllocateTracker(CallersAddress);
      else
        FxPoolRemoveNonPagedAllocateTracker(CallersAddress);
      memset(CallersAddress, 0, CallersAddress->Size + 64);
    }
    ptr = CallersAddress;
  }
  ExFreePoolWithTag(ptr, 0);
}
