__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  _OWORD *v7; // rax
  _QWORD *v8; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rax

  if ( DeviceObject )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 && *((_BYTE *)DeviceExtension + 1159) )
      {
        v7 = (_OWORD *)operator new[](0x20uLL, 0x74727044u, 256LL);
        v8 = v7;
        if ( !v7 )
        {
          v10 = -1073741670;
          WdLogSingleEntry1(6LL, -1073741670LL);
          return v10;
        }
        *v7 = 0LL;
        v7[1] = 0LL;
        KeWaitForSingleObject(&stru_1C013B9B8, Executive, 0, 0, 0LL);
        if ( !byte_1C013B9B0 )
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( !WorkItem )
          {
            v10 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
LABEL_14:
            KeReleaseMutex(&stru_1C013B9B8, 0);
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            return v10;
          }
          byte_1C013B9B0 = 1;
          IoQueueWorkItemEx(
            WorkItem,
            (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
            DelayedWorkQueue,
            0LL);
        }
        *((_DWORD *)v8 + 4) = a2;
        *(_QWORD *)((char *)v8 + 20) = a3;
        v11 = (_QWORD *)qword_1C013B9F8;
        if ( *(void ***)qword_1C013B9F8 != &qword_1C013B9F0 )
          __fastfail(3u);
        *v8 = &qword_1C013B9F0;
        v8[1] = v11;
        *v11 = v8;
        qword_1C013B9F8 = (__int64)v8;
        v8 = 0LL;
        v10 = 0;
        goto LABEL_14;
      }
    }
  }
  return 3221225485LL;
}
