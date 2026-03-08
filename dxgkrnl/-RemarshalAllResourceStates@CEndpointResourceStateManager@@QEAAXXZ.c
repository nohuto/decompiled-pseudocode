/*
 * XREFs of ?RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0086EDC
 * Callers:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0083F1C (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEndpointResourceStateManager::RemarshalAllResourceStates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  char *v3; // rcx
  char *v4; // rbx
  __int64 v5; // rcx
  CEndpointResourceStateManager **v6; // rcx
  CEndpointResourceStateManager *v7; // rbx
  __int64 v8; // rcx

  v1 = (char *)this + 16;
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      v5 = (unsigned __int64)(v3 - 8) & -(__int64)(v3 != 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  v6 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v7 = *v6;
      v8 = (unsigned __int64)(v6 - 1) & -(__int64)(v6 != 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != this );
  }
}
