__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3)
{
  void *v6; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225990LL;
  }
  else
  {
    if ( a1[4] )
      WdLogSingleEntry0(1LL);
    v6 = (void *)operator new[](a2, 0x4E506456u, 256LL);
    a1[4] = v6;
    if ( v6 )
    {
      a1[5] = a2;
      a1[6] = 256LL;
      if ( a3 )
        memmove(v6, a3, a2);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(6LL, a2);
      return 3221225495LL;
    }
  }
}
