__int64 __fastcall VIDPN_MGR::AcquireDiagVersion(__int64 a1, _QWORD *a2)
{
  int v4; // edi

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v4 = DMM::AutoBuffer<unsigned char>::Initialize(a2, 2uLL, 0LL, 256LL);
    if ( v4 >= 0 )
    {
      *(_WORD *)a2[4] = 24577;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      return (unsigned int)v4;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
