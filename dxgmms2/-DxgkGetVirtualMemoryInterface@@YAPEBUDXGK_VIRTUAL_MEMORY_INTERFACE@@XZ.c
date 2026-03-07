const struct DXGK_VIRTUAL_MEMORY_INTERFACE *DxgkGetVirtualMemoryInterface(void)
{
  return (const struct DXGK_VIRTUAL_MEMORY_INTERFACE *)((__int64 (*)(void))DxgCoreInterface[87])();
}
