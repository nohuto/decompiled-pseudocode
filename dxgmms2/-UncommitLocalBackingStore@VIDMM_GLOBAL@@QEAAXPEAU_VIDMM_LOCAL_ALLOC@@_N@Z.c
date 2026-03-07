// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  VIDMM_PROCESS *v13; // rcx
  __int64 v14; // r14
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  struct _KAPC_STATE v20; // [rsp+60h] [rbp-68h] BYREF
  __int64 v21; // [rsp+90h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v21 = v3;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v3, &v20);
  v9 = *(unsigned int *)(v5 + 72);
  if ( (v9 & 0x2000) == 0
    && ((v9 & 0x44000) != 0x44000 || (v18 = *(_QWORD *)(v3 + 32)) == 0 || (*(_DWORD *)(v18 + 424) & 0x100) == 0)
    && (v9 & 0x400) == 0
    && ((v9 & 0x40000) != 0 || (**(_DWORD **)(v5 + 536) & 0x40000) != 0) )
  {
    if ( a3 )
    {
      v14 = *((_QWORD *)a2 + 2);
      if ( v14 )
      {
        CurrentProcess = PsGetCurrentProcess(278528LL, v9, 0x40000LL, v8);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v14);
      }
    }
  }
  v10 = *(unsigned int *)(v5 + 72);
  v11 = **(unsigned int **)(v5 + 536);
  if ( (v10 & 0x40000) != 0 )
  {
    if ( (v11 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v17 = PsGetCurrentProcess(v11, v10, 0x40000LL, v8);
      WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 12), v17);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v11 & 8) == 0 && (v11 & 0x20000) == 0 && (v11 & 0x10) == 0 && (v11 & 0x20) == 0 )
  {
    v12 = *((_QWORD *)a2 + 3);
    if ( v12 )
    {
      if ( a3 )
      {
        if ( (v10 & 0x100000) != 0 && (*((_BYTE *)a2 + 32) & 1) != 0 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v3 + 24) + 48LL))(
                  *(_QWORD *)(v3 + 24),
                  this,
                  v12,
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  v5);
          if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741558 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v19, 0LL);
          }
          *((_BYTE *)a2 + 32) &= ~1u;
        }
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v3 + 24) + 24LL))(
          *(_QWORD *)(v3 + 24),
          a2);
        *((_QWORD *)a2 + 3) = 0LL;
      }
    }
  }
  v13 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 68) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v13
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v13, &v20);
}
