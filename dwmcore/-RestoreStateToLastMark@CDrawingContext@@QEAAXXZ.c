void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // ecx

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 92);
    v3 = v2 - 1;
    if ( !v2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)this + 48) + 16LL * v3) == 12 )
    {
      *((_DWORD *)this + 92) = v3;
      return;
    }
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 96LL))((char *)this + 16);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x104Bu, 0LL);
  }
}
