/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x18002AA30
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18002A8F8 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD90 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094D90 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CDrawListEntry **this)
{
  CDrawListEntry *v2; // rdi
  CDrawListEntry *v3; // rcx
  CDrawListEntry *v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = this[22];
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'((char *)v2 + 80, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2, 0x1098uLL);
  }
  v3 = this[21];
  if ( v3 )
    CDrawListEntry::Release((CDrawListEntry *)((char *)v3 + 8));
  v4 = this[20];
  if ( v4 )
    CDrawListEntry::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 10);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 5);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
