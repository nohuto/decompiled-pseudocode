/*
 * XREFs of ??_G?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C0067C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C00670B4 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
