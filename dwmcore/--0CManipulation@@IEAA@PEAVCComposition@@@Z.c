CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  CManipulation *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 9) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 80));
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 264));
  `vector constructor iterator'(
    (char *)this + 460,
    8LL,
    3LL,
    (void (__fastcall *)(char *))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (char *)this + 488,
    8LL,
    5LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 66) = 0LL;
  *(_OWORD *)((char *)this + 536) = 0LL;
  *(_OWORD *)((char *)this + 552) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  memset_0((char *)this + 576, 0, 0x88uLL);
  *((_DWORD *)this + 178) = 0;
  result = this;
  *((_QWORD *)this + 90) = 0LL;
  return result;
}
