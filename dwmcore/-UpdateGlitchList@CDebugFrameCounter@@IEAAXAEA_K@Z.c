void __fastcall CDebugFrameCounter::UpdateGlitchList(CDebugFrameCounter *this, unsigned __int64 *a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // r10

  v2 = *((_DWORD *)this + 1036);
  v3 = *((_DWORD *)this + 1037);
  if ( v2 != v3 )
  {
    v4 = *a2 - 10000000;
    do
    {
      if ( *((_QWORD *)this + v2 + 519) >= v4 )
        break;
      v2 = (v2 + 1) % 0x3C;
      *((_DWORD *)this + 1036) = v2;
    }
    while ( v2 != v3 );
  }
}
