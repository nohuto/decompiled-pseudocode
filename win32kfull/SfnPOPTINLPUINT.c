unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  int *v9; // rbx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned __int64 v15; // rsi
  unsigned __int8 *result; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  char v28[8]; // [rsp+30h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-350h] BYREF
  int v30; // [rsp+40h] [rbp-348h] BYREF
  int v31; // [rsp+44h] [rbp-344h]
  unsigned __int64 v32; // [rsp+58h] [rbp-330h] BYREF
  __int128 v33; // [rsp+68h] [rbp-320h]
  __int64 v34; // [rsp+78h] [rbp-310h]
  __int128 v35; // [rsp+80h] [rbp-308h] BYREF
  __int64 v36; // [rsp+90h] [rbp-2F8h]
  __int64 v37; // [rsp+98h] [rbp-2F0h]
  __int128 v38; // [rsp+B8h] [rbp-2D0h]
  __int128 v39; // [rsp+C8h] [rbp-2C0h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-2B0h]
  int v41; // [rsp+E0h] [rbp-2A8h] BYREF
  char v42[92]; // [rsp+E4h] [rbp-2A4h] BYREF
  unsigned __int8 v43[512]; // [rsp+140h] [rbp-248h] BYREF

  v31 = a2;
  memset_0(&v41, 0, 0x58uLL);
  v9 = &v41;
  v32 = 0LL;
  v30 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v11 = PtiCurrentShared(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  if ( a4 )
  {
    v14 = 1;
    v15 = 4LL * (unsigned int)a3;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  else
  {
    LODWORD(v15) = 0;
    v14 = 0;
  }
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v15, v43, 1, 0x200uLL);
    v9 = (int *)result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v41;
    RegionSize = (ULONG_PTR)&v41;
    memset_0(v42, 0, 0x54uLL);
    v41 = 88;
  }
  PtiCurrentShared(v17);
  v35 = 0LL;
  v36 = 0LL;
  if ( v9 != &v41 && v9 != (int *)v43 )
    PushW32ThreadLock((__int64)v9, &v35, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v13;
  v9[12] = v31;
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v15, (void **)v9 + 8) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  ThreadLock(a1, &v39);
  v18 = *((_QWORD *)v12 + 60);
  v38 = *(_OWORD *)(v18 + 64);
  v33 = v38;
  v34 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v21 = KeUserModeCallback(36LL, v9, (unsigned int)*v9, &v32, &v30);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v25 + 64) = v38;
  *(_QWORD *)(v25 + 80) = v34;
  if ( v21 >= 0 && v30 == 24 )
  {
    v26 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v37 = *v26;
    goto LABEL_32;
  }
LABEL_31:
  v27 = 0LL;
LABEL_32:
  if ( v9 != &v41 && v9 != (int *)v43 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return (unsigned __int8 *)v27;
}
