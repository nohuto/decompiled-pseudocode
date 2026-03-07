__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  wchar_t *v5; // rdi
  __int64 v7; // rbx
  int v9; // r13d
  unsigned int v10; // r12d
  wchar_t *pszDest; // rax
  __int64 v12; // r9
  wchar_t *v13; // rsi
  NTSTATUS DeviceContainerRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v16; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v19; // r15
  HANDLE v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v30; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  v5 = 0LL;
  LODWORD(v33) = 0;
  v30 = 0LL;
  v7 = a2;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
  {
LABEL_16:
    inited = -1073741811;
    goto LABEL_17;
  }
  v10 = 260;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  while ( 1 )
  {
    v5 = pszDest;
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_17;
    }
    LODWORD(cchDest) = v10 >> 1;
    v13 = pszDest;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(v10 >> 1, v7, a3, v12, v27, pszDest, cchDest, &v33);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
    v16 = 2LL * (unsigned int)v33;
    if ( v16 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_17;
    }
    v10 = 2 * v33;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v16, 1380994640LL);
    v7 = a2;
  }
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v19 = v5;
      if ( a1 )
        v21 = *(_QWORD *)(a1 + 224);
      else
        v21 = 0LL;
      inited = SysCtxRegOpenCurrentUserKey(v21, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_17;
      v20 = Handle;
      goto LABEL_31;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, v5);
    if ( inited < 0 )
      goto LABEL_17;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= v10
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      goto LABEL_16;
    }
    v19 = v5 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = v5 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
           &DestinationString,
           1u) )
    {
      v9 = 10;
      v19 = v5 + 50;
    }
    inited = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v30);
    if ( inited >= 0 )
    {
      v20 = v30;
LABEL_31:
      if ( a5 )
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v24 = RegRtlDeleteTreeInternal(v20, v19, v23, 0);
      }
      else
      {
        if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
          v26 = *(_QWORD *)(v25 + 8);
        else
          v26 = 0LL;
        v24 = RegRtlDeleteKeyTransacted(v20, v19, v26);
      }
      v5 = v13;
      if ( v24 != -1073741444 && v24 < 0 )
        inited = v24;
    }
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
