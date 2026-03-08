/*
 * XREFs of ??1CMaskBrush@@MEAA@XZ @ 0x1800B8B34
 * Callers:
 *     ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x1800B8AF0 (--_ECMaskBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CMaskBrush::~CMaskBrush(CMaskBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMaskBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CMaskBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 48;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 64;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  CBrush::~CBrush(this);
}
