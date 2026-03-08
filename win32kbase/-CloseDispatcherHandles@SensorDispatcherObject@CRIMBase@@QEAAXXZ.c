/*
 * XREFs of ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003168C
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00315C4 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0032254 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0031780 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C00945DC (ProtectHandle.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(HANDLE *this)
{
  __int64 v2; // rdx
  HANDLE v3; // rcx
  HANDLE v4; // rcx
  HANDLE v5; // rcx
  PVOID *v6; // rdi

  RIMLockExclusive(this);
  v3 = this[3];
  if ( v3 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      ProtectHandle(v3, v2, ExEventObjectType, 0LL);
      *((_BYTE *)this + 32) = 0;
    }
    ObCloseHandle(this[3], 1);
    this[3] = 0LL;
  }
  v4 = this[5];
  if ( v4 )
  {
    ZwClose(v4);
    this[5] = 0LL;
  }
  v5 = this[6];
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    this[6] = 0LL;
  }
  v6 = this + 7;
  if ( this[7] )
  {
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal((CRIMBase::SensorDispatcherObject::MarshalingCompletion *)(this + 7));
    ObfDereferenceObject(*v6);
    *v6 = 0LL;
  }
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 18;
  this[1] = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
