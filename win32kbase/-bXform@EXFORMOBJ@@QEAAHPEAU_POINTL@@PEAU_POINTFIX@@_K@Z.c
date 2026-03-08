/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C017FE30
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     bCvtPts @ 0x1C0274DEC (bCvtPts.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, struct _POINTFIX *a3, __int64 a4)
{
  __int64 v4; // rcx
  struct _POINTL *v5; // rcx
  signed __int64 v6; // r8
  unsigned int v8; // ebx

  v4 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v4 + 32) & 0x43) == 0x43 )
  {
    v5 = &a2[a4];
    if ( a2 < v5 )
    {
      v6 = (char *)a3 - (char *)a2;
      do
      {
        *(LONG *)((char *)&a2->x + v6) = 16 * a2->x;
        *(LONG *)((char *)&a2->y + v6) = 16 * a2->y;
        ++a2;
      }
      while ( a2 < v5 );
    }
    return 1LL;
  }
  else
  {
    v8 = bCvtPts(v4, a2, a3);
    if ( !v8 )
      EngSetLastError(0x216u);
    return v8;
  }
}
