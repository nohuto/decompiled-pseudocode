char Set<DMMVIDPN>::Add()
{
  __int64 v0; // r10
  __int64 v1; // r11
  int v3; // edx
  int v4; // r8d

  if ( Set<DMMVIDPN>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::InsertTail(v1 + 8, v0) != 1 )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (unsigned int)L"bInsertTailStatus == TRUE",
          v3,
          v4,
          0,
          2,
          -1,
          (__int64)L"bInsertTailStatus == TRUE",
          108LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return 1;
}
