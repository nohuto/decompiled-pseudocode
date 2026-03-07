__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, unsigned int a2, unsigned int a3, char *a4)
{
  __int64 v4; // rbp
  unsigned int DeviceDescriptor; // esi
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 64);
  DeviceDescriptor = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v14[0] = a2;
  v14[1] = a3;
  v15 = a4;
  v10 = *(_QWORD *)(v4 + 936);
  if ( *(_QWORD *)(v10 + 104) )
  {
    v12 = *(unsigned __int16 *)(v10 + 94);
    if ( a2 >= v12 )
    {
      return (unsigned int)-1071841272;
    }
    else
    {
      v13 = v12 - a2;
      if ( v13 >= a3 )
        v13 = a3;
      else
        memset(&a4[v13], 0, a3 - v13);
      memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)(v4 + 936) + 112LL) + v6), v13);
    }
  }
  else
  {
    KeWaitForSingleObject(*(PVOID *)(v10 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3912), 1);
    DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(v8, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v14);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3912));
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
  }
  return DeviceDescriptor;
}
