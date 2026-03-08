/*
 * XREFs of ??1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5BF4
 * Callers:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x1801B5E90 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::~ConnectionIndirector(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)this + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
  v1 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 4) + 16LL);
  if ( v1 )
    (**v1)(v1, 1LL);
}
