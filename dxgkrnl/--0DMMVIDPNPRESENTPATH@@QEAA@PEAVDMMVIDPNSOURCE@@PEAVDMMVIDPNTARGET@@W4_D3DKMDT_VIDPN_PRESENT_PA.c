DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a4,
        unsigned __int16 a5)
{
  __int64 v5; // rbx
  _QWORD *v10; // rax

  v5 = a4;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 41) = 255;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *((_WORD *)this + 54) = a5;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  if ( (_DWORD)v5 && ((int)v5 <= 32 || (_DWORD)v5 == 255) )
  {
    *((_DWORD *)this + 26) = v5;
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 30) |= 1u;
    *((_DWORD *)this + 31) |= 0x11u;
    *((_DWORD *)this + 42) = 0;
    *((_DWORD *)this + 42) |= 1u;
    *(_QWORD *)((char *)this + 172) = 1LL;
    DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
    *((_DWORD *)this + 20) = 2;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v10[3] = v5;
    v10[4] = *((unsigned int *)a2 + 6);
    v10[5] = *((unsigned int *)a3 + 6);
    v10[6] = -1071774908LL;
    *((_DWORD *)this + 16) = -1071774908;
  }
  return this;
}
