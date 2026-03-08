/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243E80
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00D53F0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A7C60 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C0242C8C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02433CC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C0244064 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  int Device; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  const char *v11; // [rsp+30h] [rbp-10h] BYREF
  struct InteractiveControlDevice *v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v12 = 0LL;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v13 = (__int64)a2 + 280;
    v11 = "InteractiveControlManager::OnDeviceRemoval entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (__int64)this,
      byte_1C031F471,
      a3,
      a4,
      (void **)&v11,
      (unsigned __int16 **)&v13);
  }
  Device = InteractiveControlManager::FindDevice(this, 0, a2, &v12, 0LL);
  v9 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
      goto LABEL_9;
    goto LABEL_8;
  }
  Device = InteractiveControlManager::RemoveDevice(this, v12);
  v9 = Device;
  if ( Device < 0 && (unsigned int)dword_1C0357150 > 2 )
  {
LABEL_8:
    LODWORD(v12) = Device;
    v13 = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      v7,
      v8,
      (void **)&v13,
      (__int64)&v12);
  }
LABEL_9:
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v12) = v9;
    v13 = (__int64)"InteractiveControlManager::OnDeviceRemoval exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      v7,
      v8,
      (void **)&v13,
      (__int64)&v12);
  }
  return v9;
}
