__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  _QWORD *v7; // r13
  char *v11; // rbp
  char *v12; // r14
  char *i; // rax
  __int64 v14; // rsi
  __int64 Pool2; // rax
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v22; // edi
  char **v23; // rcx
  char *v24; // rax
  __int64 v25; // rcx
  void *v26; // rbp
  __int64 v27; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v28; // rax
  int v29; // eax
  __int64 v30; // [rsp+60h] [rbp-48h]
  __int64 v31; // [rsp+B8h] [rbp+10h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v32; // [rsp+C0h] [rbp+18h]
  char v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = (_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 && (*(_DWORD *)(*((_QWORD *)a2 + 4) + 424LL) & 0x100) != 0 )
  {
    if ( !*((_QWORD *)this + 18) )
    {
      WdLogSingleEntry1(1LL, 471LL);
      DxgkLogInternalTriageEvent(v25, 262146LL);
    }
    *v7 = *((_QWORD *)this + 18);
    return 0LL;
  }
  else
  {
    v11 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (char *)this + 40;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 5); i != v12; i = *(char **)i )
    {
      v14 = (__int64)(i - 16);
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)i + 4);
LABEL_7:
        *v7 = *(_QWORD *)v14 + *((unsigned int *)v32 + 4);
        *((_QWORD *)v11 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    Pool2 = ExAllocatePool2(64LL, 40LL, 1700882774LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      *(_QWORD *)(Pool2 + 8) = a2;
      v17 = *(_QWORD *)a2;
      v31 = 0LL;
      v18 = a7;
      a6 = 4096LL;
      v30 = v17;
      if ( !a7 )
      {
        if ( PsGetProcessWow64Process(v17) || (v18 = 2, a4) )
          v18 = 4;
      }
      v19 = a6;
      v20 = *((_QWORD *)this + 13);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v22 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, unsigned __int64, __int64 *, unsigned __int64 *, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v20,
              v30,
              v14,
              0LL,
              v19,
              &v31,
              &a6,
              2,
              0,
              v18);
      if ( v22 >= 0 )
      {
        if ( !v33 || !a5 || (v29 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v14, a6), v22 = v29, v29 >= 0) )
        {
          v23 = (char **)*((_QWORD *)v12 + 1);
          v24 = (char *)(v14 + 16);
          if ( *v23 != v12 )
            __fastfail(3u);
          *(_QWORD *)v24 = v12;
          *(_QWORD *)(v14 + 24) = v23;
          *v23 = v24;
          *((_QWORD *)v12 + 1) = v24;
          goto LABEL_7;
        }
        WdLogSingleEntry0(3LL);
      }
    }
    else
    {
      v22 = -1073741801;
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( v14 )
    {
      v26 = *(void **)v14;
      if ( *(_QWORD *)v14 )
      {
        v27 = *(_QWORD *)a2;
        v28 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, void *))v28 + 4))(v27, v26);
      }
      ExFreePoolWithTag((PVOID)v14, 0);
    }
    return (unsigned int)v22;
  }
}
