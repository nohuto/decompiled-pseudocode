_FX_DRIVER_GLOBALS *__fastcall FxMemoryObject::GetDriverGlobals(FxMemoryObject *this)
{
  return (_FX_DRIVER_GLOBALS *)this[-1].m_ChildListHead.Flink;
}
