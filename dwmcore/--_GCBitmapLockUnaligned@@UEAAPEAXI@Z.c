/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x18027EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18027ED98 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::`scalar deleting destructor'(
        CBitmapLockUnaligned *this,
        char a2)
{
  CBitmapLockUnaligned::~CBitmapLockUnaligned(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
