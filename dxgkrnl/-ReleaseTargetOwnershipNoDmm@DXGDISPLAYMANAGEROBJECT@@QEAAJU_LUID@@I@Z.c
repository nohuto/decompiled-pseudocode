__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // r11
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-48h] BYREF
  void **v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+68h] [rbp-30h]
  struct _LUID v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+80h] [rbp-18h]
  LONG HighPart; // [rsp+ACh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_QWORD *)this + 9) )
  {
    v17 = a2;
    v18 = v4;
    v15 = &SetElement::`vftable';
    v16 = 0LL;
    v8 = Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80);
    if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
            v7 + 8,
            v8) )
      goto LABEL_9;
    v10 = (_QWORD *)(v8 + 8);
    v11 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v11 + 8) != v8 + 8 || (v12 = *(_QWORD **)(v8 + 16), (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    --*(_QWORD *)(v9 + 40);
    if ( v8 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
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
    WdLogSingleEntry1(2LL, 192LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      192LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483611;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v6;
}
