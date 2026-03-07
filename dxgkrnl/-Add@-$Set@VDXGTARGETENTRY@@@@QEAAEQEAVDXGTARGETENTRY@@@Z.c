char __fastcall Set<DXGTARGETENTRY>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v6; // r11
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  if ( Set<DXGTARGETENTRY>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                          v4 + 8,
                          v3) )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v10,
        v9,
        v11,
        0LL,
        2,
        -1,
        L"bInsertTailStatus == TRUE",
        108LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  else
  {
    v7 = *(_QWORD **)(v6 + 32);
    v8 = (_QWORD *)(a2 + 8);
    if ( *v7 != v6 + 24 )
      __fastfail(3u);
    *v8 = v6 + 24;
    *(_QWORD *)(a2 + 16) = v7;
    *v7 = v8;
    *(_QWORD *)(v6 + 32) = v8;
    ++*(_QWORD *)(v6 + 40);
  }
  return 1;
}
