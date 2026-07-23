/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x14072D41C (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140636EFC (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _CmDeleteDeviceRegKey @ 0x14072D41C (_CmDeleteDeviceRegKey.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14072E0E8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  __int64 v8; // rbx
  int v9; // r12d
  wchar_t *PoolWithTag; // r14
  unsigned __int64 v11; // rsi
  int DeviceRegKeyPath; // ebx
  const wchar_t *v13; // rsi
  __int64 v14; // rcx
  unsigned __int16 Length; // bx
  HANDLE v17; // rax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // r8
  HANDLE v21; // r12
  int v22; // eax
  wchar_t *v23; // rax
  wchar_t *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  int *p_DestinationString; // r13
  unsigned int v28; // r12d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  size_t v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  HANDLE v38; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  v37 = a2;
  LODWORD(v35) = 0;
  v36 = 0LL;
  v38 = 0LL;
  v8 = a2;
  Handle = 0LL;
  v9 = 4;
  PoolWithTag = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_85;
  LODWORD(v11) = (a3 & 0x200) != 0 ? 360 : 240;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v34) = (unsigned int)v11 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v8, a3, a4, 0, PoolWithTag, v34, &v35);
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v11 = 2LL * (unsigned int)v35;
      if ( v11 > 0xFFFFFFFF )
      {
        DeviceRegKeyPath = -1073741675;
        goto LABEL_10;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_60;
      v8 = v37;
    }
  }
  else
  {
LABEL_60:
    DeviceRegKeyPath = -1073741801;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_10;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_10;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v11
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v13 = PoolWithTag + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = PoolWithTag + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v9 = 5;
        v13 = PoolWithTag + 30;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v9 = 14;
        v13 = PoolWithTag + 43;
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v36);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_10;
      v17 = v36;
      goto LABEL_26;
    }
LABEL_85:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_10;
  }
  v13 = PoolWithTag;
  v14 = 0LL;
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 224);
  DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v14, 0LL, 0x2000000LL, &v38);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_10;
  v17 = v38;
LABEL_26:
  v36 = v17;
  DeviceRegKeyPath = CmOpenDeviceRegKey(a1, v37, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_10;
  v18 = (unsigned __int8)a3;
  LODWORD(v35) = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 786;
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    v28 = 0;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v29 = CmDeleteDeviceRegKey(a1, v37, *p_DestinationString, 0);
      if ( v29 )
      {
        if ( v29 != -1073741637 && v29 != -1073741772 && v29 != -1073741811 )
          break;
      }
      ++v28;
      ++p_DestinationString;
      if ( v28 >= 3 )
        goto LABEL_51;
    }
    DeviceRegKeyPath = v29;
LABEL_51:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_10;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v37);
    v22 = CmSetDeviceRegProp(a1, v37, 0, 10, 1, 0LL, 0, 0);
    if ( v22 && v22 != -1073741275 && v22 != -1073741810 )
      goto LABEL_36;
    v18 = v35;
  }
  if ( a5 )
  {
    if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
      v20 = *(_QWORD *)(v19 + 8);
    else
      v20 = 0LL;
    v21 = v36;
    v22 = RegRtlDeleteTreeInternal(v36, v13, v20, 0LL);
  }
  else
  {
    if ( a1 && (v30 = *(_QWORD *)(a1 + 224)) != 0 )
      v31 = *(_QWORD *)(v30 + 8);
    else
      v31 = 0LL;
    v21 = v36;
    v22 = RegRtlDeleteKeyTransacted(v36, v13, v31);
  }
  if ( v22 != -1073741444 )
  {
    if ( v22 < 0 )
      goto LABEL_36;
    if ( v18 != 18 && (v18 != 17 || (a3 & 0xF00) != 0) )
    {
      v23 = wcsrchr(v13, 0x5Cu);
      if ( !v23 || (*v23 = 0, (v24 = wcsrchr(v13, 0x5Cu)) == 0LL) )
      {
        DeviceRegKeyPath = -1073741595;
        goto LABEL_10;
      }
      if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
        v26 = *(_QWORD *)(v25 + 8);
      else
        v26 = 0LL;
      v22 = RegRtlDeleteKeyTransacted(v21, v13, v26);
      if ( v22 != -1073741535 )
      {
        if ( v22 < 0
          || ((*v24 = 0, !a1) || (v32 = *(_QWORD *)(a1 + 224)) == 0 ? (v33 = 0LL) : (v33 = *(_QWORD *)(v32 + 8)),
              (v22 = RegRtlDeleteKeyTransacted(v21, v13, v33), (int)(v22 + 0x80000000) >= 0) && v22 != -1073741535) )
        {
LABEL_36:
          DeviceRegKeyPath = v22;
        }
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
