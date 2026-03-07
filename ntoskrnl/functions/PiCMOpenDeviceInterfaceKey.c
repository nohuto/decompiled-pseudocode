__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  int v11; // r9d
  int v12; // edi
  unsigned int v13; // esi
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // r9
  int v18; // r9d
  HANDLE v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h]
  __int128 v22; // [rsp+68h] [rbp-18h]

  v6 = Handle;
  v19 = 0LL;
  Handle = 0LL;
  *v6 = 0;
  v20 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v20);
  if ( v10 < 0 )
    goto LABEL_16;
  v12 = v21;
  if ( (_QWORD)v21 && *(_QWORD *)((char *)&v20 + 4) == 0x400000000LL && !DWORD1(v22) && a3 && a4 >= 0x10 )
  {
    v13 = HIDWORD(v21);
    v15 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, v21, 50, v11, HIDWORD(v21), 0, (__int64)&Handle, 0LL);
    if ( v15 != -1073741772 )
      goto LABEL_8;
    if ( (_DWORD)v22 == 1 )
    {
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      {
        v15 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, v12, 50, v18, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
        if ( v15 >= 0 )
        {
          LOBYTE(v16) = PreviousMode;
          v15 = PiCMDuplicateRegistryHandle(Handle, v14, v13, v16, &v19);
        }
        goto LABEL_10;
      }
      v15 = -1073741790;
    }
  }
  else
  {
    v15 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData((unsigned int)v15, v19, DWORD2(v22), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v15 < 0 )
  {
    if ( v19 )
      ObCloseHandle(v19, PreviousMode);
  }
LABEL_16:
  PiCMReleaseObjectInputData(&v20);
  return (unsigned int)v10;
}
