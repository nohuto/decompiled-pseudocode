/*
 * XREFs of ?NotifyInvalid@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEAUMsgCallState@@@Z @ 0x1801B6FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::NotifyInvalid(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        struct MsgCallState *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgCallState *))(**((_QWORD **)this + 1) + 48LL))(
           *((_QWORD *)this + 1),
           a2);
}
