DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v5)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v12; // ecx

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6));
  *((_DWORD *)this + 14) = 1833173000;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 256LL;
  *((_DWORD *)this + 22) = 1;
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v5 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v5 != v6 && v6 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v6)[2])(v6, 1LL);
  *((_QWORD *)this + 14) = v5;
  if ( !v5 )
    goto LABEL_21;
  if ( !(**v5)(v5) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v12 = *(_DWORD *)(*((_QWORD *)this + 14) + 8LL);
    goto LABEL_24;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v7 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( v7 )
      v8 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v7, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v8 = 0LL;
    v9 = *((_QWORD *)this + 13);
    if ( v9 && v8 != (DMMVIDPNSOURCEMODESET *)v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 88));
    *((_QWORD *)this + 13) = v8;
    if ( v8 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v8 + 3))((__int64)v8 + 24) )
      {
        v10 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v10 + 112) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(v10 + 112) = this;
        goto LABEL_17;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v12 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_24:
      *((_DWORD *)this + 18) = v12;
      return this;
    }
LABEL_21:
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_17:
  *((_DWORD *)this + 22) = 2;
  return this;
}
