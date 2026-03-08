/*
 * XREFs of PiDevCfgInitResolveContext @ 0x140876E48
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14087FC64 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgFreeResolveContext @ 0x1408771F0 (PiDevCfgFreeResolveContext.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14096DFEC (PiDrvDbResolveKeyFilePaths.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgInitResolveContext(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // eax
  int v6; // ebx
  NTSTATUS v7; // eax
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v15[1] = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 16) = 0LL;
  v16 = L"Variables";
  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v15[0] = 1310738;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 != -1073741772 )
  {
    if ( v5 < 0 )
      goto LABEL_4;
    Pool2 = ExAllocatePool2(256LL, 2032LL, 1667526736LL);
    *(_QWORD *)(a3 + 24) = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_4;
    }
    v10 = 0LL;
    v11 = 127LL;
    do
    {
      v12 = (_QWORD *)(v10 + *(_QWORD *)(a3 + 24));
      v10 += 16LL;
      v12[1] = v12;
      *v12 = v12;
      --v11;
    }
    while ( v11 );
  }
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v16 = L"Setup\\ResolveFilePaths";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v15[0] = 3014700;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v7;
  if ( v7 == -1073741772 || v7 == -1073741444 )
    goto LABEL_3;
  if ( v7 < 0 )
    goto LABEL_4;
  v6 = PiDrvDbResolveKeyFilePaths(a2);
  if ( v6 < 0 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  if ( *(_QWORD *)&PiPnpRtlCtx && (v13 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v14 = *(_QWORD *)(v13 + 8);
  else
    v14 = 0LL;
  RegRtlDeleteTreeInternal(KeyHandle, 0LL, v14, 0);
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 < 0 )
    PiDevCfgFreeResolveContext(a3);
  return (unsigned int)v6;
}
