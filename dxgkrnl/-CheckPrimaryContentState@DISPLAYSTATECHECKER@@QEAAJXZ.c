__int64 __fastcall DISPLAYSTATECHECKER::CheckPrimaryContentState(DISPLAYSTATECHECKER *this)
{
  unsigned int i; // ebx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  struct DISPLAYDIAGNOSTICADAPTERDATA *v4; // rsi
  unsigned int v5; // edi
  VIDPNSOURCEINFO *v6; // rcx

  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v4 = DisplayAdapterDiagData;
    if ( DisplayAdapterDiagData )
    {
      v5 = 0;
      if ( *((_DWORD *)DisplayAdapterDiagData + 240) )
      {
        do
        {
          if ( v5 < 4 )
          {
            v6 = (struct DISPLAYDIAGNOSTICADAPTERDATA *)((char *)v4 + 224 * v5 + 64);
            if ( v6 )
              VIDPNSOURCEINFO::CheckPrimaryContent(v6);
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)v4 + 240) );
      }
    }
  }
  return 0LL;
}
