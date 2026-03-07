__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  int v7; // ebx
  int v8; // r12d
  unsigned int v9; // r14d
  wchar_t *pszDest; // rax
  int CommonClassRegKeyPath; // eax
  int inited; // ebx
  wchar_t *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v17; // r14
  HANDLE v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  int v30; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE v32; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+50h] BYREF
  int v37; // [rsp+B8h] [rbp+58h]

  v37 = a4;
  LODWORD(v36) = 0;
  v32 = 0LL;
  Handle = 0LL;
  v7 = a4;
  v8 = 4;
  v9 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, v9, 1380994640LL);
  while ( 1 )
  {
    v13 = pszDest;
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_7;
    }
    LODWORD(cchDest) = v9 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v9 >> 1, a2, a3, v7, v30, pszDest, cchDest, &v36);
    inited = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v13, 0);
    v13 = 0LL;
    v14 = 2LL * (unsigned int)v36;
    if ( v14 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_7;
    }
    v9 = 2 * v36;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v14, 1380994640LL);
    v7 = v37;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_7;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = v13;
    if ( a1 )
      v19 = *(_QWORD *)(a1 + 224);
    else
      v19 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v19, 0LL, 0x2000000LL, &Handle);
    if ( inited < 0 )
      goto LABEL_7;
    v18 = Handle;
    v32 = Handle;
  }
  else
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, v13);
    if ( inited < 0 )
      goto LABEL_7;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= v9
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      inited = -1073741811;
      goto LABEL_7;
    }
    v17 = v13 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = v13 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v8 = 7;
      v17 = v13 + 39;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 8;
      v17 = v13 + 47;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 14;
      v17 = v13 + 43;
    }
    inited = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v32);
    if ( inited < 0 )
      goto LABEL_7;
    v18 = v32;
  }
  if ( a5 )
  {
    if ( a1 && (v20 = *(_QWORD *)(a1 + 224)) != 0 )
      v21 = *(_QWORD *)(v20 + 8);
    else
      v21 = 0LL;
    v22 = RegRtlDeleteTreeInternal(v18, v17, v21, 0);
  }
  else
  {
    if ( a1 && (v23 = *(_QWORD *)(a1 + 224)) != 0 )
      v24 = *(_QWORD *)(v23 + 8);
    else
      v24 = 0LL;
    v22 = RegRtlDeleteKeyTransacted(v18, v17, v24);
  }
  v25 = v22;
  if ( v22 && v22 != -1073741444 && v22 != -1073741772 )
    goto LABEL_63;
  if ( v8 == 8 && *(_BYTE *)(a1 + 4) )
  {
    inited = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v32);
    if ( inited < 0 )
      goto LABEL_7;
    v26 = *(_QWORD *)(a1 + 224);
    if ( a5 )
    {
      if ( v26 )
        v27 = *(_QWORD *)(v26 + 8);
      else
        v27 = 0LL;
      v28 = RegRtlDeleteTreeInternal(v32, v17, v27, 0);
    }
    else
    {
      if ( v26 )
        v29 = *(_QWORD *)(v26 + 8);
      else
        v29 = 0LL;
      v28 = RegRtlDeleteKeyTransacted(v32, v17, v29);
    }
    if ( v25 == -1073741772 || v28 != -1073741772 )
      v25 = v28;
  }
  if ( v25 != -1073741444 )
  {
LABEL_63:
    if ( v25 < 0 )
      inited = v25;
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)inited;
}
