__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // ebx
  int v8; // r12d
  wchar_t *v9; // rdi
  unsigned int v10; // r15d
  wchar_t *Pool2; // rax
  NTSTATUS DeviceRegKeyPath; // eax
  int inited; // ebx
  unsigned __int64 v14; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  HANDLE v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  int *p_DestinationString; // rax
  unsigned int v21; // r12d
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r8
  void *v26; // r12
  __int64 v27; // rax
  __int64 v28; // r8
  wchar_t *v29; // rax
  wchar_t *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  size_t v36; // [rsp+30h] [rbp-41h]
  __int64 v38; // [rsp+48h] [rbp-29h] BYREF
  void *v39; // [rsp+50h] [rbp-21h] BYREF
  int v40[2]; // [rsp+58h] [rbp-19h]
  HANDLE v41; // [rsp+60h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1h] BYREF

  *(_QWORD *)v40 = a2;
  v5 = a4;
  LODWORD(v38) = 0;
  v39 = 0LL;
  v41 = 0LL;
  Handle = 0LL;
  v8 = 4;
  v9 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_73;
  v10 = (a3 & 0x200) != 0 ? 360 : 240;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1380994640LL);
  while ( 1 )
  {
    v9 = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_74;
    }
    LODWORD(v36) = v10 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, *(__int64 *)v40, a3, v5, 0, Pool2, v36, &v38);
    inited = DeviceRegKeyPath;
    if ( DeviceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(v9, 0);
    v14 = 2LL * (unsigned int)v38;
    v9 = 0LL;
    if ( v14 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_74;
    }
    v10 = 2 * v38;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v14, 1380994640LL);
    v5 = a4;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_74;
  if ( (a3 & 0x100) != 0 )
  {
    v16 = v9;
    v18 = 0LL;
    if ( a1 )
      v18 = *(_QWORD *)(a1 + 224);
    inited = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &v41);
    if ( inited < 0 )
      goto LABEL_74;
    v17 = v41;
    goto LABEL_26;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v9);
  if ( inited < 0 )
    goto LABEL_74;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_73:
    inited = -1073741811;
    goto LABEL_74;
  }
  v16 = v9 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = v9 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
  {
    v8 = 5;
    v16 = v9 + 30;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v8 = 14;
    v16 = v9 + 43;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v39);
  if ( inited < 0 )
    goto LABEL_74;
  v17 = v39;
LABEL_26:
  v39 = v17;
  inited = CmOpenDeviceRegKey(a1, *(__int64 *)v40, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( inited < 0 )
    goto LABEL_74;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    v19 = *(_QWORD *)v40;
    p_DestinationString = (int *)&DestinationString;
    v38 = (__int64)&DestinationString;
    v21 = 0;
    *(_DWORD *)&DestinationString.Length = 786;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v22 = CmDeleteDeviceRegKey(a1, v19, *p_DestinationString, 0);
      if ( v22 )
      {
        if ( v22 != -1073741772 && v22 != -1073741811 && v22 != -1073741637 )
          break;
      }
      ++v21;
      p_DestinationString = (int *)(v38 + 4);
      v38 += 4LL;
      if ( v21 >= 3 )
        goto LABEL_37;
    }
    inited = v22;
    if ( v22 < 0 )
      goto LABEL_74;
LABEL_37:
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v19);
    v23 = CmSetDeviceRegProp(a1, v19, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v23 )
    {
      if ( v23 != -1073741275 && v23 != -1073741810 )
        goto LABEL_40;
    }
  }
  if ( a5 )
  {
    if ( a1 && (v24 = *(_QWORD *)(a1 + 224)) != 0 )
      v25 = *(_QWORD *)(v24 + 8);
    else
      v25 = 0LL;
    v26 = v39;
    v23 = RegRtlDeleteTreeInternal(v39, v16, v25, 0);
  }
  else
  {
    if ( a1 && (v27 = *(_QWORD *)(a1 + 224)) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    v26 = v39;
    v23 = RegRtlDeleteKeyTransacted(v39, v16, v28);
  }
  if ( v23 != -1073741444 )
  {
    if ( v23 < 0 )
    {
LABEL_40:
      inited = v23;
      goto LABEL_74;
    }
    if ( (unsigned __int8)a3 != 18 && ((unsigned __int8)a3 != 17 || (a3 & 0xF00) != 0) )
    {
      v29 = wcsrchr(v16, 0x5Cu);
      if ( v29 && (*v29 = 0, (v30 = wcsrchr(v16, 0x5Cu)) != 0LL) )
      {
        if ( a1 && (v31 = *(_QWORD *)(a1 + 224)) != 0 )
          v32 = *(_QWORD *)(v31 + 8);
        else
          v32 = 0LL;
        v23 = RegRtlDeleteKeyTransacted(v26, v16, v32);
        if ( v23 != -1073741535 )
        {
          if ( v23 < 0 )
            goto LABEL_40;
          *v30 = 0;
          if ( a1 && (v33 = *(_QWORD *)(a1 + 224)) != 0 )
            v34 = *(_QWORD *)(v33 + 8);
          else
            v34 = 0LL;
          v23 = RegRtlDeleteKeyTransacted(v26, v16, v34);
          if ( (int)(v23 + 0x80000000) >= 0 && v23 != -1073741535 )
            goto LABEL_40;
        }
      }
      else
      {
        inited = -1073741595;
      }
    }
  }
LABEL_74:
  if ( Handle )
    ZwClose(Handle);
  if ( v41 )
    ZwClose(v41);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inited;
}
