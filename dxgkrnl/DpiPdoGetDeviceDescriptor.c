__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  __int64 DeviceDescriptor; // rdi
  __int64 v13; // r15
  void *v14; // rax
  __int64 v16; // rcx
  size_t v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r9d
  bool v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  void *Pool2; // rax
  _WORD *v28; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  LODWORD(DeviceDescriptor) = 0;
  *(_OWORD *)Size = 0LL;
  v13 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 14) )
  {
    HIDWORD(Size[0]) = 256;
    Size[1] = ExAllocatePool2(256LL, 256LL, 1953656900LL);
    if ( Size[1] )
    {
      v16 = *((unsigned __int16 *)a2 + 47);
      if ( (unsigned int)v16 >= HIDWORD(Size[0]) )
      {
        v17 = HIDWORD(Size[0]);
      }
      else
      {
        memset((void *)(Size[1] + v16), 0, (unsigned int)(HIDWORD(Size[0]) - v16));
        v17 = *((unsigned __int16 *)a2 + 47);
      }
      memmove((void *)Size[1], *((const void **)a2 + 14), v17);
LABEL_10:
      *a8 = *(_OWORD *)Size;
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v18 = *a2;
      v19 = 2LL;
      goto LABEL_41;
    }
    HIDWORD(Size[0]) = 408;
    Pool2 = (void *)ExAllocatePool2(256LL, 408LL, 1953656900LL);
    Size[1] = (size_t)Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, HIDWORD(Size[0]));
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3912), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3912));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      if ( (int)DeviceDescriptor < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v13 + 216), DeviceDescriptor);
        goto LABEL_12;
      }
      v28 = (_WORD *)Size[1];
      *(_WORD *)(Size[1] + 100) = 0;
      v28[101] = 0;
      v28[152] = 0;
      v28[203] = 0;
      goto LABEL_10;
    }
LABEL_19:
    v18 = -1073741801LL;
    LODWORD(DeviceDescriptor) = -1073741801;
    v19 = 6LL;
LABEL_41:
    WdLogSingleEntry1(v19, v18);
    goto LABEL_12;
  }
  HIDWORD(Size[0]) = 256;
  v14 = (void *)ExAllocatePool2(256LL, 256LL, 1953656900LL);
  Size[1] = (size_t)v14;
  if ( !v14 )
    goto LABEL_19;
  memset(v14, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3912), 1);
  LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3912));
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071841272 )
  {
    Size[0] = 0x8000000000LL;
    memset((void *)Size[1], 0, 0x100uLL);
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3912), 1);
    LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3912));
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  }
  if ( (_DWORD)DeviceDescriptor == -1071774719 || (_DWORD)DeviceDescriptor == -1071841279 )
  {
    if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
      WdLogSingleEntry2(2LL, DpiDxgkDdiQueryDeviceDescriptor, v26);
    else
      WdLogSingleEntry1(3LL, v26);
  }
  else
  {
    if ( (int)DeviceDescriptor >= 0 )
    {
      if ( !DpiIsValidEdid(Size[1]) )
      {
        v23 = IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]);
        v25 = 2LL;
        if ( !v23 )
          v25 = 3LL;
        WdLogSingleEntry1(v25, v24);
        LODWORD(DeviceDescriptor) = -1073741823;
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    WdLogSingleEntry1(3LL, *(_QWORD *)(v13 + 216));
    if ( a6 != 1 || (unsigned int)a2[15] >= 3 )
      goto LABEL_12;
    KeWaitForSingleObject((PVOID)(v8 + 3424), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      v20 = *(_QWORD *)(a1 + 64);
      *((_BYTE *)a2 + 64) = 1;
      v21 = *(_DWORD *)(v20 + 3704);
      *(_DWORD *)(v20 + 3704) = v21 + 1;
      if ( !v21 )
        KeClearEvent((PRKEVENT)(v20 + 3712));
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3424), 0);
    LOBYTE(v22) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, a2[6], a3, v22, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_11:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_12:
    KeWaitForSingleObject((PVOID)(v8 + 3424), Executive, 0, 0, 0LL);
    a2[15] = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3424), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
