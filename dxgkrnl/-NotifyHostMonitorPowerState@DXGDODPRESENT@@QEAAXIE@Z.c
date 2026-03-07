void __fastcall DXGDODPRESENT::NotifyHostMonitorPowerState(DXGDODPRESENT *this, unsigned int a2, char a3)
{
  BLTQUEUE *v3; // rcx

  if ( a2 < *(_DWORD *)this )
  {
    v3 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2920LL * a2);
    *((_BYTE *)v3 + 584) = a3;
    *((_BYTE *)v3 + 577) = 1;
    BLTQUEUE::IssueCommand(v3);
  }
}
