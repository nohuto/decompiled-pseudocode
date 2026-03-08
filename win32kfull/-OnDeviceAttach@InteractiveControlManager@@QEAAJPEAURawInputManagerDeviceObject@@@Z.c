/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243C58
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00D53F0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A7C60 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C0242C8C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C0243BE4 (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C0247A4C (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0248474 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C0248DD8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0248E28 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  InteractiveControlDevice *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  InteractiveControlDevice *v9; // r15
  int v10; // ebx
  InteractiveControlDevice *v11; // rdi
  int inserted; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v20 = (__int64)a2 + 280;
    v21 = (__int64)"InteractiveControlManager::OnDeviceAttach entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (__int64)this,
      byte_1C031F471,
      a3,
      a4,
      (void **)&v21,
      (unsigned __int16 **)&v20);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPoolZInit(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    v10 = -1073741670;
    goto LABEL_19;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  inserted = InteractiveControlDevice::Initialize(v11, a2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
    {
LABEL_16:
      if ( v11 )
        InteractiveControlDevice::Deinitialize(v11);
      Win32FreePool(v9);
      goto LABEL_19;
    }
LABEL_7:
    LODWORD(v20) = inserted;
    v21 = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      v13,
      v14,
      (void **)&v21,
      (__int64)&v20);
    goto LABEL_16;
  }
  inserted = InteractiveControlManager::InsertDevice(this, (void **)v11);
  v10 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
      goto LABEL_16;
    goto LABEL_7;
  }
  v15 = *((_QWORD *)a2 + 51);
  RIMUnlockExclusive(v15 + 104);
  InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
  InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2), 1LL);
  if ( !*((_DWORD *)this + 2) )
  {
    v16 = InteractiveControlDevice::SetComponentResolution(v11, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
    v10 = v16;
    if ( v16 < 0 && (unsigned int)dword_1C0357150 > 2 )
    {
      LODWORD(v20) = v16;
      v21 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031F148,
        v17,
        v18,
        (void **)&v21,
        (__int64)&v20);
    }
  }
  RIMLockExclusive(v15 + 104);
  if ( v10 < 0 )
    goto LABEL_16;
LABEL_19:
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v20) = v10;
    v21 = (__int64)"InteractiveControlManager::OnDeviceAttach exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      v7,
      v8,
      (void **)&v21,
      (__int64)&v20);
  }
  return (unsigned int)v10;
}
