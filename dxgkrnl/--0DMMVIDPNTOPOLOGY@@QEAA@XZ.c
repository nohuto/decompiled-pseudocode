/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0005360
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0181300 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  unsigned __int8 (__fastcall ***v1)(_QWORD); // r14
  char *v3; // rsi
  void *v4; // rax
  void *v5; // rax
  unsigned __int8 (__fastcall **v6)(char *); // rax
  unsigned __int8 (__fastcall **v7)(_QWORD); // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx

  v1 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  v3 = (char *)this + 80;
  *((_DWORD *)this + 12) = 2;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_BYTE *)this + 192) = 1;
  *((_QWORD *)this + 7) = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 76) = 4;
  *((_WORD *)this + 39) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 10) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 12) = 4LL;
  *((_DWORD *)this + 28) = 1;
  v4 = (void *)operator new[](4LL, 1313891414LL, 256LL);
  *((_QWORD *)v3 + 3) = v4;
  if ( v4 )
  {
    memset(v4, 0, *((_QWORD *)v3 + 2));
    *((_DWORD *)v3 + 8) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)v3 + 2) = -1073741801;
  }
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 15) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 17) = 4LL;
  *((_DWORD *)this + 38) = 1;
  v5 = (void *)operator new[](32LL, 1313891414LL, 256LL);
  *((_QWORD *)this + 18) = v5;
  if ( v5 )
  {
    memset(v5, 0, 8LL * *((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 32) = -1073741801;
  }
  v6 = *(unsigned __int8 (__fastcall ***)(char *))v3;
  *((_DWORD *)this + 18) = 1;
  if ( (*v6)(v3) && (**((unsigned __int8 (__fastcall ***)(char *))this + 15))((char *)this + 120) )
  {
    *((_DWORD *)this + 18) = 2;
  }
  else
  {
    v9 = *((_DWORD *)this + 22);
    if ( v9 >= 0 )
      v9 = *((_DWORD *)this + 32);
    *((_DWORD *)this + 16) = v9;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 1833173002;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  v7 = *v1;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 200) = 0;
  if ( !(*v7)(v1) )
  {
    v10 = WdLogNewEntry5_WdTrace();
    v11 = *((int *)this + 4);
LABEL_18:
    *(_QWORD *)(v10 + 24) = v11;
    return this;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v10 = WdLogNewEntry5_WdTrace();
    v11 = *((int *)this + 16);
    goto LABEL_18;
  }
  return this;
}
