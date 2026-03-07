__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  else
    v1 = 0;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v3);
  return v1;
}
