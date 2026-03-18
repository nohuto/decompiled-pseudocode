/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C024F8E8
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01CCDD0 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C024E6A0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024ED28 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02547C0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int Device; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  InteractiveControlDevice *v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  Device = InteractiveControlManager::FindDevice(this, 0, a2, &v11, 0LL);
  v9 = Device;
  if ( Device >= 0 )
  {
    Device = InteractiveControlDevice::QueueAndGenerateInput(v11, a3, a4);
    v9 = Device;
    if ( Device < 0 && (unsigned int)dword_1C03262C0 > 2 )
      goto LABEL_6;
  }
  else if ( (unsigned int)dword_1C03262C0 > 2 )
  {
LABEL_6:
    LODWORD(v11) = Device;
    v12 = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C03262C0,
      byte_1C02F15F5,
      v7,
      v8,
      (void **)&v12,
      (__int64)&v11);
  }
  return v9;
}
