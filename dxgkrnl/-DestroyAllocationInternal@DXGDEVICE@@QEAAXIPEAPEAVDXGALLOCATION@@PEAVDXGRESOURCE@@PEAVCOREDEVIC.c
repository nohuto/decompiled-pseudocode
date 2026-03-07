void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // r14
  unsigned int v10; // r15d
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // rdi
  struct DXGRESOURCE *v20; // rsi
  struct COREDEVICEACCESS *v21; // r14
  struct DXGALLOCATION *v22; // r9
  struct COREDEVICEACCESS *v23; // rsi
  struct DXGALLOCATION *v24; // r9
  struct DXGALLOCATION *v25; // [rsp+80h] [rbp+8h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 6546LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
      6546LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a6.0;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v12 + 209) )
  {
    v25 = (struct DXGALLOCATION *)(v12 + 4472);
    if ( a4 )
      v10 = *((_DWORD *)a4 + 5);
    v13 = *((_DWORD *)this + 118);
    v14 = (__int64)a4 + 20;
    if ( !a4 )
      v14 = 20LL;
    Current = DXGPROCESS::GetCurrent(v12);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      v25,
      *((_DWORD *)Current + 126),
      v13,
      v10,
      v8,
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v11);
    if ( a4 )
      *(_DWORD *)v14 = 0;
    if ( (_DWORD)v8 )
    {
      v16 = a3;
      v17 = v8;
      do
      {
        v18 = (__int64)*v16++;
        *(_BYTE *)(v18 + 128) &= ~4u;
        --v17;
      }
      while ( v17 );
    }
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(
      this,
      a4,
      1,
      *((struct DXGALLOCATION **)a4 + 3),
      a5,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v11);
  }
  else
  {
    v25 = 0LL;
    DXGDEVICE::RemoveAllocationsAndTransferToList(this, a3, v8, &v25);
    v19 = v25;
    if ( v25 )
    {
      v20 = (struct DXGRESOURCE *)*((_QWORD *)v25 + 5);
      if ( v20 )
      {
        v21 = a5;
        do
        {
          v22 = v19;
          v19 = (struct DXGALLOCATION *)*((_QWORD *)v19 + 8);
          *((_QWORD *)v22 + 8) = 0LL;
          DXGDEVICE::TerminateAllocations(this, v20, 0, v22, v21, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v11);
        }
        while ( v19 );
      }
      else
      {
        v23 = a5;
        do
        {
          v24 = v19;
          v19 = (struct DXGALLOCATION *)*((_QWORD *)v19 + 8);
          *((_QWORD *)v24 + 8) = 0LL;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v24, v23, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v11);
        }
        while ( v19 );
      }
    }
  }
}
