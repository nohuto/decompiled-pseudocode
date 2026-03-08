/*
 * XREFs of ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x18021034C
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPolygon::GetRenderOptions(CPolygon *this, struct MilRenderOptions *a2)
{
  int v2; // r8d

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( *((_DWORD *)this + 58) != -1 )
  {
    v2 = 2;
    *(_DWORD *)a2 = 2;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 58);
  }
  if ( *((_DWORD *)this + 59) != -1 )
  {
    v2 |= 8u;
    *(_DWORD *)a2 = v2;
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 59);
  }
  if ( *((_DWORD *)this + 57) != 5 )
  {
    *(_DWORD *)a2 = v2 | 0x10;
    *((_DWORD *)a2 + 5) = *((_DWORD *)this + 57);
  }
}
