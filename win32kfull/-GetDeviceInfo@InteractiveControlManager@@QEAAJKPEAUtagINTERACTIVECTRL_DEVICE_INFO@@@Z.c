/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C0243420
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C01D2D30 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02433CC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3,
        __int64 a4)
{
  int Device; // eax
  struct InteractiveControlDevice *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  struct InteractiveControlDevice *v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+78h] [rbp+28h] BYREF
  int v22; // [rsp+7Ch] [rbp+2Ch]

  v19 = 0LL;
  v18 = 0LL;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v21 = a2;
    v20[0] = (__int64)"InteractiveControlManager::GetDeviceInfo entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F10E,
      (__int64)a3,
      a4,
      (void **)v20,
      (__int64)&v21);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v19, 0LL);
  v10 = Device;
  if ( Device >= 0 )
  {
    v8 = v19;
    *(_DWORD *)a3 = *((_DWORD *)v19 + 2);
    *((_DWORD *)a3 + 5) = *((_DWORD *)v8 + 40);
    *((_DWORD *)a3 + 6) = *((_DWORD *)v8 + 38);
    v11 = 1;
    v12 = *((_QWORD *)v8 + 48);
    if ( v12 )
      v11 = *(_DWORD *)(v12 + 76);
    *((_DWORD *)a3 + 8) = v11;
    v13 = 0;
    v14 = *((_QWORD *)v8 + 48);
    if ( v14 )
      v13 = *(_DWORD *)(v14 + 88);
    *((_DWORD *)a3 + 9) = v13;
    v15 = *((_QWORD *)v8 + 30);
    if ( v15 )
    {
      v21 = *((_DWORD *)v8 + 55) - *((_DWORD *)v8 + 53);
      v22 = *((_DWORD *)v8 + 56) - *((_DWORD *)v8 + 54);
      RIMTransformDimensionFromDigitizer(v15, 0LL, &v21, &v18);
      v16 = v18;
      *((_DWORD *)a3 + 1) = 0;
      *((_DWORD *)a3 + 2) = 0;
      *(_QWORD *)((char *)a3 + 12) = __PAIR64__(HIDWORD(v18), v16);
    }
    else
    {
      *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)((char *)v8 + 212);
    }
  }
  else if ( (unsigned int)dword_1C0357150 > 2 )
  {
    v21 = Device;
    v20[0] = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      (__int64)v8,
      v9,
      (void **)v20,
      (__int64)&v21);
  }
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v21 = v10;
    v20[0] = (__int64)"InteractiveControlManager::GetDeviceInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      (__int64)v8,
      v9,
      (void **)v20,
      (__int64)&v21);
  }
  return v10;
}
