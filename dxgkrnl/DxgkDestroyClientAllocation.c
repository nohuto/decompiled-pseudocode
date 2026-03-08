/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C02D4BF0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01B16B0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0339740 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D2604 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D2708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02E7954 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct DXGALLOCATION **P)
{
  __int64 v7; // rsi
  struct DXGALLOCATION *v8; // rbx

  if ( P )
  {
    DXGDEVICE::DestroyClientResource(a2, P);
  }
  else if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a4;
      DXGDEVICE::RemoveAllocationFromList(a2, *a4, 0);
      DXGDEVICE::DestroyClientAllocations(a2, v8);
      ++a4;
      --v7;
    }
    while ( v7 );
  }
}
