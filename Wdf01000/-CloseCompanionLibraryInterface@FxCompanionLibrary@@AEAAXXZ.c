void __fastcall FxCompanionLibrary::CloseCompanionLibraryInterface(FxCompanionLibrary *this)
{
  KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
  if ( this->m_InitCount-- == 1 )
  {
    ObfDereferenceObject(this->m_RdNonPnPFile);
    ObfDereferenceObject(this->m_RdNonPnPDevice);
    this->m_RdNonPnPFile = 0LL;
    this->m_RdNonPnPDevice = 0LL;
    this->m_RdCompanionLibrary = 0LL;
  }
  KeSetEvent(&this->m_CompanionLibrarySyncEvent, 0, 0);
}
