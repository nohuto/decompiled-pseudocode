void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  const wchar_t *v4; // rdi
  __int16 v5; // si
  void *Id; // rbp
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 Pool2; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v3 = PdoExt(v2);
  switch ( v3[705] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = 2;
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = 4;
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = 1;
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 6;
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 5;
      break;
    case 0x40010007:
      v4 = (const wchar_t *)L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = 3;
      break;
    default:
      return;
  }
  v14 = 0;
  v13 = 0;
  Id = (void *)UsbhMakeId(0, (int)v4, 0, (int)&v14, 2, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, (int)v4, 0, (int)&v13, 2, 0, 0, 0LL);
    if ( v7 )
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1112885333LL);
      if ( Pool2 )
      {
        v10 = Pool2;
        v12 = 24;
        *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\VID_nnnn";
        for ( *(_QWORD *)(Pool2 + 16) = *(_QWORD *)L"nnnn"; *(_WORD *)v10 != 110; v10 += 2LL )
          ;
        *(_DWORD *)v10 = 3145776;
        *(_DWORD *)(v10 + 4) = 3145776;
        v11 = UsbhMakeId(0, (int)L"&PID_nnnn", Pool2, (int)&v12, 2, 4, v5, 0LL);
        if ( v11 )
        {
          UsbhFreeID(v3 + 528);
          v3[529] = v13;
          *((_QWORD *)v3 + 265) = v7;
          UsbhFreeID(v3 + 524);
          v3[525] = v14;
          *((_QWORD *)v3 + 263) = Id;
          UsbhFreeID(v3 + 520);
          v3[521] = v12;
          *((_QWORD *)v3 + 261) = v11;
          return;
        }
      }
      ExFreePoolWithTag(Id, 0);
      v8 = (void *)v7;
    }
    else
    {
      v8 = Id;
    }
    ExFreePoolWithTag(v8, 0);
  }
}
