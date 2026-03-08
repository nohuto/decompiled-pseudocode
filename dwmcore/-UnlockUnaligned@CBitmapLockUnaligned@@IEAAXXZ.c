/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x18027F134
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18027ED98 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x18027F1C8 (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rdi
  unsigned __int8 *v3; // rsi
  unsigned int i; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 14);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 128) & 2) != 0 )
    {
      v3 = (unsigned __int8 *)*((_QWORD *)this + 18);
      for ( i = 0; i < *((_DWORD *)this + 23); v1 += *((unsigned int *)this + 24) )
      {
        WriteUnalignedScanline(v3, v1, *((_DWORD *)this + 40), *((_DWORD *)this + 41));
        ++i;
        v3 += *((unsigned int *)this + 38);
      }
    }
  }
  operator delete(*((void **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
}
