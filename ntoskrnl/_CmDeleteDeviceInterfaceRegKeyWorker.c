/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A5EBA0
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140A5EA68 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406C9E28 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406D1834 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  wchar_t *v5; // rdi
  int v6; // ebx
  int v9; // r13d
  unsigned int v10; // r15d
  wchar_t *Pool2; // rax
  int DeviceInterfaceRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v14; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  __int64 v17; // r9
  HANDLE v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v28; // [rsp+40h] [rbp-30h] BYREF
  void *v29; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF
  int v34; // [rsp+C8h] [rbp+58h]

  v34 = a4;
  v5 = 0LL;
  LODWORD(v33) = 0;
  v6 = a4;
  v29 = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_43;
  v10 = (a3 & 0x200) != 0 ? 600 : 480;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1380994640LL);
  while ( 1 )
  {
    v5 = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_44;
    }
    LODWORD(cchDest) = v10 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v10 >> 1, a2, a3, v6, v26, Pool2, cchDest, &v33);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
    v14 = 2LL * (unsigned int)v33;
    if ( v14 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_44;
    }
    v10 = 2 * v33;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v14, 1380994640LL);
    v6 = v34;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_44;
  if ( (a3 & 0x100) != 0 )
  {
    v16 = v5;
    if ( a1 )
      v19 = *(_QWORD *)(a1 + 224);
    else
      v19 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v19, 0LL, 0x2000000LL, &v28);
    if ( inited < 0 )
      goto LABEL_44;
    v18 = v28;
    goto LABEL_27;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v5);
  if ( inited < 0 )
    goto LABEL_44;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_43:
    inited = -1073741811;
    goto LABEL_44;
  }
  v16 = v5 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = v5 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v9 = 9;
    v16 = v5 + 47;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v9 = 14;
    v16 = v5 + 43;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v29);
  if ( inited >= 0 )
  {
    v18 = v29;
LABEL_27:
    if ( a3 == 49
      || (inited = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v17, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
    {
      if ( a5 )
      {
        if ( a1 && (v20 = *(_QWORD *)(a1 + 224)) != 0 )
          v21 = *(_QWORD *)(v20 + 8);
        else
          v21 = 0LL;
        v22 = RegRtlDeleteTreeInternal(v18, v16, v21, 0);
      }
      else
      {
        if ( a1 && (v23 = *(_QWORD *)(a1 + 224)) != 0 )
          v24 = *(_QWORD *)(v23 + 8);
        else
          v24 = 0LL;
        v22 = RegRtlDeleteKeyTransacted(v18, v16, v24);
      }
      if ( v22 != -1073741444 && v22 < 0 )
        inited = v22;
    }
  }
LABEL_44:
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ZwClose(v28);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
