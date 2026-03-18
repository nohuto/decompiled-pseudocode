/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A23A34
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140A238FC (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140781814 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 a1, const wchar_t *a2, int a3, int a4, char a5)
{
  wchar_t *Pool2; // rdi
  int v6; // ebx
  int v9; // r13d
  unsigned int v10; // r15d
  int DeviceInterfaceRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v13; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v15; // r15
  __int64 v16; // r9
  char *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  int v25; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v27; // [rsp+40h] [rbp-30h] BYREF
  char *v28; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+50h] BYREF
  int v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  Pool2 = 0LL;
  LODWORD(v32) = 0;
  v6 = a4;
  v28 = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_43;
  v10 = (a3 & 0x200) != 0 ? 600 : 480;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_42:
    inited = -1073741801;
    goto LABEL_44;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = v10 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v10 >> 1, a2, a3, v6, v25, Pool2, cchDest, &v32);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v13 = 2LL * (unsigned int)v32;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_44;
    }
    v10 = 2 * v32;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_42;
    v6 = v33;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_44;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = Pool2;
    if ( a1 )
      v18 = *(_QWORD *)(a1 + 224);
    else
      v18 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &v27);
    if ( inited < 0 )
      goto LABEL_44;
    v17 = (char *)v27;
    goto LABEL_26;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
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
  v15 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v9 = 9;
    v15 = Pool2 + 47;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v9 = 14;
    v15 = Pool2 + 43;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v28);
  if ( inited >= 0 )
  {
    v17 = v28;
LABEL_26:
    if ( a3 == 49
      || (inited = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v16, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
    {
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = RegRtlDeleteTreeInternal((__int64)v17, (__int64)v15, v20, 0);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v17, v15, v23);
      }
      if ( v21 != -1073741444 && v21 < 0 )
        inited = v21;
    }
  }
LABEL_44:
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ZwClose(v27);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
