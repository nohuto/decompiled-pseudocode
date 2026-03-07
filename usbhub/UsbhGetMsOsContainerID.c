__int64 __fastcall UsbhGetMsOsContainerID(int a1, __int64 a2)
{
  int v3; // r14d
  _DWORD *v4; // rsi
  int v5; // eax
  _DWORD *Pool2; // rdi
  int v7; // r8d
  unsigned int MsOsFeatureDescriptor; // ebx
  int v9; // r8d
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  __int128 v12; // xmm0
  int ValueData; // [rsp+90h] [rbp+18h] BYREF

  ValueData = 0;
  v3 = a2;
  v4 = PdoExt(a2);
  v5 = v4[358];
  if ( (v5 & 0x400) == 0 || (v5 & 0x8000) != 0 )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1112885333LL);
  if ( Pool2 )
  {
    MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v3, 0, v7, 6, (__int64)Pool2, 8, (__int64)&ValueData);
    if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
    {
      if ( *((_QWORD *)v4 + 142) )
      {
        v10 = (const WCHAR *)*((_QWORD *)v4 + 143);
        ValueData = 1;
        RtlWriteRegistryValue(0, v10, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
        v4[358] |= 0x8000u;
      }
      goto LABEL_25;
    }
    if ( !ValueData )
      goto LABEL_9;
    if ( ValueData == 8 && *((_WORD *)Pool2 + 2) == 256 && *((_WORD *)Pool2 + 3) == 6 && *Pool2 == 24 )
    {
      MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v3, 0, v9, 6, (__int64)Pool2, 24, (__int64)&ValueData);
      if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
      {
        if ( *((_QWORD *)v4 + 142) )
        {
          v11 = (const WCHAR *)*((_QWORD *)v4 + 143);
          ValueData = 1;
          RtlWriteRegistryValue(0, v11, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
          v4[358] |= 0x8000u;
          UsbhException(
            a1,
            *((unsigned __int16 *)v4 + 714),
            135,
            (int)Pool2,
            24,
            MsOsFeatureDescriptor,
            0,
            usbfile_msos_c,
            837,
            0);
        }
        goto LABEL_25;
      }
      if ( ValueData == 24 )
      {
        if ( *((_QWORD *)Pool2 + 1) != *(_QWORD *)&GUID_NULL.Data1
          || *((_QWORD *)Pool2 + 2) != *(_QWORD *)GUID_NULL.Data4 )
        {
          v12 = *(_OWORD *)(Pool2 + 2);
          *((_BYTE *)v4 + 2732) = 1;
          *(_OWORD *)(v4 + 679) = v12;
LABEL_9:
          MsOsFeatureDescriptor = 0;
LABEL_25:
          ExFreePoolWithTag(Pool2, 0);
          return MsOsFeatureDescriptor;
        }
        UsbhException(a1, *((unsigned __int16 *)v4 + 714), 135, (int)Pool2, 24, 0, 0, usbfile_msos_c, 854, 0);
      }
      else
      {
        UsbhException(a1, *((unsigned __int16 *)v4 + 714), 135, (int)Pool2, 24, 0, 0, usbfile_msos_c, 844, 0);
      }
    }
    else
    {
      UsbhException(a1, *((unsigned __int16 *)v4 + 714), 135, (int)Pool2, 24, 0, 0, usbfile_msos_c, 808, 0);
    }
    MsOsFeatureDescriptor = -1073741637;
    goto LABEL_25;
  }
  return (unsigned int)-1073741670;
}
