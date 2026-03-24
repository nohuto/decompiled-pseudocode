/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180218960
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1802185BC (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1802189F4 (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rdi
  unsigned __int8 *v3; // rcx
  unsigned __int8 *v4; // rsi
  unsigned int v5; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 15);
  v3 = (unsigned __int8 *)v1;
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 136) & 2) != 0 )
    {
      v4 = (unsigned __int8 *)*((_QWORD *)this + 19);
      v5 = 0;
      if ( *((_DWORD *)this + 25) )
      {
        do
        {
          WriteUnalignedScanline(v4, v1, *((_DWORD *)this + 42), *((_DWORD *)this + 43));
          ++v5;
          v4 += *((unsigned int *)this + 40);
          v1 += *((unsigned int *)this + 26);
        }
        while ( v5 < *((_DWORD *)this + 25) );
        v3 = (unsigned __int8 *)*((_QWORD *)this + 15);
      }
    }
  }
  operator delete(v3);
  *((_QWORD *)this + 15) = 0LL;
}
