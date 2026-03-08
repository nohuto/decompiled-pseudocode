/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C017FEA0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     bCvtVts @ 0x1C0274FAC (bCvtVts.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _VECTORFX *a2, struct _VECTORL *a3, __int64 a4)
{
  __int64 v4; // rcx
  struct _VECTORFX *v5; // rcx
  __int64 v6; // r8
  unsigned int v8; // ebx

  v4 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v4 + 32) & 2) != 0 )
  {
    v5 = (struct _VECTORFX *)((char *)a2 + 8 * a4);
    if ( a2 < v5 )
    {
      v6 = a3 - a2;
      do
      {
        *(_DWORD *)((char *)a2 + v6) = *(int *)a2 >> 4;
        *(_DWORD *)((char *)a2 + v6 + 4) = *((int *)a2 + 1) >> 4;
        a2 = (struct _VECTORFX *)((char *)a2 + 8);
      }
      while ( a2 < v5 );
    }
    return 1LL;
  }
  else
  {
    v8 = bCvtVts(v4, a2, a3);
    if ( !v8 )
      EngSetLastError(0x216u);
    return v8;
  }
}
