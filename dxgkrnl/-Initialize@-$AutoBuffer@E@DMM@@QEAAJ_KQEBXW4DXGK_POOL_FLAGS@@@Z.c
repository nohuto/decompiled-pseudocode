__int64 __fastcall DMM::AutoBuffer<unsigned char>::Initialize(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3,
        __int64 a4)
{
  void *v8; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225990LL;
  }
  else
  {
    if ( a1[4] )
      WdLogSingleEntry0(1LL);
    v8 = (void *)operator new[](a2, 0x4E506456u, a4);
    a1[4] = v8;
    if ( v8 )
    {
      a1[5] = a2;
      a1[6] = a4;
      if ( a3 )
        memmove(v8, a3, a2);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(6LL, a2);
      return 3221225495LL;
    }
  }
}
