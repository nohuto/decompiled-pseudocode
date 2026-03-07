__int64 __fastcall DpiFdoHandleQueryPartitioningDeviceInterface(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        _QWORD *a4,
        PVOID Object)
{
  __int64 v6; // rbx
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v6 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v6, L"DpiFdoHandleQueryPartitioningDeviceInterface", 0LL);
  if ( Object )
  {
    if ( a3 == 1 )
    {
      if ( a2 >= 0x20u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v6 + 484) )
          DpiCheckForOutstandingD3Requests(v6);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
        memmove(a4, &unk_1C013ADB0, 0x20uLL);
        PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v6, Object);
        Object = 0LL;
        a4[1] = PartitionedInterfaceContextPointer;
        DpiGetVirtualGpuType(PartitionedInterfaceContextPointer, &Object);
        ObfReferenceObject(Object);
        if ( *(_BYTE *)(v6 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, 0LL);
        return 3221225507LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 0LL);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225485LL;
  }
}
