__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGDISPLAYMANAGEROBJECT *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdi
  const wchar_t *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _BYTE v17[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-9h] BYREF
  void **v19; // [rsp+78h] [rbp+7h] BYREF
  __int128 v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+98h] [rbp+27h]
  LONG HighPart; // [rsp+E4h] [rbp+73h]

  HighPart = a2.HighPart;
  v4 = (__int64)a2;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry1(2LL, 224LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      224LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = -2147483611;
    goto LABEL_20;
  }
  v21 = v4;
  v22 = v5;
  v19 = &SetElement::`vftable';
  v20 = 0LL;
  if ( !Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80) )
  {
    v9 = HighPart;
    v4 = (unsigned int)v4;
    WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
    v10 = L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v5, v9, v4, 0LL, 0LL);
    v8 = -1073741275;
    goto LABEL_20;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
              (struct _LUID *)&v19,
              (struct _LUID)a4,
              (__int64)this,
              0,
              0) >= 0 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v11 = Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80);
    v12 = v11;
    if ( !v11 )
    {
      v9 = HighPart;
      v4 = (unsigned int)v4;
      WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
      v10 = L"Target 0x%I64x on adapter 0x%I64x-%I64x is just removed when the lock is released.";
      goto LABEL_8;
    }
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this + 88,
           v11) )
    {
      v13 = (_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(v14 + 8) != v12 + 8 || (v15 = *(_QWORD **)(v12 + 16), (_QWORD *)*v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      --*((_QWORD *)this + 15);
    }
    else
    {
      v12 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGDISPLAYMANAGEROBJECT *)((char *)a4 + 16), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)a4 + 80, v12) && v12 )
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
  v8 = 0;
LABEL_20:
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return v8;
}
