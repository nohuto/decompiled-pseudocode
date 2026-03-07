bool __fastcall MONITOR_MGR::IsCcdDatabaseIgnored(ADAPTER_DISPLAY **this)
{
  return (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(this[3]) != 0;
}
