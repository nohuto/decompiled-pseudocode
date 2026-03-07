__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r11

  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    WdLogSingleEntry1(1LL, 5147LL);
    goto LABEL_22;
  }
  v7 = *((_QWORD *)this + 8);
  if ( a2 >= v7 )
  {
    WdLogSingleEntry1(1LL, 5152LL);
LABEL_22:
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 > v7 || (v9 = a3 + a2, v9 > v7) )
  {
    WdLogSingleEntry1(1LL, 5157LL);
    goto LABEL_22;
  }
  v10 = a4 - 1LL;
  if ( (v10 & a3) != 0 )
  {
    WdLogSingleEntry1(1LL, 5163LL);
    goto LABEL_22;
  }
  if ( (v10 & a2) != 0 )
  {
    WdLogSingleEntry1(1LL, 5168LL);
    goto LABEL_22;
  }
  if ( a5 > 1 )
  {
    WdLogSingleEntry1(1LL, 5177LL);
    goto LABEL_22;
  }
  if ( a6 && a5 != 1 )
  {
    WdLogSingleEntry1(1LL, 5187LL);
    goto LABEL_22;
  }
  *((_DWORD *)this + 102) = a4;
  *((_QWORD *)this + 48) = a2;
  *((_QWORD *)this + 49) = a3;
  *((_DWORD *)this + 103) = a5;
  *((_QWORD *)this + 50) = v10;
  *((_QWORD *)this + 58) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 52) = v9;
    *((_QWORD *)this + 53) = v9;
    if ( v9 == v7 )
      *((_BYTE *)this + 449) = 1;
  }
  return 0LL;
}
