/*
 * XREFs of ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240F84
 * Callers:
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200D38 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?OnDeviceClosed@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C022AAD0 (-OnDeviceClosed@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1C0240ABC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWriteTempl.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0240C94 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 */

void __fastcall InkProcessor::OnDeviceClosed(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID *InkDeviceByRimDeviceObject; // rax
  PVOID *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  PVOID *v14; // [rsp+88h] [rbp+38h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = (PVOID *)InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v7 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      Rim::RimBackedDeviceBase::OnDeviceClosed(InkDeviceByRimDeviceObject);
      if ( (unsigned int)dword_1C03570E0 > 4 )
      {
        LODWORD(v12) = 0;
        v11 = "Ink device closed";
        v13 = (__int64)a2;
        v14 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v8,
          byte_1C031F02C,
          v9,
          v10,
          (__int64)&v12,
          (void **)&v11,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v12) = -1073741823;
    v13 = (__int64)"Ink processor not enabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v4,
      v5,
      (__int64)&v12,
      (void **)&v13);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
