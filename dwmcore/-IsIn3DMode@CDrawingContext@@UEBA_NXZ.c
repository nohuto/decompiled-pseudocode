/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800DDEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 102);
  result = 0;
  if ( v1 )
    return *(_BYTE *)((unsigned int)(v1 - 1) + *((_QWORD *)this + 53));
  return result;
}
