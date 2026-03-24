/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C022A124
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01264E0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C028037C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C016E5AC (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C022800C (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0228100 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        DXGDEVICE *a2,
        __int64 a3,
        __int64 a4,
        struct DXGALLOCATION **P)
{
  struct DXGALLOCATION **v6; // r14
  __int64 v7; // rsi
  struct DXGALLOCATION *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = (struct DXGALLOCATION **)a4;
  if ( P )
  {
    DXGDEVICE::DestroyClientResource(a2, P, a3, a4);
  }
  else if ( (_DWORD)a3 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v8 = *v6;
      DXGDEVICE::RemoveAllocationFromList(a2, *v6, 0);
      DXGDEVICE::DestroyClientAllocations(a2, v8, v9, v10);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
}
