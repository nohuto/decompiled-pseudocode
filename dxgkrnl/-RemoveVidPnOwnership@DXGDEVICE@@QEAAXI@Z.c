void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v2 = *((_DWORD *)this + 473);
  if ( a2 <= v2 )
  {
    v5 = v2 - a2;
  }
  else
  {
    v4 = a2;
    WdLogSingleEntry2(2LL, a2, v2);
    v5 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Trying to adjust VidPn ownership count down by %d but only %d to remove",
      v4,
      *((unsigned int *)this + 473),
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 473) = v5;
}
