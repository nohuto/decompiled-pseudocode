void __fastcall VIDMM_SEGMENT::FreeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  struct _MDL *v2; // rbx
  unsigned __int64 LogicalAddress; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v8; // rax
  struct _MDL *v9; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v10; // rdx

  if ( (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) )
    {
      v2 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 61), 0LL);
      SysMmUnmapIommuRange(
        *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
        LogicalAddress,
        v2,
        0);
      v4 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 61);
      if ( v4 )
        SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v4);
    }
  }
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v5, v6);
    *((_QWORD *)this + 32) = 0LL;
  }
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
  {
    v9 = *(struct _MDL **)(v8 + 8);
    if ( v9 )
    {
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)this + 33) + 8LL), 0);
    }
    operator delete(*((void **)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( !(unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
  {
    v10 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 61);
    if ( v10 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v10);
  }
}
