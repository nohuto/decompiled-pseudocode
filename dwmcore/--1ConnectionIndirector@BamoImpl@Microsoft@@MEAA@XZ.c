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
