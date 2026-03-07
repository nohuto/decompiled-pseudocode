__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v8; // edi
  char *Pool2; // rbx
  GUID v10; // xmm1
  GUID v11; // xmm0
  GUID v12; // xmm1
  _QWORD *v13; // rax
  GUID ActivityId[5]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 4;
  LOBYTE(ActivityId[3].Data1) = -1;
  ActivityId[2].Data1 = a2;
  Pool2 = (char *)ExAllocatePool2(256LL, 112LL, 1953656900LL);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    v10 = ActivityId[1];
    *(GUID *)(Pool2 + 40) = ActivityId[0];
    *((_QWORD *)Pool2 + 2) = Object;
    v11 = ActivityId[2];
    *(GUID *)(Pool2 + 56) = v10;
    *((_DWORD *)Pool2 + 6) = a2;
    v12 = ActivityId[3];
    *(GUID *)(Pool2 + 72) = v11;
    *((_DWORD *)Pool2 + 7) = v5;
    *(_QWORD *)&v11.Data1 = *(_QWORD *)&ActivityId[4].Data1;
    *(GUID *)(Pool2 + 88) = v12;
    *((_QWORD *)Pool2 + 4) = a4;
    *((_QWORD *)Pool2 + 13) = *(_QWORD *)&v11.Data1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C013B620);
    qword_1C013B658 = (__int64)KeGetCurrentThread();
    if ( a2 == 2 && (_DWORD)v5 == 4 )
    {
      ++dword_1C013B670;
      KeClearEvent(&Event);
    }
    v13 = (_QWORD *)qword_1C013B668;
    if ( *(__int64 **)qword_1C013B668 != &qword_1C013B660 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_1C013B660;
    *((_QWORD *)Pool2 + 1) = v13;
    *v13 = Pool2;
    qword_1C013B668 = (__int64)Pool2;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        WdLogSingleEntry1(4LL, v5);
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        KeSetEvent(&Event, 0, 0);
        v8 = -1073741670;
        WdLogSingleEntry1(6LL, -1073741670LL);
      }
    }
    qword_1C013B658 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C013B620);
    if ( v8 < 0 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  return (unsigned int)v8;
}
