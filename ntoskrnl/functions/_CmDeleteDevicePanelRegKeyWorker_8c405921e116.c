__int64 __fastcall CmDeleteDevicePanelRegKeyWorker(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  int v6; // ebx
  int v8; // r13d
  wchar_t *v9; // rdi
  unsigned int v10; // r12d
  wchar_t *pszDest; // rax
  int v12; // r9d
  int DevicePanelRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v15; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v18; // r15
  HANDLE v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r8
  wchar_t *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  wchar_t *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v35; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v38) = 0;
  v35 = 0LL;
  v6 = a2;
  Handle = 0LL;
  v8 = 4;
  v9 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
  {
LABEL_16:
    inited = -1073741811;
    goto LABEL_17;
  }
  v10 = 317;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  while ( 1 )
  {
    v9 = pszDest;
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_17;
    }
    LODWORD(cchDest) = v10 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(v10 >> 1, v6, a3, v12, v32, pszDest, cchDest, (__int64)&v38);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v9, 0);
    v15 = 2LL * (unsigned int)v38;
    v9 = 0LL;
    if ( v15 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_17;
    }
    v10 = 2 * v38;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
    v6 = a2;
  }
  if ( DevicePanelRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v18 = v9;
      v20 = 0LL;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      inited = SysCtxRegOpenCurrentUserKey(v20, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_17;
      v19 = Handle;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v9);
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
      v18 = v9 + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v9 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
             &DestinationString,
             1u) )
      {
        v8 = 11;
        v18 = v9 + 46;
      }
      inited = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v35);
      if ( inited < 0 )
        goto LABEL_17;
      v19 = v35;
    }
    if ( a5 )
    {
      if ( a1 && (v21 = *(_QWORD *)(a1 + 224)) != 0 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = 0LL;
      v23 = RegRtlDeleteTreeInternal(v19, v18, v22, 0);
    }
    else
    {
      if ( a1 && (v24 = *(_QWORD *)(a1 + 224)) != 0 )
        v25 = *(_QWORD *)(v24 + 8);
      else
        v25 = 0LL;
      v23 = RegRtlDeleteKeyTransacted(v19, v18, v25);
    }
    if ( v23 == -1073741444 )
      goto LABEL_17;
    if ( v23 < 0 )
      goto LABEL_43;
    v26 = wcsrchr(v18, 0x5Cu);
    if ( !v26 )
      goto LABEL_45;
    *v26 = 0;
    if ( a1 && (v27 = *(_QWORD *)(a1 + 224)) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    v23 = RegRtlDeleteKeyTransacted(v19, v18, v28);
    if ( v23 != -1073741535 )
    {
      if ( v23 < 0 )
        goto LABEL_43;
      v29 = wcsrchr(v18, 0x5Cu);
      if ( !v29 )
      {
LABEL_45:
        inited = -1073741595;
        goto LABEL_17;
      }
      *v29 = 0;
      if ( a1 && (v30 = *(_QWORD *)(a1 + 224)) != 0 )
        v31 = *(_QWORD *)(v30 + 8);
      else
        v31 = 0LL;
      v23 = RegRtlDeleteKeyTransacted(v19, v18, v31);
      if ( v23 != -1073741535 && v23 < 0 )
LABEL_43:
        inited = v23;
    }
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inited;
}
