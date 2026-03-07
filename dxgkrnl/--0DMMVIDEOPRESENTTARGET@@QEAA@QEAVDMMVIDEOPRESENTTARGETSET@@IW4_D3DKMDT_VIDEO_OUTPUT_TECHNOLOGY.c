DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGETSET *const a2,
        int a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4,
        enum _DXGK_CHILD_DEVICE_HPD_AWARENESS a5,
        enum _D3DKMDT_MONITOR_ORIENTATION_AWARENESS a6,
        char a7)
{
  DMMVIDEOPRESENTTARGET *result; // rax
  int v11; // ecx

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a3);
  *((_DWORD *)this + 102) = -1;
  *((_DWORD *)this + 14) = 1833172996;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 20) = a4;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  *((_DWORD *)this + 25) = a5;
  *((_DWORD *)this + 26) = a6;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 21) = a4;
  *((_DWORD *)this + 22) = a4;
  *((_DWORD *)this + 23) = 0;
  *((_BYTE *)this + 108) = a7;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 1;
  *((_DWORD *)this + 31) = -1;
  *((_DWORD *)this + 32) = -1;
  *((_DWORD *)this + 98) = 0;
  *((_BYTE *)this + 396) = 0;
  *((_DWORD *)this + 100) = -1;
  *((_DWORD *)this + 101) = 0;
  *((_WORD *)this + 206) = 1;
  *((_BYTE *)this + 414) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_BYTE *)this + 420) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  if ( a7 )
  {
    if ( (unsigned int)(a4 + 1) > 0xF || (v11 = 32797, !_bittest(&v11, a4 + 1)) )
      WdLogSingleEntry0(1LL);
  }
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)this + 32, *((_QWORD *)this + 5));
  }
  memset((char *)this + 136, 0, 0x100uLL);
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *(_OWORD *)((char *)this + 568) = 0LL;
  *(_OWORD *)((char *)this + 584) = 0LL;
  *(_OWORD *)((char *)this + 600) = 0LL;
  *((_QWORD *)this + 56) = (char *)this + 440;
  *((_QWORD *)this + 55) = (char *)this + 440;
  *((_QWORD *)this + 61) = (char *)this + 480;
  *((_QWORD *)this + 60) = (char *)this + 480;
  result = this;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  return result;
}
