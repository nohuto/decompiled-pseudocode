__int64 __fastcall InteractiveControlDevice::Initialize(InteractiveControlDevice *this, char *Object)
{
  __int64 v2; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  int v8; // edx
  void *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  SimpleHapticsController *v17; // rcx
  SimpleHapticsController *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rcx
  SimpleHapticsController *v25; // rcx
  const struct _DEVPROPKEY *v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  SimpleHapticsController *v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int ObjectType; // [rsp+20h] [rbp-30h]
  unsigned int AccessMode; // [rsp+28h] [rbp-28h]
  __int64 v38[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v39; // [rsp+88h] [rbp+38h] BYREF
  size_t Size; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_QWORD *)Object + 51);
  Handle = 0LL;
  LODWORD(Size) = 0;
  v6 = RawInputManagerDeviceObjectReference(Object);
  if ( v6 >= 0 )
  {
    *(_QWORD *)this = Object;
    v7 = SGDGetUserSessionState(v5);
    v8 = *(_DWORD *)(v7 + 17156);
    *(_DWORD *)(v7 + 17156) = v8 + 1;
    *((_DWORD *)this + 2) = v8;
    v6 = ObOpenObjectByPointer(
           Object,
           0,
           0LL,
           3u,
           ExRawInputManagerObjectType,
           (unsigned __int16)(~(unsigned __int16)*((_DWORD *)Object + 64) & 0x2000) >> 13,
           &Handle);
    if ( v6 >= 0 )
    {
      v6 = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      if ( v6 >= 0 )
      {
        v9 = (void *)Win32AllocPoolZInit((unsigned int)Size, 1819440195LL);
        *((_QWORD *)this + 32) = v9;
        if ( !v9 )
        {
LABEL_5:
          v6 = -1073741670;
          goto LABEL_22;
        }
        memset_0(v9, 0, (unsigned int)Size);
        v6 = RIMGetDevicePreparsedDataLockfree(Handle, *((_QWORD *)this + 32), &Size, 0LL);
        if ( v6 >= 0 )
        {
          v12 = Win32AllocPool(96LL, 1667787091LL, v10, v11);
          if ( v12 )
          {
            *(_QWORD *)(v12 + 16) = 0LL;
            *(_QWORD *)(v12 + 24) = 0LL;
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_QWORD *)(v12 + 56) = 0LL;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_WORD *)(v12 + 72) = 0;
            *(_DWORD *)(v12 + 76) = 0;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            *(_BYTE *)(v12 + 92) = 0;
            *(_QWORD *)(v12 + 8) = 0LL;
          }
          else
          {
            v12 = 0LL;
          }
          *((_QWORD *)this + 48) = v12;
          if ( !v12 )
            goto LABEL_5;
          v13 = v2 + 104;
          RIMUnlockExclusive(v13);
          v14 = SimpleHapticsController::Initialize(
                  *((SimpleHapticsController **)this + 48),
                  (struct _UNICODE_STRING *)(Object + 280));
          if ( v14 < 0 )
          {
            if ( (unsigned int)dword_1C0357150 > 4 )
            {
              LODWORD(v39) = v14;
              v38[0] = (__int64)"SimpleHapticsController->Initialize failed with.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1C0357150,
                byte_1C031F0D5,
                v15,
                v16,
                (void **)v38,
                (__int64)&v39);
            }
            v17 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v17 )
            {
              SimpleHapticsController::DeInitialize(v17);
              v18 = (SimpleHapticsController *)*((_QWORD *)this + 48);
              if ( v18 )
                SimpleHapticsController::`scalar deleting destructor'(v18);
              *((_QWORD *)this + 48) = 0LL;
            }
          }
          v6 = InteractiveControlParser::BuildDeviceCapabilities(*((PHIDP_PREPARSED_DATA *)this + 32), this);
          if ( v6 < 0 )
            goto LABEL_21;
          if ( *((_DWORD *)this + 18) != 1 )
          {
            v6 = -1073741637;
LABEL_21:
            RIMLockExclusive(v13);
            goto LABEL_22;
          }
          if ( *((_QWORD *)this + 30) )
            InteractiveControlDevice::CreateDeadzone(this, v19, v21, v22);
          if ( *((_DWORD *)InteractiveControlManager::Instance(v20) + 21) )
          {
            LODWORD(v39) = 235930369;
            UserSessionSwitchLeaveCrit(v24);
            v25 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v25 )
              SimpleHapticsController::SendDeviceIOControl(v25, 0xB0191u, &v39, 4u, 0LL, 0, 0LL);
            EnterCrit(1LL, 0LL);
          }
          RIMLockExclusive(v13);
          if ( (*(_DWORD *)(*(_QWORD *)this + 256LL) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v29 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v29 )
            {
              v30 = SimpleHapticsController::SetDevicePropertyData(
                      v29,
                      v26,
                      v27,
                      v28,
                      ObjectType,
                      AccessMode,
                      (char *)this + 72);
              if ( v30 < 0 && (unsigned int)dword_1C0357150 > 2 )
              {
                LODWORD(v39) = v30;
                v38[0] = (__int64)"Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1C0357150,
                  byte_1C031F148,
                  v31,
                  v32,
                  (void **)v38,
                  (__int64)&v39);
              }
            }
          }
          v33 = InteractiveControlDevice::InitializeWaveformOrdinalForDevice(this);
          v6 = v33;
          if ( v33 < 0 && (unsigned int)dword_1C0357150 > 2 )
          {
            LODWORD(v39) = v33;
            v38[0] = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C0357150,
              byte_1C031F148,
              v34,
              v35,
              (void **)v38,
              (__int64)&v39);
          }
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v6 < 0 )
    InteractiveControlDevice::Deinitialize(this);
  return (unsigned int)v6;
}
