__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::TrackError(Microsoft::Bamo::BaseBamoConnection *this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rax

  v1 = (struct Microsoft::BamoImpl::ConnectionIndirector **)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v1, 0x87B2080C, 1);
}
