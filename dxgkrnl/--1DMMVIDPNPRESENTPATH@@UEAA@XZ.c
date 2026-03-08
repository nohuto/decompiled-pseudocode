/*
 * XREFs of ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C0006604
 * Callers:
 *     ??_GDMMVIDPNPRESENTPATH@@UEAAPEAXI@Z @ 0x1C00065C0 (--_GDMMVIDPNPRESENTPATH@@UEAAPEAXI@Z.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0182B90 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B32F0 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH(DMMVIDPNPRESENTPATH *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  v2 = (ReferenceCounted *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    ReferenceCounted::Release(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 9) = &SetElement::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) |= 0x6D640000u;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
