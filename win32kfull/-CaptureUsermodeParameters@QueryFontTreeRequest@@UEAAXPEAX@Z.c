/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00C3B10
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00C3B70 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C03083B4 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 */

void __fastcall QueryFontTreeRequest::CaptureUsermodeParameters(QueryFontTreeRequest *this, _QWORD *a2)
{
  _QWORD *v2; // r9

  v2 = (_QWORD *)a2[3];
  *((_QWORD *)this + 11) = a2[4];
  if ( v2 == *((_QWORD **)this + 10) )
  {
    **((_QWORD **)this + 8) = *v2;
    if ( *((_DWORD *)this + 15) == 2 )
    {
      QueryFontTreeRequest::CaptureKerningPairs(this);
    }
    else if ( *((_DWORD *)this + 15) == 3 )
    {
      QueryFontTreeRequest::CaptureGlyphSet(this);
    }
  }
}
