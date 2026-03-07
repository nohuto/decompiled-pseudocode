void __fastcall DXGMONITOR::_ChangeLIDStatus(DXGMONITOR *this, char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 176);
  if ( (v2 & 2) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *((_BYTE *)this + 176);
  }
  *((_BYTE *)this + 176) = v2 & 0xFB | (4 * (a2 ^ 1));
}
