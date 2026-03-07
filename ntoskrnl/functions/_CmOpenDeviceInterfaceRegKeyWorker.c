__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  void *v12; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  __int64 Pool2; // rax
  wchar_t *v16; // rsi
  int DeviceInterfaceRegKeyPath; // eax
  int DeviceInterfaceRegKeySecurityDescriptor; // ebx
  unsigned __int16 Length; // bx
  int v20; // r15d
  HANDLE v21; // rax
  __int64 v22; // rcx
  int v23; // r13d
  int Tree; // eax
  int v26; // edi
  HANDLE v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // [rsp+20h] [rbp-60h]
  size_t cchDest; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v35; // [rsp+48h] [rbp-38h]
  HANDLE v36; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v37; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+50h] BYREF
  int v42; // [rsp+D8h] [rbp+58h]

  v42 = a4;
  LODWORD(v41) = 0;
  v8 = a4;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v11 = 4;
  Handle = 0LL;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCCC) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 600 : 480;
    Pool2 = ExAllocatePool2(256LL, v14, 1380994640LL);
    while ( 1 )
    {
      v12 = (void *)Pool2;
      if ( !Pool2 )
      {
        DeviceInterfaceRegKeySecurityDescriptor = -1073741801;
        goto LABEL_21;
      }
      v16 = (wchar_t *)Pool2;
      LODWORD(cchDest) = v14 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    v14 >> 1,
                                    a2,
                                    a3,
                                    v8,
                                    v32,
                                    Pool2,
                                    cchDest,
                                    (__int64)&v41);
      DeviceInterfaceRegKeySecurityDescriptor = DeviceInterfaceRegKeyPath;
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(v12, 0);
      v28 = 2LL * (unsigned int)v41;
      v12 = 0LL;
      if ( v28 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeySecurityDescriptor = -1073741675;
        goto LABEL_21;
      }
      v14 = 2 * v41;
      Pool2 = ExAllocatePool2(256LL, (unsigned int)v28, 1380994640LL);
      v8 = v42;
    }
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_21;
    if ( (a3 & 0x100) != 0 )
    {
      v20 = (int)v16;
      if ( a1 )
        v29 = *(_QWORD *)(a1 + 224);
      else
        v29 = 0LL;
      DeviceInterfaceRegKeySecurityDescriptor = SysCtxRegOpenCurrentUserKey(v29, 0LL, 0x2000000LL, &v36);
      if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
        goto LABEL_21;
      v21 = v36;
LABEL_16:
      v37 = v21;
      LODWORD(v22) = 0;
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      v23 = a5;
      Tree = SysCtxRegOpenKey(v22, (_DWORD)v21, v20, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_20;
      }
      if ( Tree != -1073741444 )
      {
        if ( Tree != -1073741772 )
        {
LABEL_62:
          DeviceInterfaceRegKeySecurityDescriptor = Tree;
          goto LABEL_20;
        }
        if ( !a6 )
        {
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
            DeviceInterfaceRegKeySecurityDescriptor = -1073741772;
          else
            DeviceInterfaceRegKeySecurityDescriptor = -1073741127;
          goto LABEL_20;
        }
        if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
        {
          DeviceInterfaceRegKeySecurityDescriptor = CmOpenDeviceInterfaceRegKey(
                                                      a1,
                                                      a2,
                                                      0x30u,
                                                      0LL,
                                                      1,
                                                      0,
                                                      (__int64)&Handle,
                                                      0LL);
          if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
          {
LABEL_20:
            v12 = v16;
            goto LABEL_21;
          }
        }
        DeviceInterfaceRegKeySecurityDescriptor = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &P);
        v12 = v16;
        if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
          goto LABEL_21;
        v26 = v23;
        if ( P )
          v26 = 917510;
        Tree = PnpCtxRegCreateTree(a1);
        if ( Tree != -1073741444 )
        {
          if ( Tree >= 0 )
          {
            if ( v26 != v23 )
            {
              if ( a1 )
                v30 = *(_QWORD *)(a1 + 224);
              else
                LODWORD(v30) = 0;
              v31 = SysCtxRegOpenKey(v30, (_DWORD)v35, 0, 0, v23, (__int64)a7);
              v12 = v16;
              if ( v31 == -1073741444 )
              {
                DeviceInterfaceRegKeySecurityDescriptor = -1073741772;
              }
              else if ( v31 < 0 )
              {
                DeviceInterfaceRegKeySecurityDescriptor = v31;
              }
              goto LABEL_21;
            }
            v27 = v35;
            v35 = 0LL;
            *a7 = v27;
            goto LABEL_20;
          }
          goto LABEL_62;
        }
      }
      DeviceInterfaceRegKeySecurityDescriptor = -1073741595;
      goto LABEL_20;
    }
    DeviceInterfaceRegKeySecurityDescriptor = RtlInitUnicodeStringEx(&DestinationString, v16);
    if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
    {
LABEL_21:
      v13 = P;
      goto LABEL_22;
    }
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v20 = (_DWORD)v16 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v16 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v11 = 9;
        v20 = (_DWORD)v16 + 94;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v11 = 14;
        v20 = (_DWORD)v16 + 86;
      }
      DeviceInterfaceRegKeySecurityDescriptor = PnpCtxGetCachedContextBaseKey(a1, v11, &v37);
      if ( DeviceInterfaceRegKeySecurityDescriptor < 0 )
        goto LABEL_21;
      v21 = v37;
      goto LABEL_16;
    }
    v13 = P;
  }
  DeviceInterfaceRegKeySecurityDescriptor = -1073741811;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v36 )
    ZwClose(v36);
  if ( v35 )
    ZwClose(v35);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DeviceInterfaceRegKeySecurityDescriptor;
}
