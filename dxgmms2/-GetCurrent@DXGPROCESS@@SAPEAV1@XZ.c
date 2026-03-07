struct DXGPROCESS *DXGPROCESS::GetCurrent(void)
{
  return (struct DXGPROCESS *)((__int64 (*)(void))DxgCoreInterface[6])();
}
