__int64 __fastcall DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName(
        struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *v5; // rax
  unsigned int v6; // ebx
  __int64 DeviceFromName; // rax
  _DWORD *p_VidPnSourceId; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, 0x44uLL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *)MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v5->DeviceName;
  *(_OWORD *)&SourceString[8] = *(_OWORD *)&v5->DeviceName[8];
  *(_OWORD *)&SourceString[16] = *(_OWORD *)&v5->DeviceName[16];
  *(_OWORD *)&SourceString[24] = *(_OWORD *)&v5->DeviceName[24];
  *(_DWORD *)&SourceString[32] = v5->VidPnSourceId;
  v6 = 0;
  SourceString[31] = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(MmUserProbeAddress, v2, v3, v4);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString);
  if ( DeviceFromName && (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 )
  {
    p_VidPnSourceId = &a1->VidPnSourceId;
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
      p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
    *p_VidPnSourceId = *(_DWORD *)(DeviceFromName + 248);
  }
  else
  {
    v6 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v9, (__int64)p_VidPnSourceId, DeviceFromName, v10);
  return v6;
}
