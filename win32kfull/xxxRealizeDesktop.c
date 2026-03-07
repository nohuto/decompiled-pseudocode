__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC();
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}
