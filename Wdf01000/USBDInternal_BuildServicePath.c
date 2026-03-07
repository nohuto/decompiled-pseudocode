__int64 __fastcall USBDInternal_BuildServicePath(
        _DEVICE_OBJECT *DeviceObject,
        wchar_t **RelativeServicePath,
        ULONG PoolTag)
{
  _DRIVER_OBJECT *DriverObject; // rbx
  void *v4; // rdi
  unsigned int v7; // ebx
  const void *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  const wchar_t *v12; // r8
  signed int v13; // eax
  __int64 result; // rax

  DriverObject = DeviceObject->DriverObject;
  v4 = 0LL;
  if ( DriverObject->DriverName.Length > 0x10u
    && RtlCompareMemory(DriverObject->DriverName.Buffer, L"\\Driver\\", 0x10uLL) == 16 )
  {
    v8 = DriverObject->DriverName.Buffer + 8;
    v9 = DriverObject->DriverName.Length - 16;
    v10 = v9 + 24;
    PoolWithTag = ExAllocatePoolWithTag(g_NonPagedPoolType, v9 + 24, PoolTag);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9 + 24);
      memmove(v4, v8, v9);
      v13 = RtlStringCbCatW((wchar_t *)v4, v9 + 24, v12);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v7 = 0;
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v13);
        ExFreePoolWithTag(v4, PoolTag);
        v4 = 0LL;
      }
    }
    else
    {
      v7 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v10);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", DriverObject);
    v7 = -1073741595;
  }
  result = v7;
  *RelativeServicePath = (wchar_t *)v4;
  return result;
}
