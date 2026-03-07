void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+18h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  FxWmiIrpHandler::RemoveProviderLocked(this, Provider);
  FxNonPagedObject::Unlock(this, irql, v5);
}
