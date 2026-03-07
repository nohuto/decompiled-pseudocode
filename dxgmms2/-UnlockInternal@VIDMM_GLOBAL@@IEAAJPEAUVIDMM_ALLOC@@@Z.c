__int64 __fastcall VIDMM_GLOBAL::UnlockInternal(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // r14
  VIDMM_GLOBAL *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  bool v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  VIDMM_PROCESS *v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD v20[12]; // [rsp+60h] [rbp-D8h] BYREF
  struct _KAPC_STATE v21; // [rsp+C0h] [rbp-78h] BYREF
  VIDMM_PROCESS *v22; // [rsp+F0h] [rbp-48h]

  v2 = *a2;
  v4 = this;
  v5 = **a2;
  if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v7 = *(VIDMM_PROCESS **)(v6 + 8);
  else
    v7 = 0LL;
  v22 = v7;
  VIDMM_PROCESS::SafeAttach(v7, &v21);
  v8 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 504, 0LL);
  if ( !*((_DWORD *)v2 + 19) )
  {
    WdLogSingleEntry1(1LL, a2);
LABEL_20:
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(v5 + 80) )
  {
    WdLogSingleEntry1(1LL, 24333LL);
    goto LABEL_20;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 360));
  _InterlockedDecrement((volatile signed __int32 *)v2 + 19);
  if ( !*((_DWORD *)v2 + 19) )
  {
    if ( (*(_DWORD *)(v5 + 72) & 0x2000) != 0 )
    {
      UnlockParavirtualizedAllocationOnHost((struct _VIDMM_GLOBAL_ALLOC *)v5);
    }
    else
    {
      v10 = **(unsigned int **)(v5 + 536);
      if ( (v10 & 0x40000) != 0 )
      {
        if ( (v10 & 0x20000000) != 0 )
        {
          v16 = v2[2];
          CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v16);
          v4 = this;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2[1] + 24) + 80LL))(
            *(_QWORD *)(v2[1] + 24),
            v2[3],
            v2[2]);
        }
        v2[2] = 0LL;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 472) != 0LL;
      }
    }
  }
  if ( !*(_DWORD *)(v5 + 360) )
    *(_BYTE *)(v5 + 80) = 0;
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(v10, &EventUnlock2, v11, a2);
LABEL_14:
  ExReleasePushLockExclusiveEx(v5 + 504, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    memset(v20, 0, 0x58uLL);
    LODWORD(v20[0]) = 129;
    v20[5] = v5;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v20, 1);
  }
  VIDMM_PROCESS::SafeDetach(v13, &v21);
  return 0LL;
}
