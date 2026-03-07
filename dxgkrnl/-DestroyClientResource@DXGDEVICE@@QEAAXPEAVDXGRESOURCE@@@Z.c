void __fastcall DXGDEVICE::DestroyClientResource(DXGDEVICE *this, struct DXGALLOCATION **P)
{
  struct DXGALLOCATION *v4; // rdx
  struct DXGALLOCATION *v5; // rdx
  unsigned int v6; // r9d

  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(this, (struct DXGRESOURCE *)P, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, P[3]);
  v4 = P[5];
  if ( v4 )
    *((_QWORD *)v4 + 4) = P[4];
  v5 = P[4];
  if ( v5 )
  {
    *((_QWORD *)v5 + 5) = P[5];
  }
  else if ( *((struct DXGALLOCATION ***)this + 7) == P )
  {
    *((_QWORD *)this + 7) = P[5];
  }
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v6 = *((_DWORD *)P + 5);
    if ( v6 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
        *(_DWORD *)(*((_QWORD *)this + 5) + 504LL),
        *((_DWORD *)this + 118),
        v6,
        0,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
      *((_DWORD *)P + 5) = 0;
    }
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)P);
}
