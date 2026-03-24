/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C0163FDC
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C0163FA0 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C0019FA0 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004D670 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004D6DC (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1990 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(struct DXGFASTMUTEX *const *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( !*((_QWORD *)this + 4) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v7 + 24) = 576LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 24) = 0;
  while ( 1 )
  {
    v4 = (char *)(this + 5);
    if ( *((struct DXGFASTMUTEX *const **)this + 8) == this + 8 )
      break;
    v8 = Set<DXGTARGETENTRY>::FindByValue((__int64)v4);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v8) )
    {
      v13 = (_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v14 + 8) != v8 + 8 || (v12 = *(_QWORD **)(v8 + 16), (_QWORD *)*v12 != v13) )
        __fastfail(3u);
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      *v13 = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v8 = 0LL;
      v11 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v11 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v11);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, (__int64)v12);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v8, 0LL, this, 0LL, 0);
    if ( v8 )
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 24LL))(v4);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
    (__int64)(this + 12),
    v5);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v6);
}
