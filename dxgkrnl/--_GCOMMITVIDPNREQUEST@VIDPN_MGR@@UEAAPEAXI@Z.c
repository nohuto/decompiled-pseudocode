VIDPN_MGR::COMMITVIDPNREQUEST *__fastcall VIDPN_MGR::COMMITVIDPNREQUEST::`scalar deleting destructor'(
        VIDPN_MGR::COMMITVIDPNREQUEST *P,
        char a2)
{
  VIDPN_MGR::COMMITVIDPNREQUEST::~COMMITVIDPNREQUEST(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
