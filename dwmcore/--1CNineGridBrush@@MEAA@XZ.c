/*
 * XREFs of ??1CNineGridBrush@@MEAA@XZ @ 0x1800B85A4
 * Callers:
 *     ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x1800B8560 (--_GCNineGridBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CNineGridBrush::~CNineGridBrush(CNineGridBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNineGridBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CNineGridBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CNineGridBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 104;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 120;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  CBrush::~CBrush(this);
}
