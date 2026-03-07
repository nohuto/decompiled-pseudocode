_QWORD *__fastcall DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::`scalar deleting destructor'(
        _QWORD *P,
        char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  *P = &DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::`vftable';
  v3 = (_QWORD **)(P + 2);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    --P[4];
    *v5 = 0LL;
    v5[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 10));
  }
  if ( P[4] )
  {
    WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0,
          2,
          -1,
          (__int64)L"this->GetNumElements() == 0",
          394LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
