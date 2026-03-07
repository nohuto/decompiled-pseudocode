NTSTATUS __stdcall IoWMIAllocateInstanceIds(LPCGUID Guid, ULONG InstanceCount, ULONG *FirstInstanceId)
{
  _QWORD *v3; // rdi
  _QWORD *v8; // rdx
  unsigned int v9; // r8d
  _QWORD *v10; // rcx
  ULONG v11; // r10d
  __int64 v12; // r9
  __int64 Pool2; // rax
  _QWORD *v14; // rbx
  GUID v15; // xmm0

  v3 = 0LL;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v8 = (_QWORD *)WmipInstIdChunkHead;
LABEL_11:
  if ( v8 )
  {
    v9 = 0;
    v10 = v8 + 1;
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 4);
      if ( v11 == -1 )
        break;
      v12 = *(_QWORD *)&Guid->Data1 - *v10;
      if ( *(_QWORD *)&Guid->Data1 == *v10 )
        v12 = *(_QWORD *)Guid->Data4 - v10[1];
      if ( !v12 )
      {
        *FirstInstanceId = v11;
        *((_DWORD *)v10 + 4) += InstanceCount;
        KeReleaseMutex(&WmipSMMutex, 0);
        return 0;
      }
      ++v9;
      v10 = (_QWORD *)((char *)v10 + 20);
      if ( v9 >= 8 )
      {
        v3 = v8;
        v8 = (_QWORD *)*v8;
        goto LABEL_11;
      }
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 168LL, 1768516951LL);
    v14 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return -1073741670;
    }
    memset((void *)(Pool2 + 8), 255, 0xA0uLL);
    *v14 = 0LL;
    if ( v3 )
      *v3 = v14;
    else
      WmipInstIdChunkHead = (__int64)v14;
    v10 = v14 + 1;
  }
  v15 = *Guid;
  *((_DWORD *)v10 + 4) = InstanceCount;
  *(GUID *)v10 = v15;
  KeReleaseMutex(&WmipSMMutex, 0);
  *FirstInstanceId = 0;
  return 0;
}
