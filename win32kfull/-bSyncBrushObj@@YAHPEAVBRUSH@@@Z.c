/*
 * XREFs of ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02ADD64
 * Callers:
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C02AA138 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSyncBrushObj(struct BRUSH *a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // rbx

  v1 = 1;
  if ( a1 )
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 6);
    if ( (*v2 & 4) != 0 )
    {
      if ( (unsigned int)GreSetSolidBrushLight(a1, (unsigned int)v2[1], *((_DWORD *)a1 + 10) & 0x400) )
        *v2 &= ~4u;
      else
        return 0;
    }
  }
  return v1;
}
