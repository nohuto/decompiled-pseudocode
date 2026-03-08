/*
 * XREFs of ??1COMMITVIDPNREQUEST@VIDPN_MGR@@UEAA@XZ @ 0x1C00671A4
 * Callers:
 *     ??_GCOMMITVIDPNREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0067E40 (--_GCOMMITVIDPNREQUEST@VIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

void __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::~COMMITVIDPNREQUEST(VIDPN_MGR::COMMITVIDPNREQUEST *this)
{
  *(_QWORD *)this = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
  *((_QWORD *)this + 3) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 4) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 6, 0LL);
  *((_DWORD *)this + 10) |= 0x6D640000u;
  *((_QWORD *)this + 4) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 3) = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
