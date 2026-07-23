/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063276C
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140639AFC (_CmGetDeviceInterfaceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140770A20 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

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
  int v11; // ebx
  wchar_t *PoolWithTag; // r14
  unsigned int v13; // r12d
  PVOID v14; // rsi
  unsigned __int64 v15; // rsi
  int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // esi
  int v19; // r13d
  __int64 v20; // rcx
  int v21; // r12d
  int Tree; // eax
  int v24; // r15d
  HANDLE v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-60h]
  size_t cchDest; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v31; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v37) = 0;
  v33 = 0LL;
  v11 = a2;
  v32 = 0LL;
  PoolWithTag = 0LL;
  v31 = 0LL;
  v13 = 4;
  Handle = 0LL;
  v14 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCCC) == 0 )
  {
    LODWORD(v15) = (a3 & 0x200) != 0 ? 600 : 480;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
    if ( PoolWithTag )
    {
      while ( 1 )
      {
        LODWORD(cchDest) = (unsigned int)v15 >> 1;
        DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                      (unsigned int)v15 >> 1,
                                      v11,
                                      a3,
                                      a4,
                                      v28,
                                      (__int64)PoolWithTag,
                                      cchDest,
                                      (__int64)&v37);
        if ( DeviceInterfaceRegKeyPath != -1073741789 )
          break;
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
        v15 = 2LL * (unsigned int)v37;
        if ( v15 > 0xFFFFFFFF )
        {
          DeviceInterfaceRegKeyPath = -1073741675;
          goto LABEL_19;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_48;
        v11 = a2;
      }
    }
    else
    {
LABEL_48:
      DeviceInterfaceRegKeyPath = -1073741801;
    }
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (int)PoolWithTag;
      if ( a1 )
        v26 = *(_QWORD *)(a1 + 224);
      else
        v26 = 0LL;
      DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v26, 0LL, 0x2000000LL, &v32);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = (int)v32;
LABEL_15:
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v20) = 0;
      v21 = a5;
      Tree = SysCtxRegOpenKey(v20, v19, v18, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_19;
      }
      if ( Tree != -1073741444 )
      {
        if ( Tree != -1073741772 )
          goto LABEL_47;
        if ( !a6 )
        {
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
            DeviceInterfaceRegKeyPath = -1073741772;
          else
            DeviceInterfaceRegKeyPath = -1073741127;
          goto LABEL_19;
        }
        if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
        {
          DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, 0LL, 1, 0, (__int64)&Handle, 0LL);
          if ( DeviceInterfaceRegKeyPath < 0 )
            goto LABEL_19;
        }
        DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeySecurityDescriptor(a1, a3, &P);
        if ( DeviceInterfaceRegKeyPath < 0 )
          goto LABEL_19;
        v24 = v21;
        if ( P )
          v24 = 917510;
        Tree = PnpCtxRegCreateTree(a1, v19, v18, 0, v24, (__int64)P, (__int64)&v31, (__int64)a8);
        if ( Tree != -1073741444 )
        {
          if ( Tree >= 0 )
          {
            if ( v24 == v21 )
            {
              v25 = v31;
              v31 = 0LL;
              *a7 = v25;
              goto LABEL_19;
            }
            if ( a1 )
              v27 = *(_QWORD *)(a1 + 224);
            else
              LODWORD(v27) = 0;
            Tree = SysCtxRegOpenKey(v27, (_DWORD)v31, 0, 0, v21, (__int64)a7);
            if ( Tree == -1073741444 )
            {
              DeviceInterfaceRegKeyPath = -1073741772;
              goto LABEL_19;
            }
            if ( Tree >= 0 )
              goto LABEL_19;
          }
LABEL_47:
          DeviceInterfaceRegKeyPath = Tree;
          goto LABEL_19;
        }
      }
      DeviceInterfaceRegKeyPath = -1073741595;
      goto LABEL_19;
    }
    DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceInterfaceRegKeyPath < 0 )
    {
LABEL_19:
      v14 = P;
      goto LABEL_20;
    }
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
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v13 = 9;
        v18 = (_DWORD)PoolWithTag + 94;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v13 = 14;
        v18 = (_DWORD)PoolWithTag + 86;
      }
      DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v13, &v33);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v33;
      goto LABEL_15;
    }
    v14 = P;
  }
  DeviceInterfaceRegKeyPath = -1073741811;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v32 )
    ZwClose(v32);
  if ( v31 )
    ZwClose(v31);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
