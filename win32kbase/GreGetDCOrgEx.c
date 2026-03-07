__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rdi
  unsigned int DCPoint; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v6 = v9[0];
  if ( v9[0] )
  {
    *a3 = *(_OWORD *)(v9[0] + 1032LL);
    DCPoint = GreGetDCPoint(a1, 32, a2);
  }
  else
  {
    DCPoint = 0;
  }
  if ( v6 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v9);
  return DCPoint;
}
