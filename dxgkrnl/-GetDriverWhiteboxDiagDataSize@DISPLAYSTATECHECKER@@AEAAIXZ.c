__int64 __fastcall DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(DISPLAYSTATECHECKER *this)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v1 += 1328;
  }
  return v1;
}
