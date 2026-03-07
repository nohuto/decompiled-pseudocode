void __fastcall DISPLAY_SOURCE::GetPresentDiagHistory(DISPLAY_SOURCE *this, struct PRESENTHISTORYDIAGNOSTICINFO *a2)
{
  DISPLAY_SOURCE *v3; // rbx
  bool v4; // zf
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DISPLAY_SOURCE *)((char *)this + 3784), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = (DISPLAY_SOURCE *)((char *)v3 + 3832);
  v4 = v5[8] == 0;
  *(_OWORD *)a2 = *(_OWORD *)v3;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v3 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v3 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v3 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v3 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v3 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v3 + 6);
  *((_OWORD *)a2 + 7) = *((_OWORD *)v3 + 7);
  *((_OWORD *)a2 + 8) = *((_OWORD *)v3 + 8);
  *((_OWORD *)a2 + 9) = *((_OWORD *)v3 + 9);
  if ( !v4 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
