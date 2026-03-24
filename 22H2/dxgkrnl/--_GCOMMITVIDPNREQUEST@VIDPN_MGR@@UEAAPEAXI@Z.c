/*
 * XREFs of ??_GCOMMITVIDPNREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C005BB60
 * Callers:
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z @ 0x1C00290F0 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z.c)
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z @ 0x1C0029100 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

_QWORD *__fastcall VIDPN_MGR::COMMITVIDPNREQUEST::`scalar deleting destructor'(_QWORD *P, char a2)
{
  *P = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
  P[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
  P[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
  auto_rc<DMMVIDPN>::reset(P + 6, 0LL);
  *((_DWORD *)P + 10) |= 0x6D640000u;
  P[4] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[3] = &SetElement::`vftable';
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
