_QWORD *__fastcall Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
