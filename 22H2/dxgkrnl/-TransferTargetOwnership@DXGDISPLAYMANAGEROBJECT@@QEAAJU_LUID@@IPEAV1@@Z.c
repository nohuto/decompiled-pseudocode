/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02B215C
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02B27C0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004D5E8 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004D670 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C004D6C0 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004D6DC (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1990 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGFASTMUTEX *const *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _BYTE v21[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-40h] BYREF
  void **v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h]
  struct _LUID v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v10 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    v25 = a2;
    v26 = v5;
    v23 = &SetElement::`vftable';
    v24 = 0LL;
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
      goto LABEL_7;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v13);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
                (struct _LUID *)&v23,
                (struct _LUID)a4,
                (__int64)this,
                0,
                0) < 0 )
      goto LABEL_3;
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
    {
LABEL_7:
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v15[3] = v5;
      v15[4] = HighPart;
      v15[5] = a2.LowPart;
      WdLogEvent5_WdError(v15);
      v10 = -1073741275;
      goto LABEL_3;
    }
    v16 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v16) )
    {
      v18 = (_QWORD *)(v16 + 8);
      v19 = *(_QWORD *)(v16 + 8);
      if ( *(_QWORD *)(v19 + 8) != v16 + 8 || (v17 = *(_QWORD **)(v16 + 16), (_QWORD *)*v17 != v18) )
        __fastfail(3u);
      *v17 = v19;
      *(_QWORD *)(v19 + 8) = v17;
      *v18 = 0LL;
      *(_QWORD *)(v16 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v16 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, (__int64)v17);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, a4[2], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)(a4 + 5), v16) && v16 )
      (**(void (__fastcall ***)(__int64, __int64))v16)(v16, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v20);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 226LL;
    WdLogEvent5_WdError(v11);
    v10 = -2147483611;
  }
LABEL_3:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  return v10;
}
