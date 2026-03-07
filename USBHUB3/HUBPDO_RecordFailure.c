__int64 __fastcall HUBPDO_RecordFailure(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int *v4; // r14
  unsigned __int16 v5; // r9
  size_t v6; // r15
  void *Pool2; // rax

  v2 = 0;
  v4 = *(unsigned int **)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v5 = 14;
LABEL_4:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v5,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v5 = 15;
    goto LABEL_4;
  }
  v6 = 4096LL;
  if ( *v4 > 0x1000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x10u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    goto LABEL_12;
  }
  v6 = *v4;
  if ( *v4 >= 0x14 )
  {
LABEL_12:
    Pool2 = (void *)ExAllocatePool2(64LL, v6, 1681082453LL);
    *(_QWORD *)(a1 + 56) = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v4, v6);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1424LL) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          2u,
          5u,
          0x12u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      *v4,
      20);
  return (unsigned int)-1073741789;
}
