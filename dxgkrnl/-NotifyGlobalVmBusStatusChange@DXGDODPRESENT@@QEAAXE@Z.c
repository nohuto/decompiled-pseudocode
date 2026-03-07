void __fastcall DXGDODPRESENT::NotifyGlobalVmBusStatusChange(DXGDODPRESENT *this, char a2)
{
  unsigned int i; // ebx
  BLTQUEUE *v5; // rcx

  for ( i = 0; i < *(_DWORD *)this; ++i )
  {
    v5 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2920LL * i);
    *((_BYTE *)v5 + 584) = a2;
    *((_BYTE *)v5 + 576) = 1;
    BLTQUEUE::IssueCommand(v5);
  }
}
