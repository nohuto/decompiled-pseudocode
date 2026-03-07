void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[56] )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::DestroyTtmDevice(*((CSERIALIZEDWORKQUEUE ****)Global + 118), this[56]);
    this[56] = 0LL;
  }
}
