/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1406D53EC
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x1406D3C6C (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14086D18C (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // ebx
  int v11; // r13d
  wchar_t *v12; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  wchar_t *Pool2; // rax
  wchar_t *v16; // rsi
  NTSTATUS DeviceRegKeyPath; // eax
  int DeviceRegKeySecurityDescriptor; // ebx
  unsigned __int16 Length; // bx
  __int64 v20; // r15
  HANDLE v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned int v27; // edi
  int Tree; // eax
  __int64 v29; // rcx
  HANDLE v30; // rax
  __int64 v31; // rcx
  size_t v32; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v34; // [rsp+48h] [rbp-38h]
  HANDLE v35; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v36; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+50h] BYREF
  int v41; // [rsp+D8h] [rbp+58h]

  v41 = a4;
  LODWORD(v40) = 0;
  v8 = a4;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v11 = 4;
  Handle = 0LL;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 360 : 240;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1380994640LL);
    while ( 1 )
    {
      v12 = Pool2;
      if ( !Pool2 )
      {
        DeviceRegKeySecurityDescriptor = -1073741801;
        goto LABEL_20;
      }
      v16 = Pool2;
      LODWORD(v32) = v14 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, a2, a3, v8, a6, Pool2, v32, &v40);
      DeviceRegKeySecurityDescriptor = DeviceRegKeyPath;
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(v12, 0);
      v25 = 2LL * (unsigned int)v40;
      v12 = 0LL;
      if ( v25 > 0xFFFFFFFF )
      {
        DeviceRegKeySecurityDescriptor = -1073741675;
        goto LABEL_20;
      }
      v14 = 2 * v40;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v25, 1380994640LL);
      v8 = v41;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_20;
    if ( (a3 & 0x100) != 0 )
    {
      v20 = (__int64)v16;
      if ( a1 )
        v31 = *(_QWORD *)(a1 + 224);
      else
        v31 = 0LL;
      DeviceRegKeySecurityDescriptor = SysCtxRegOpenCurrentUserKey(v31, 0LL, 0x2000000LL, &v35);
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v21 = v35;
LABEL_16:
      v36 = v21;
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      else
        v22 = 0LL;
      v23 = SysCtxRegOpenKey(v22, (__int64)v21, v20, 0, a5, (__int64)a7);
      if ( !v23 )
      {
        *a8 = 2;
        goto LABEL_20;
      }
      if ( v23 == -1073741444 )
      {
        DeviceRegKeySecurityDescriptor = -1073741595;
        goto LABEL_20;
      }
      if ( v23 != -1073741772 )
      {
LABEL_56:
        DeviceRegKeySecurityDescriptor = v23;
        goto LABEL_20;
      }
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeySecurityDescriptor = -1073741772;
        else
          DeviceRegKeySecurityDescriptor = -1073741810;
        goto LABEL_41;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeySecurityDescriptor = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeySecurityDescriptor < 0 )
          goto LABEL_41;
      }
      DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      v12 = v16;
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v26 = a5;
      v27 = a5;
      if ( P )
        v27 = 917510;
      Tree = PnpCtxRegCreateTree(a1);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeySecurityDescriptor = -1073741595;
      }
      else if ( Tree < 0 )
      {
        DeviceRegKeySecurityDescriptor = Tree;
      }
      else
      {
        if ( v27 != v26 )
        {
          if ( a1 )
            v29 = *(_QWORD *)(a1 + 224);
          else
            v29 = 0LL;
          v23 = SysCtxRegOpenKey(v29, (__int64)v34, 0LL, 0, v26, (__int64)a7);
          v12 = v16;
          if ( v23 == -1073741444 )
          {
            DeviceRegKeySecurityDescriptor = -1073741772;
            goto LABEL_20;
          }
          if ( v23 < 0 )
            goto LABEL_56;
LABEL_20:
          v13 = P;
          goto LABEL_21;
        }
        v30 = v34;
        v34 = 0LL;
        *a7 = v30;
      }
LABEL_41:
      v12 = v16;
      goto LABEL_20;
    }
    DeviceRegKeySecurityDescriptor = RtlInitUnicodeStringEx(&DestinationString, v16);
    if ( DeviceRegKeySecurityDescriptor < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v20 = (__int64)(v16 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v16 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmOpenDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v11 = 5;
        v20 = (__int64)(v16 + 30);
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v11 = 14;
        v20 = (__int64)(v16 + 43);
      }
      DeviceRegKeySecurityDescriptor = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)&v36);
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_20;
      v21 = v36;
      goto LABEL_16;
    }
    v13 = P;
  }
  DeviceRegKeySecurityDescriptor = -1073741811;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  if ( v34 )
    ZwClose(v34);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DeviceRegKeySecurityDescriptor;
}
