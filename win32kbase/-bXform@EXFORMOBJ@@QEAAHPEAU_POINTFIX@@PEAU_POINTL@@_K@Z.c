/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C017FDC0
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0057600 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     bCvtPts @ 0x1C0274DEC (bCvtPts.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTFIX *a2, struct _POINTL *a3, __int64 a4)
{
  __int64 v4; // rcx
  struct _POINTFIX *v5; // r9
  __int64 result; // rax
  signed __int64 v7; // r8
  unsigned int v8; // ebx

  v4 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v4 + 32) & 0x43) == 0x43 )
  {
    v5 = &a2[a4];
    result = 1LL;
    if ( a2 < v5 )
    {
      v7 = (char *)a3 - (char *)a2;
      do
      {
        *(FIX *)((char *)&a2->x + v7) = ((a2->x >> 3) + 1) >> 1;
        *(FIX *)((char *)&a2->y + v7) = ((a2->y >> 3) + 1) >> 1;
        ++a2;
      }
      while ( a2 < v5 );
    }
  }
  else
  {
    v8 = bCvtPts(v4, a2, a3);
    if ( !v8 )
      EngSetLastError(0x216u);
    return v8;
  }
  return result;
}
