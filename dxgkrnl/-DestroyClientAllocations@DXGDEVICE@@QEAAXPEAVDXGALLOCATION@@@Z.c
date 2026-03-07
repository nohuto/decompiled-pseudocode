void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v2; // rdi
  struct DXGALLOCATION *v4; // rsi
  struct DXGALLOCATION *v5; // r15
  struct DXGALLOCATION *v6; // rbp
  struct DXGALLOCATION *v7; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v7 = a2;
    v4 = a2;
    v5 = a2;
    do
    {
      v6 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      v5 = v6;
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, v2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 280LL))(*((_QWORD *)v4 + 10));
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1901) & 1) != 0 && (*((_BYTE *)v2 + 128) & 4) != 0 )
      {
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
          *(_DWORD *)(*((_QWORD *)this + 5) + 504LL),
          *((_DWORD *)this + 118),
          0,
          1u,
          &v7,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        *((_BYTE *)v2 + 128) &= ~4u;
      }
      if ( v4 )
        DXGALLOCATION::`scalar deleting destructor'(v4);
      v7 = v6;
      v2 = v6;
      v4 = v6;
    }
    while ( v6 );
  }
}
