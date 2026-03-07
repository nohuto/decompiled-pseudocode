void __fastcall REMOTEMONITORMAPPING::Clear(struct _KTHREAD **this, struct _LUID *a2)
{
  REMOTEMONITORMAPPING *v4; // rbx
  REMOTEMONITORMAPPING *v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v4 = *this;
  v8 = 2;
  while ( v4 != (REMOTEMONITORMAPPING *)this )
  {
    v5 = v4;
    v4 = *(REMOTEMONITORMAPPING **)v4;
    if ( !a2 || *((_DWORD *)v5 + 7) == a2->LowPart && *((_DWORD *)v5 + 8) == a2->HighPart )
      REMOTEMONITORMAPPING::RemoveMappingEntry((REMOTEMONITORMAPPING *)this, v5);
  }
  *((_BYTE *)this + 48) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
