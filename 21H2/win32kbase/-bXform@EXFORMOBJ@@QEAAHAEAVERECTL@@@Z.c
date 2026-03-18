/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B2A4
 * Callers:
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0019D34 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct ERECTL *a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v4 + 32) & 0x43) == 0x43 || (result = bCvtPts1(v4, a2, 2LL), (_DWORD)result) )
    result = 1LL;
  if ( *((_DWORD *)this + 3) )
  {
    ++*(_DWORD *)a2;
    ++*((_DWORD *)a2 + 2);
  }
  return result;
}
