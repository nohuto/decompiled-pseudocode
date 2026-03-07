__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-48h] BYREF
  void **v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+68h] [rbp-30h]
  struct _LUID v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+80h] [rbp-18h]
  LONG HighPart; // [rsp+ACh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( *((_QWORD *)this + 9) )
  {
    v15 = a2;
    v16 = v4;
    v13 = &SetElement::`vftable';
    v14 = 0LL;
    v7 = Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80);
    if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
            (__int64)this + 88,
            v7) )
      goto LABEL_9;
    v8 = (_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v9 + 8) != v7 + 8 || (v10 = *(_QWORD **)(v7 + 16), (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    --*((_QWORD *)this + 15);
    if ( v7 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm((struct _LUID *)v7, 0LL, (__int64)this, 0, 0);
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
      v6 = 0;
    }
    else
    {
LABEL_9:
      WdLogSingleEntry3(2LL, v4, HighPart, a2.LowPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x",
        v4,
        HighPart,
        a2.LowPart,
        0LL,
        0LL);
      v6 = -1073741275;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 158LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      158LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483611;
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v6;
}
