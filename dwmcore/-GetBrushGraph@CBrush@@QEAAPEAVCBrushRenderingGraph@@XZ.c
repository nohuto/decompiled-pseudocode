struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 80) && !*((_QWORD *)this + 9) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 320LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 9);
}
