/*
 * XREFs of ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x18028246C
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180281B84 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800A858C (--0CBitmapLock@@QEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  __int64 v2; // rcx
  CBitmapLockUnaligned *result; // rax

  *((_QWORD *)this + 1) = &CBitmapLockUnaligned::`vbtable';
  CBitmapLock::CBitmapLock(this, 0);
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CBitmapLockUnaligned::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 168;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
