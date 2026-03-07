char *__fastcall HalpDmaAllocateChildAdapterV2(
        unsigned int a1,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        _DWORD *a8)
{
  char v11; // si
  char *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // ecx
  char *result; // rax
  int LocalScatterPool; // eax
  __int64 v18; // [rsp+28h] [rbp-59h]
  PVOID Object; // [rsp+58h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v22; // [rsp+88h] [rbp+7h]

  Object = 0LL;
  Handle = 0LL;
  v21[0] = 48LL;
  v21[3] = 528LL;
  v11 = 1;
  v21[1] = 0LL;
  if ( !a3 )
    v11 = a2;
  v21[2] = 0LL;
  v22 = 0LL;
  if ( (int)ObCreateObjectEx(0, HalpDmaAdapterObjectType, (__int64)v21, 0, v18, 648, 0, 0, &Object, 0LL) >= 0 )
  {
    v12 = (char *)Object;
    memset(Object, 0, 0x288uLL);
    if ( ObReferenceObjectByPointer(v12, 0x20000u, HalpDmaAdapterObjectType, 0) >= 0
      && (int)ObInsertObjectEx(v12, 0LL, 0x20000u, 0, 0, 0LL, &Handle) >= 0 )
    {
      ZwClose(Handle);
      *(_DWORD *)v12 = 42467329;
      *((_QWORD *)v12 + 1) = &HalpDmaOperationsV2;
      v12[153] = a6;
      *((_QWORD *)v12 + 16) = 0LL;
      *((_QWORD *)v12 + 17) = 0LL;
      *((_DWORD *)v12 + 4) = 1634550856;
      v12[152] = 0;
      *((_QWORD *)v12 + 40) = 0LL;
      v12[346] = 0;
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)(v12 + 184));
      *((_DWORD *)v12 + 58) = a1;
      v12[442] = a4;
      v12[448] = v11;
      v12[449] = a3;
      v12[445] = a7;
      *((_DWORD *)v12 + 95) = -1;
      *((_DWORD *)v12 + 96) = -1;
      *((_DWORD *)v12 + 39) = 2;
      v12[441] = a5 != 0;
      if ( a1 )
        v13 = (1LL << (v11 != 0 ? 32 : 24)) - 1;
      else
        v13 = -1LL;
      *((_QWORD *)v12 + 18) = v13;
      v14 = &MasterAdapter24V2;
      if ( v11 )
        v14 = &MasterAdapterV2;
      *((_QWORD *)v12 + 20) = v14;
      if ( *((_QWORD *)v12 + 18) >= v14[18] )
      {
        if ( !a1 )
        {
          *((_DWORD *)v12 + 58) = 0;
          v15 = 0;
          v12[345] = 1;
LABEL_13:
          *a8 = v15;
          result = v12;
          *((_QWORD *)v12 + 64) = 0LL;
          return result;
        }
        if ( a4 )
          LocalScatterPool = HalpDmaAllocateLocalScatterPool(v12, a1);
        else
          LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v12, a1);
        if ( LocalScatterPool >= 0 )
        {
          v15 = *((_DWORD *)v12 + 58);
          v12[345] = 0;
          goto LABEL_13;
        }
      }
      ObfDereferenceObject(v12);
    }
  }
  return 0LL;
}
