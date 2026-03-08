/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086BA0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008CF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A6BA0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F7AD0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F8800 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtt_EtwWriteTransfer @ 0x1C002F138 (McTemplateK0pqtt_EtwWriteTransfer.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00AB554 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C00C4290 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  bool v8; // si
  int v9; // eax
  int v10; // edi
  void *v11; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-49h]
  __int64 v17; // [rsp+28h] [rbp-41h]
  __int64 v18; // [rsp+30h] [rbp-39h]
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+50h] [rbp-19h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      *((_DWORD *)a2 + 17) |= 0x8000000u;
      return;
    }
    if ( (*((_DWORD *)a2 + 18) & 0x20000) != 0
      && ((v5 = *((_QWORD *)a2 + 15)) != 0
       && (*(_DWORD *)(v5 + 80) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 240LL))
                                                              + 472LL))
       || *(_WORD *)(*((_QWORD *)a2 + 67) + 4LL) == 3) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v7 = *((_QWORD *)a2 + 67);
      v8 = *(_WORD *)(v7 + 4) == 3
        || *((_QWORD *)a2 + 15)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 16LL)
                                 + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                     + 484LL);
      if ( (*(_DWORD *)v7 & 0x20000000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 18) & 0x80u) != 0 )
        {
          v11 = *(void **)(*((_QWORD *)a2 + 11) + 16LL);
          NumberOfBytesToUnlock = *((_QWORD *)a2 + 1);
          BaseAddress = v11;
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          v13 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG_PTR *, int, int))VirtualMemoryInterface)(
                  -1LL,
                  &BaseAddress,
                  0LL,
                  &NumberOfBytesToUnlock,
                  0x80000,
                  4);
          v10 = v13;
          if ( v13 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, NumberOfBytesToUnlock);
            if ( v8 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
          }
          else
          {
            WdLogSingleEntry1(2LL, v13);
          }
          goto LABEL_10;
        }
        v10 = -1073741823;
      }
      else
      {
        LOBYTE(v6) = v8;
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                                                              + 120LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
               a2,
               *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL),
               v6);
        v10 = v9;
        if ( v9 >= 0 )
          goto LABEL_10;
        if ( v9 != -1071775472 )
        {
          WdLogSingleEntry1(1LL, 7168LL);
          DxgkLogInternalTriageEvent(v14, 0x40000LL);
        }
        _InterlockedIncrement(&dword_1C00767E8);
        WdLogSingleEntry1(6LL, 7172LL);
        HIDWORD(v18) = 0;
        HIDWORD(v17) = 0;
        HIDWORD(v16) = 0;
        DxgkLogInternalTriageEvent(v15, 262145LL);
      }
      *((_DWORD *)a2 + 17) |= 0x8000000u;
LABEL_10:
      *((_QWORD *)this + 927) += *((_QWORD *)a2 + 1);
      ++*((_DWORD *)this + 1852);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      {
        LODWORD(v18) = v10 >= 0;
        LODWORD(v17) = v8;
        LODWORD(v16) = *((_QWORD *)a2 + 1) >> 12;
        McTemplateK0pqtt_EtwWriteTransfer(*((_QWORD *)a2 + 1) >> 12, v10 >= 0, v7, a2, v16, v17, v18);
      }
      KeUnstackDetachProcess(&ApcState);
      if ( v10 >= 0 )
        *((_DWORD *)a2 + 19) |= 8u;
    }
  }
}
