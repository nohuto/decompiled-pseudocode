/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18027ED98
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x18027EE00 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x18027F134 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CBitmapLockUnaligned::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 168;
  CBitmapLockUnaligned::UnlockUnaligned(this);
  CBitmapLock::~CBitmapLock(this);
}
