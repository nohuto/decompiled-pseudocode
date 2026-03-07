char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v8,
        v7,
        v9,
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
  else
  {
    v4 = *(_QWORD **)(a1 + 32);
    v5 = (_QWORD *)(a2 + 8);
    if ( *v4 != a1 + 24 )
      __fastfail(3u);
    *v5 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
