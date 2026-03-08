/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D2FFC
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C01D2FC0 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C0014704 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B614 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004B664 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F8E90 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(DXGDISPLAYMANAGEROBJECT *this)
{
  char *v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _BYTE v7[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object != nullptr", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 64) = 0;
  while ( 1 )
  {
    v2 = (char *)this + 80;
    if ( *((DXGDISPLAYMANAGEROBJECT **)this + 13) == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
      break;
    v3 = Set<DXGTARGETENTRY>::FindByValue((__int64)v2);
    if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
            (__int64)this + 88,
            v3) )
    {
      v3 = 0LL;
LABEL_13:
      WdLogSingleEntry1(1LL, 588LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEntry", 588LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_14;
    }
    v4 = (_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v5 + 8) != v3 + 8 || (v6 = *(_QWORD **)(v3 + 16), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    --*((_QWORD *)this + 15);
    if ( !v3 )
      goto LABEL_13;
LABEL_14:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v3, 0LL, this, 0LL, 0);
    if ( v3 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 10) + 24LL))(v2);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
