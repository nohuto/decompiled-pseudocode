/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C0256A70
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C016E5AC (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGALLOCATION *v8; // rcx
  __int64 v9; // rax

  if ( *((_DWORD *)this + 144) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 8177LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v8 )
  {
    *((_QWORD *)v8 + 7) = *((_QWORD *)a2 + 7);
    v8 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  }
  v9 = *((_QWORD *)a2 + 7);
  if ( v9 )
    *(_QWORD *)(v9 + 64) = v8;
  else
    *a3 = v8;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}
