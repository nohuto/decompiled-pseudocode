/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x140636AC0
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140636EFC (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14076ED30 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v11; // ebx
  wchar_t *PoolWithTag; // r14
  unsigned int v13; // r12d
  PVOID v14; // rsi
  unsigned __int64 v15; // rsi
  int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // esi
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  int Tree; // eax
  int v24; // r15d
  __int64 v25; // rcx
  HANDLE v26; // rax
  __int64 v27; // rcx
  size_t v28; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-38h]
  HANDLE v31; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v32; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v36) = 0;
  v32 = 0LL;
  v11 = a2;
  v31 = 0LL;
  PoolWithTag = 0LL;
  v30 = 0LL;
  v13 = 4;
  Handle = 0LL;
  v14 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    LODWORD(v15) = (a3 & 0x200) != 0 ? 360 : 240;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
    if ( PoolWithTag )
    {
      while ( 1 )
      {
        LODWORD(v28) = (unsigned int)v15 >> 1;
        DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v11, a3, a4, a6, PoolWithTag, v28, (__int64)&v36);
        if ( DeviceRegKeyPath != -1073741789 )
          break;
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
        v15 = 2LL * (unsigned int)v36;
        if ( v15 > 0xFFFFFFFF )
        {
          DeviceRegKeyPath = -1073741675;
          goto LABEL_19;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_61;
        v11 = a2;
      }
    }
    else
    {
LABEL_61:
      DeviceRegKeyPath = -1073741801;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (int)PoolWithTag;
      if ( a1 )
        v27 = *(_QWORD *)(a1 + 224);
      else
        v27 = 0LL;
      DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v27, 0LL, 0x2000000LL, &v31);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v31;
LABEL_15:
      v32 = v19;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v20) = 0;
      v21 = a5;
      Tree = SysCtxRegOpenKey(v20, (_DWORD)v19, v18, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_19;
      }
      if ( Tree == -1073741444 )
        goto LABEL_69;
      if ( Tree != -1073741772 )
      {
LABEL_55:
        DeviceRegKeyPath = Tree;
        goto LABEL_19;
      }
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeyPath = -1073741772;
        else
          DeviceRegKeyPath = -1073741810;
        goto LABEL_19;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeyPath = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeyPath < 0 )
          goto LABEL_19;
      }
      DeviceRegKeyPath = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v24 = v21;
      if ( P )
        v24 = 917510;
      Tree = PnpCtxRegCreateTree(a1);
      if ( Tree == -1073741444 )
      {
LABEL_69:
        DeviceRegKeyPath = -1073741595;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
      if ( v24 == v21 )
      {
        v26 = v30;
        v30 = 0LL;
        *a7 = v26;
        goto LABEL_19;
      }
      if ( a1 )
        v25 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v25) = 0;
      Tree = SysCtxRegOpenKey(v25, (_DWORD)v30, 0, 0, v21, (__int64)a7);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeyPath = -1073741772;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
LABEL_19:
      v14 = P;
      goto LABEL_20;
    }
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v15
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (_DWORD)PoolWithTag + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = PoolWithTag + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v13 = 5;
        v18 = (_DWORD)PoolWithTag + 60;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v13 = 14;
        v18 = (_DWORD)PoolWithTag + 86;
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v13, &v32);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v32;
      goto LABEL_15;
    }
    v14 = P;
  }
  DeviceRegKeyPath = -1073741811;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v31 )
    ZwClose(v31);
  if ( v30 )
    ZwClose(v30);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
