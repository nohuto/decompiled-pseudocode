__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::NotifyInvalid(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        struct MsgCallState *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgCallState *))(**((_QWORD **)this + 1) + 48LL))(
           *((_QWORD *)this + 1),
           a2);
}
