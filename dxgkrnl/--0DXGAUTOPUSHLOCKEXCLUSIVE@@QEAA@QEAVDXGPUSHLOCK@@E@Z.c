DXGAUTOPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        DXGAUTOPUSHLOCKEXCLUSIVE *this,
        struct DXGPUSHLOCK *const a2,
        char a3)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireExclusive(a2);
    *((_DWORD *)this + 4) = 2;
  }
  return this;
}
