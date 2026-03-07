__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  const struct DMMVIDPNSOURCE *v6; // rbp
  DMMVIDPNSOURCE *Pool2; // rax
  DMMVIDPNSOURCE *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry1(1LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v16,
          v15,
          v17,
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
  if ( v5 == a2 + 16 || (v6 = (const struct DMMVIDPNSOURCE *)(v5 - 8)) == 0LL )
  {
LABEL_19:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry1(1LL, 186LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
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
      Pool2 = (DMMVIDPNSOURCE *)ExAllocatePool2(256LL, 184LL, 1265072196LL);
      if ( !Pool2 )
        break;
      v8 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(Pool2, v6);
      if ( !v8 )
        break;
      if ( (_QWORD *)*v4 == v4 || (v9 = *v4 - 8LL, *v4 == 8LL) )
      {
LABEL_14:
        v11 = *(_QWORD **)(a1 + 24);
        v12 = (_QWORD *)((char *)v8 + 8);
        if ( (_QWORD *)*v11 != v4 )
          __fastfail(3u);
        *v12 = v4;
        v12[1] = v11;
        *v11 = v12;
        *(_QWORD *)(a1 + 24) = v12;
        ++*(_QWORD *)(a1 + 32);
      }
      else
      {
        while ( (DMMVIDPNSOURCE *)v9 != v8 )
        {
          v10 = *(_QWORD **)(v9 + 8);
          v9 = (__int64)(v10 - 1);
          if ( v10 == v4 )
            v9 = 0LL;
          if ( !v9 )
            goto LABEL_14;
        }
      }
      v13 = *((_QWORD *)v6 + 1);
      v6 = (const struct DMMVIDPNSOURCE *)(v13 - 8);
      if ( v13 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
        goto LABEL_19;
    }
    WdLogSingleEntry1(6LL, 172LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v19,
        v18,
        v20,
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
