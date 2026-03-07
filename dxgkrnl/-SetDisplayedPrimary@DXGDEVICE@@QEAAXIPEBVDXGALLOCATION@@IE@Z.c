void __fastcall DXGDEVICE::SetDisplayedPrimary(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbp
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v5 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (DXGDEVICE *)((char *)this + 304), 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  *((_QWORD *)this + v5 + 131) = a3;
  v12 = 2;
  *((_DWORD *)this + v5 + 294) = a4;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  if ( a3 && a5 )
  {
    v9 = *((_QWORD *)this + 235);
    if ( v9 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
      ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(*(ADAPTER_DISPLAY **)(v9 + 2920), v5, a3);
  }
}
