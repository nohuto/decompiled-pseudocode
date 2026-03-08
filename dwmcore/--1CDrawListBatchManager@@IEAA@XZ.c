/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800EE30C
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800EE258 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800D1140 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(volatile signed __int32 **this)
{
  char *v2; // rdi
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = (char *)this[17];
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'(v2 + 80, 520LL, 8LL, (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2, 0x1098uLL);
  }
  v3 = this[16];
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3 + 2);
  v4 = this[15];
  if ( v4 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 10));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 5));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
