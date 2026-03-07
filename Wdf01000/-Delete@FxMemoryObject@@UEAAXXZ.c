void __fastcall FxMemoryObject::Delete(FxMemoryObject *this)
{
  (*(void (__fastcall **)(_FX_DRIVER_GLOBALS **))&this[-1].m_Globals->DestroyEvent.m_DbgFlagIsInitialized)(&this[-1].m_Globals);
}
