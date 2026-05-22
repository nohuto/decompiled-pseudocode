/*
 * XREFs of ??1NotificationData@@QEAA@XZ @ 0x180068BEC
 * Callers:
 *     _NotifyInputSinkRemoved_::_1_::dtor$1 @ 0x18004FF64 (_NotifyInputSinkRemoved_--_1_--dtor$1.c)
 *     _NotifyInputSinkParented_::_1_::dtor$2 @ 0x180050170 (_NotifyInputSinkParented_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall NotificationData::~NotificationData(NotificationData *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v1);
}
