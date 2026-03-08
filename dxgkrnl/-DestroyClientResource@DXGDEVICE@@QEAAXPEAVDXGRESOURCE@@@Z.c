/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D2708
 * Callers:
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01E5734 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D4BF0 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C02E4CB0 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03CCD2C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0007310 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D2E34 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D2604 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0383408 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

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
