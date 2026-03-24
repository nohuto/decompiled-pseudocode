/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0007A14
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C000AE2C (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00076CC (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD **v7; // r14
  const struct DMMVIDPNSOURCE *v8; // rbp
  _QWORD *v9; // rcx
  DMMVIDPNSOURCE *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  DMMVIDPNSOURCE *v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v19 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v7 = (_QWORD **)(a1 + 16);
  v8 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = *(_QWORD **)(a2 + 16);
  if ( v9 != (_QWORD *)(a2 + 16) )
    v8 = (const struct DMMVIDPNSOURCE *)(v9 - 1);
  if ( v8 )
  {
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNSOURCE *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x4B677844u);
      v14 = PoolWithTag ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(PoolWithTag, v8) : 0LL;
      if ( !v14 )
        break;
      v9 = *v7;
      v5 = 0LL;
      if ( *v7 != v7 )
        v5 = (__int64)(*v7 - 1);
      while ( v5 && (DMMVIDPNSOURCE *)v5 != v14 )
      {
        v18 = *(_QWORD ***)(v5 + 8);
        v5 = (__int64)(v18 - 1);
        if ( v18 == v7 )
          v5 = 0LL;
      }
      if ( !v5 )
      {
        v9 = *(_QWORD **)(a1 + 24);
        v15 = (_QWORD *)((char *)v14 + 8);
        if ( (_QWORD **)*v9 != v7 )
          __fastfail(3u);
        *v15 = v7;
        *((_QWORD *)v14 + 2) = v9;
        *v9 = v15;
        *(_QWORD *)(a1 + 24) = v15;
        ++*(_QWORD *)(a1 + 32);
      }
      v16 = *((_QWORD *)v8 + 1);
      v8 = (const struct DMMVIDPNSOURCE *)(v16 - 8);
      if ( v16 == a2 + 16 )
        v8 = 0LL;
      if ( !v8 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_20;
      }
    }
    v20 = WdLogNewEntry5_WdLowResource(v12, v11, 0LL, v13);
    *(_QWORD *)(v20 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v20);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_20:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v5);
      *(_QWORD *)(v21 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v21);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
