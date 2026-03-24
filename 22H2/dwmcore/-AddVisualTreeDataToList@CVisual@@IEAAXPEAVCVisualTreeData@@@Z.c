/*
 * XREFs of ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x1800C8F2C
 * Callers:
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800C8ED0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007AA60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800C63F4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 */

void __fastcall CVisual::AddVisualTreeDataToList(CVisual *this, struct CVisualTreeData *a2)
{
  struct _LIST_ENTRY **v4; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  __int64 v6; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int i; // eax

  v4 = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( !TreeDataListHead )
  {
    TreeDataListHead = (struct _LIST_ENTRY *)DefaultHeap::Alloc(0x10uLL);
    if ( !TreeDataListHead )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    TreeDataListHead->Flink = TreeDataListHead;
    v6 = *((_QWORD *)this + 28);
    if ( *(int *)v6 < 0 )
    {
      v9 = *(unsigned int *)(v6 + 4);
      v10 = (_BYTE *)(v6 + 8);
      for ( i = 0; i < (unsigned int)v9; ++v10 )
      {
        if ( *v10 == 1 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v9 )
        v4 = (struct _LIST_ENTRY **)(v9 + 15 + v6 + 8LL * i - (((_BYTE)v9 + 15) & 7));
      *v4 = TreeDataListHead;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((_QWORD *)this + 28, 1) = TreeDataListHead;
    }
  }
  Blink = TreeDataListHead->Blink;
  v8 = (struct _LIST_ENTRY *)((char *)a2 + 288);
  if ( Blink->Flink != TreeDataListHead )
    __fastfail(3u);
  v8->Flink = TreeDataListHead;
  *((_QWORD *)a2 + 37) = Blink;
  Blink->Flink = v8;
  TreeDataListHead->Blink = v8;
}
