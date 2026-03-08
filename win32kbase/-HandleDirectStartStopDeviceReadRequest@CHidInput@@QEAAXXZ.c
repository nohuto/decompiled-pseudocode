/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00B5D10
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1C01DD4D4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C00B5D5C (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C00B6004 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00C74B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(CHidInput *this)
{
  struct _KEVENT *DispatcherObjectByName; // rax

  if ( *((_QWORD *)this + 1) != -1LL )
  {
    if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
    {
      CHidInput::OnDirectStartStopReadNotification(this);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(this);
      KeSetEvent(DispatcherObjectByName, 1, 0);
    }
  }
}
