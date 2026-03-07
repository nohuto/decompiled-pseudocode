__int64 __fastcall FxWmiIrpHandler::AddProvider(
        FxWmiIrpHandler *this,
        FxWmiProvider *Provider,
        unsigned __int8 *Update)
{
  unsigned __int8 v6; // r8
  unsigned int v7; // edi
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Update);
  if ( Provider->m_ListEntry.Flink != &Provider->m_ListEntry
    || FxWmiIrpHandler::FindProviderLocked(this, &Provider->m_Guid) )
  {
    v7 = 0x40000000;
  }
  else
  {
    v7 = FxWmiIrpHandler::AddProviderLocked(this, Provider, irql, Update);
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v7;
}
