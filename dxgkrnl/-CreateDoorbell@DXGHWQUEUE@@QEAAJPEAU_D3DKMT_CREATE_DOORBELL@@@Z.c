__int64 __fastcall DXGHWQUEUE::CreateDoorbell(DXGDOORBELL **this, struct _D3DKMT_CREATE_DOORBELL *a2)
{
  DXGDOORBELL *v4; // rax
  int v5; // edi
  DXGDOORBELL *v6; // rcx

  v4 = (DXGDOORBELL *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(136LL);
  if ( v4 )
    v4 = DXGDOORBELL::DXGDOORBELL(v4, (struct DXGHWQUEUE *)this);
  this[18] = v4;
  if ( v4 )
  {
    v5 = DXGDOORBELL::Initialize(v4, a2);
    if ( v5 < 0 )
    {
      v6 = this[18];
      if ( v6 )
        DXGDOORBELL::`scalar deleting destructor'(v6);
      this[18] = 0LL;
    }
  }
  else
  {
    v5 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  return (unsigned int)v5;
}
