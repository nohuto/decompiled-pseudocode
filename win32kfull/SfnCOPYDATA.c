__int64 __fastcall SfnCOPYDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v9; // rax
  struct tagTHREADINFO *v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  _BYTE v26[8]; // [rsp+30h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-350h] BYREF
  int v28; // [rsp+40h] [rbp-348h] BYREF
  int v29; // [rsp+44h] [rbp-344h]
  unsigned __int64 v30; // [rsp+58h] [rbp-330h] BYREF
  __int128 v31; // [rsp+60h] [rbp-328h] BYREF
  void (*v32)(void *); // [rsp+70h] [rbp-318h]
  __int128 v33; // [rsp+80h] [rbp-308h]
  __int64 v34; // [rsp+90h] [rbp-2F8h]
  __int64 v35; // [rsp+98h] [rbp-2F0h]
  __int128 v36; // [rsp+B8h] [rbp-2D0h]
  __int128 v37; // [rsp+C8h] [rbp-2C0h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-2B0h]
  _DWORD v39[28]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v40[512]; // [rsp+150h] [rbp-238h] BYREF

  v29 = a2;
  memset_0(v39, 0, sizeof(v39));
  v30 = 0LL;
  v28 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v9 = PtiCurrentShared();
  v10 = v9;
  if ( a1 )
    v11 = a1[5] - *((_QWORD *)v9 + 59);
  else
    v11 = 0LL;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = AllocCallbackMessage(112, 1u, v12, v40, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v39;
    RegionSize = (ULONG_PTR)v39;
    v39[0] = 112;
  }
  PtiCurrentShared();
  v31 = 0LL;
  v32 = 0LL;
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 16);
    *(_QWORD *)(ThreadWin32Thread + 16) = &v31;
    *((_QWORD *)&v31 + 1) = v13;
    v32 = Win32FreePool;
  }
  *((_QWORD *)v13 + 5) = v11;
  *((_DWORD *)v13 + 12) = v29;
  *((_QWORD *)v13 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, *(char **)(a4 + 16), v12, (void **)v13 + 11) < 0 )
      goto LABEL_29;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  ThreadLock(a1, &v37);
  v15 = *((_QWORD *)v10 + 60);
  v36 = *(_OWORD *)(v15 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v10 + 60) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v10 + 60) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v18 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v30, &v28);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v10 + 60);
  *(_OWORD *)(v22 + 64) = v36;
  *(_QWORD *)(v22 + 80) = v34;
  if ( v18 >= 0 && v28 == 24 )
  {
    v23 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v35 = *v23;
    goto LABEL_22;
  }
LABEL_29:
  v24 = 0LL;
LABEL_22:
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v31);
  }
  return v24;
}
