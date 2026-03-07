void __fastcall VIDMM_RECYCLE_RANGE::Init(
        VIDMM_RECYCLE_RANGE *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  CCHAR LeastSignificantBit; // al
  __int64 v6; // rdi
  __int64 v7; // rcx

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 11) = 3LL;
  *((_QWORD *)this + 12) = 0LL;
  ++*(_QWORD *)a2;
  LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)this + 4));
  if ( LeastSignificantBit < 0 )
    v6 = 0LL;
  else
    v6 = 1LL << LeastSignificantBit;
  *((_QWORD *)this + 7) = v6;
  v7 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(v7, 0, (__int64)this);
}
