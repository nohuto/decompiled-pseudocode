DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  DMMVIDPNTARGETMODE *v21; // rax
  DMMVIDPNTARGETMODE *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  struct DMMVIDPNTARGETMODE *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  struct DMMVIDPNTARGETMODE *v42; // [rsp+90h] [rbp+8h]

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v31,
          v30,
          v32,
          0,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  v5 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v5;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v7 != v8 && v8 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v8)[2])(v8, 1LL);
  *((_QWORD *)this + 15) = v7;
  if ( !v7 )
    goto LABEL_57;
  if ( !(**v7)(v7) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_27;
  v9 = ExAllocatePool2(256LL, 152LL, 1313891414LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = *((_QWORD *)a2 + 13);
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)v9 = &SetElement::`vftable';
    *(_QWORD *)(v9 + 24) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 32) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
    *(_DWORD *)(v9 + 72) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v11 + 32))(v11 + 32)
      || !*(_QWORD *)(v11 + 48)
      || !*(_QWORD *)(v11 + 56) )
    {
      WdLogSingleEntry1(1LL, 155LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v34,
            v33,
            v35,
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
    v12 = (_QWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 56) = v10 + 48;
    *(_QWORD *)(v10 + 48) = v10 + 48;
    *(_QWORD *)(v10 + 64) = 0LL;
    v13 = *(_QWORD *)(v11 + 48);
    if ( v13 == v11 + 48 || (v42 = (struct DMMVIDPNTARGETMODE *)(v13 - 8), v13 == 8) )
    {
LABEL_15:
      if ( *(_QWORD *)(v10 + 64) != *(_QWORD *)(v11 + 64) )
      {
        WdLogSingleEntry1(1LL, 186LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v40,
              v39,
              v41,
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
      *(_DWORD *)(v10 + 72) = 2;
    }
    else
    {
      while ( 1 )
      {
        v21 = (DMMVIDPNTARGETMODE *)ExAllocatePool2(256LL, 168LL, 1265072196LL);
        if ( !v21 )
          break;
        v22 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v21, v42);
        if ( !v22 )
          break;
        if ( (_QWORD *)*v12 == v12 || (v24 = *v12 - 8LL, *v12 == 8LL) )
        {
LABEL_45:
          v26 = *(_QWORD **)(v10 + 56);
          v27 = (_QWORD *)((char *)v22 + 8);
          if ( (_QWORD *)*v26 != v12 )
            __fastfail(3u);
          *v27 = v12;
          *((_QWORD *)v22 + 2) = v26;
          *v26 = v27;
          *(_QWORD *)(v10 + 56) = v27;
          ++*(_QWORD *)(v10 + 64);
        }
        else
        {
          while ( (DMMVIDPNTARGETMODE *)v24 != v22 )
          {
            v25 = *(_QWORD **)(v24 + 8);
            v24 = (__int64)(v25 - 1);
            if ( v25 == v12 )
              v24 = 0LL;
            if ( !v24 )
              goto LABEL_45;
          }
        }
        v28 = *(_QWORD *)(v23 + 8);
        v29 = (struct DMMVIDPNTARGETMODE *)(v28 - 8);
        if ( v28 == v11 + 48 )
          v29 = 0LL;
        v42 = v29;
        if ( !v29 )
          goto LABEL_15;
      }
      WdLogSingleEntry1(6LL, 172LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v37,
          v36,
          v38,
          0,
          1,
          -1,
          (__int64)L"Failed to allocate memory for doubly linked list element",
          172LL,
          0LL,
          0LL,
          0LL,
          0LL);
      *(_DWORD *)(v10 + 40) = -1073741801;
    }
    *(_DWORD *)(v10 + 80) = 0;
    *(_QWORD *)(v10 + 24) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    *(_BYTE *)(v10 + 136) = 1;
    *(_QWORD *)(v10 + 88) = &ReferenceCounted::`vftable';
    *(_DWORD *)(v10 + 96) = 1;
    *(_QWORD *)(v10 + 112) = 0LL;
    *(_DWORD *)(v10 + 128) = 1833173005;
    *(_QWORD *)v10 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    *(_QWORD *)(v10 + 24) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v10 + 88) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    *(_QWORD *)(v10 + 104) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    *(_QWORD *)(v10 + 120) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v10 + 32))(v10 + 32) )
    {
      v14 = *(_QWORD *)(v10 + 48);
      if ( v14 != v10 + 48 )
      {
        v19 = v14 - 8;
        while ( v19 )
        {
          if ( *(_QWORD *)(v19 + 40) )
            WdLogSingleEntry0(1LL);
          *(_QWORD *)(v19 + 40) = v10;
          v20 = *(_QWORD *)(v19 + 8);
          v19 = v20 - 8;
          if ( v20 == v10 + 48 )
            v19 = 0LL;
        }
      }
      v15 = *(_QWORD *)(v11 + 144);
      *(_QWORD *)(v10 + 144) = v15
                             ? IndexedSet<DMMVIDPNTARGETMODE>::FindById(v10 + 24, *(unsigned int *)(v15 + 24))
                             : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *(int *)(v10 + 40);
    }
  }
  else
  {
    v10 = 0LL;
  }
  v16 = *((_QWORD *)this + 13);
  if ( v16 && v10 != v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 88));
  *((_QWORD *)this + 13) = v10;
  if ( !v10 )
  {
LABEL_57:
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v10 + 24))(v10 + 24) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v17 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v17 + 112) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(v17 + 112) = this;
LABEL_27:
  *((_DWORD *)this + 22) = 2;
  return this;
}
