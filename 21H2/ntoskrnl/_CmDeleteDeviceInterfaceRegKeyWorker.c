/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072CC64
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x14072CB90 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140639AFC (_CmGetDeviceInterfaceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  const wchar_t *v7; // rbx
  int v8; // r12d
  wchar_t *PoolWithTag; // r14
  unsigned __int64 v11; // rsi
  int DeviceInterfaceRegKeyPath; // ebx
  wchar_t *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int16 Length; // bx
  HANDLE v18; // r12
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v26; // [rsp+40h] [rbp-30h] BYREF
  void *v27; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v31) = 0;
  v27 = 0LL;
  v26 = 0LL;
  v7 = (const wchar_t *)a2;
  Handle = 0LL;
  v8 = 4;
  PoolWithTag = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_50;
  LODWORD(v11) = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v11 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    (unsigned int)v11 >> 1,
                                    v7,
                                    a3,
                                    a4,
                                    v24,
                                    PoolWithTag,
                                    cchDest,
                                    &v31);
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v11 = 2LL * (unsigned int)v31;
      if ( v11 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeyPath = -1073741675;
        goto LABEL_10;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_46;
      v7 = (const wchar_t *)a2;
    }
  }
  else
  {
LABEL_46:
    DeviceInterfaceRegKeyPath = -1073741801;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_10;
  if ( (a3 & 0x100) != 0 )
  {
    v13 = PoolWithTag;
    if ( a1 )
      v14 = *(_QWORD *)(a1 + 224);
    else
      v14 = 0LL;
    DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v14, 0LL, 0x2000000LL, &v26);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_10;
    v18 = v26;
    goto LABEL_25;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_10;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_50:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_10;
  }
  v13 = PoolWithTag + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = PoolWithTag + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v8 = 9;
    v13 = PoolWithTag + 47;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v8 = 14;
    v13 = PoolWithTag + 43;
  }
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v27);
  if ( DeviceInterfaceRegKeyPath >= 0 )
  {
    v18 = v27;
LABEL_25:
    if ( a3 == 49
      || (DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v15, 1, 0, (__int64)&Handle, 0LL),
          DeviceInterfaceRegKeyPath >= 0) )
    {
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = RegRtlDeleteTreeInternal(v18, v13, v20, 0LL);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v18, v13, v23);
      }
      if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741444 )
        DeviceInterfaceRegKeyPath = v21;
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
