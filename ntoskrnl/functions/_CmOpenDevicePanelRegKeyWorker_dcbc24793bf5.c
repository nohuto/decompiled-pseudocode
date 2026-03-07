__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *v8; // rdi
  const wchar_t *v10; // rbx
  int v12; // r13d
  unsigned int v13; // r12d
  wchar_t *pszDest; // rax
  __int64 v15; // r9
  NTSTATUS DevicePanelRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v18; // rax
  unsigned __int16 Length; // bx
  __int64 v20; // r14
  HANDLE v21; // rdx
  __int64 v22; // rcx
  int Tree; // eax
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v29; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v8 = 0LL;
  LODWORD(v32) = 0;
  v29 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  v13 = 317;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  while ( 1 )
  {
    v8 = pszDest;
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_37;
    }
    LODWORD(cchDest) = v13 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(v13 >> 1, v10, a3, v15, v26, pszDest, cchDest, &v32);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
    v18 = 2LL * (unsigned int)v32;
    if ( v18 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_37;
    }
    v13 = 2 * v32;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v18, 1380994640LL);
    v10 = a2;
  }
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_37;
  if ( (a3 & 0x100) == 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, v8);
    if ( inited < 0 )
      goto LABEL_37;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v13
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v20 = (__int64)(v8 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v8 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
             &DestinationString,
             1u) )
      {
        v12 = 11;
        v20 = (__int64)(v8 + 46);
      }
      inited = PnpCtxGetCachedContextBaseKey(a1, v12, (__int64)&v29);
      if ( inited < 0 )
        goto LABEL_37;
      v21 = v29;
      goto LABEL_25;
    }
LABEL_36:
    inited = -1073741811;
    goto LABEL_37;
  }
  v20 = (__int64)v8;
  if ( a1 )
    v22 = *(_QWORD *)(a1 + 224);
  else
    v22 = 0LL;
  inited = SysCtxRegOpenCurrentUserKey(v22, 0LL, 0x2000000LL, &Handle);
  if ( inited < 0 )
    goto LABEL_37;
  v21 = Handle;
LABEL_25:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1);
  }
  else
  {
    if ( a1 )
      v24 = *(_QWORD *)(a1 + 224);
    else
      v24 = 0LL;
    Tree = SysCtxRegOpenKey(v24, (__int64)v21, v20, 0, a5, a7);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_37;
    }
  }
  if ( Tree == -1073741444 )
  {
    inited = -1073741595;
  }
  else if ( Tree < 0 )
  {
    inited = Tree;
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)inited;
}
