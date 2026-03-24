/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1802185BC
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180218630 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180218960 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rdx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CBitmapLockUnaligned::`vftable'{for `IPixelFormat'};
  this->SpinCount = (ULONG_PTR)&CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  *(HANDLE *)((char *)&this->LockSemaphore + *((int *)this->LockSemaphore + 1)) = &CBitmapLockUnaligned::`vftable'{for `IUnknown'};
  v2 = *((int *)this->LockSemaphore + 1);
  *(_DWORD *)((char *)&this->OwningThread + v2 + 4) = v2 - 160;
  CBitmapLockUnaligned::UnlockUnaligned((CBitmapLockUnaligned *)this);
  CBitmapLock::~CBitmapLock(this);
}
