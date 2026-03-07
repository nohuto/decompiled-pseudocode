__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 Pool2; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8
  int v11; // ecx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry1(1LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v17,
          v16,
          v18,
          0,
          2,
          -1,
          (__int64)L"i_rList.IsValid()",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 == a2 + 16 || (v7 = v5 - 8, v5 == 8) )
  {
LABEL_5:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry1(1LL, 186LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v23,
            v22,
            v24,
            0,
            2,
            -1,
            (__int64)L"this->GetNumElements() == i_rList.GetNumElements()",
            186LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      Pool2 = ExAllocatePool2(256LL, 112LL, 1265072196LL);
      v9 = Pool2;
      if ( !Pool2 )
        break;
      *(_QWORD *)Pool2 = &SetElement::`vftable';
      v10 = (_QWORD *)(Pool2 + 8);
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      v11 = *(_DWORD *)(v7 + 24);
      *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      *(_QWORD *)(Pool2 + 40) = 0LL;
      *(_DWORD *)(Pool2 + 24) = v11;
      *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v7 + 56);
      *(_QWORD *)Pool2 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      *(_QWORD *)(Pool2 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
      *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(v7 + 72);
      *(_OWORD *)(Pool2 + 76) = *(_OWORD *)(v7 + 76);
      *(_OWORD *)(Pool2 + 92) = *(_OWORD *)(v7 + 92);
      if ( (_QWORD *)*v4 == v4 || (v12 = *v4 - 8LL, *v4 == 8LL) )
      {
LABEL_16:
        v14 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v14 != v4 )
          __fastfail(3u);
        *v10 = v4;
        v10[1] = v14;
        *v14 = v10;
        *(_QWORD *)(a1 + 24) = v10;
        ++*(_QWORD *)(a1 + 32);
      }
      else
      {
        while ( v12 != v9 )
        {
          v13 = *(_QWORD **)(v12 + 8);
          v12 = (__int64)(v13 - 1);
          if ( v13 == v4 )
            v12 = 0LL;
          if ( !v12 )
            goto LABEL_16;
        }
      }
      v15 = *(_QWORD *)(v7 + 8);
      v7 = v15 - 8;
      if ( v15 == a2 + 16 )
        v7 = 0LL;
      if ( !v7 )
        goto LABEL_5;
    }
    WdLogSingleEntry1(6LL, 172LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v20,
        v19,
        v21,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate memory for doubly linked list element",
        172LL,
        0LL,
        0LL,
        0LL,
        0LL);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
