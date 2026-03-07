DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct DMMVIDPNPRESENTPATH *const a4)
{
  int v5; // eax
  __int64 v6; // rax
  DMMVIDPNPRESENTPATH *result; // rax

  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 26) = *((_DWORD *)a4 + 26);
  *((_WORD *)this + 54) = *((_WORD *)a4 + 54);
  *((_DWORD *)this + 28) = *((_DWORD *)a4 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a4 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a4 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a4 + 31);
  *((_QWORD *)this + 16) = *((_QWORD *)a4 + 16);
  *((_QWORD *)this + 17) = *((_QWORD *)a4 + 17);
  *((_DWORD *)this + 36) = *((_DWORD *)a4 + 36);
  *(_OWORD *)((char *)this + 148) = *(_OWORD *)((char *)a4 + 148);
  *((_DWORD *)this + 41) = *((_DWORD *)a4 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a4 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a4 + 43);
  v5 = *((_DWORD *)a4 + 44);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 20) = 1;
  *((_DWORD *)this + 44) = v5;
  v6 = *((_QWORD *)a4 + 23);
  *((_QWORD *)this + 23) = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  result = this;
  *((_DWORD *)this + 20) = 2;
  return result;
}
