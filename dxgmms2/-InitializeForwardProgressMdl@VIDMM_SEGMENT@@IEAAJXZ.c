__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int LogicalMemory; // edi
  __int64 v5; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _MDL *v11; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v13; // eax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v15; // rdx

  v2 = operator new(24LL, 0x35336956u, 256LL);
  *((_QWORD *)this + 33) = v2;
  if ( v2 )
  {
    *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) = MmAllocatePagesForMdl(
                                                  0LL,
                                                  *(PHYSICAL_ADDRESS *)((char *)this + 120),
                                                  0LL,
                                                  0x10000uLL);
    v5 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    if ( !v5 )
    {
      _InterlockedIncrement(&dword_1C0076830);
      WdLogSingleEntry1(6LL, 818LL);
      goto LABEL_3;
    }
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v7 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))VirtualMemoryInterface + 5))(v5, 0LL, 2LL);
    *((_QWORD *)this + 32) = v7;
    if ( !v7 )
    {
      _InterlockedIncrement(&dword_1C0076860);
      WdLogSingleEntry1(6LL, 833LL);
      goto LABEL_3;
    }
    v8 = (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() == 0;
    v9 = *((_QWORD *)this + 1);
    if ( !v8 )
    {
      if ( *(_BYTE *)(v9 + 40179) )
      {
        if ( *(_BYTE *)(v9 + 40180) )
        {
          LogicalMemory = SysMmAllocateLogicalMemory(
                            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v9 + 24) + 224LL),
                            0x10000LL,
                            *((const void **)this + 33),
                            (void **)this + 61);
          if ( LogicalMemory < 0 )
          {
            _InterlockedIncrement(&dword_1C0076860);
            WdLogSingleEntry1(6LL, 858LL);
LABEL_13:
            DxgkLogInternalTriageEvent(v10, 262145LL);
            goto LABEL_20;
          }
        }
        v11 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 61), 0LL);
        v13 = SysMmMapIommuRange(
                *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
                LogicalAddress,
                v11,
                0);
        LogicalMemory = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v13);
          goto LABEL_20;
        }
      }
      return 0LL;
    }
    LogicalMemory = SysMmAllocateLogicalMemory(
                      *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v9 + 24) + 224LL),
                      0x10000LL,
                      *((const void **)this + 33),
                      (void **)this + 61);
    if ( LogicalMemory >= 0 )
    {
      LogicalMemory = 0;
      goto LABEL_20;
    }
    _InterlockedIncrement(&dword_1C0076860);
    WdLogSingleEntry1(6LL, 887LL);
    goto LABEL_13;
  }
  _InterlockedIncrement(&dword_1C0076864);
  WdLogSingleEntry1(6LL, 803LL);
LABEL_3:
  DxgkLogInternalTriageEvent(v3, 262145LL);
  LogicalMemory = -1073741801;
LABEL_20:
  if ( (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
  {
    v15 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 61);
    if ( v15 )
    {
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v15);
      *((_QWORD *)this + 61) = 0LL;
    }
  }
  return (unsigned int)LogicalMemory;
}
