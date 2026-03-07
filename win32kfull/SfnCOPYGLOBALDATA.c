unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  _BYTE v23[4]; // [rsp+30h] [rbp-328h] BYREF
  int v24; // [rsp+34h] [rbp-324h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+38h] [rbp-320h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-308h] BYREF
  __int128 v27; // [rsp+60h] [rbp-2F8h]
  __int64 v28; // [rsp+70h] [rbp-2E8h]
  __int128 v29; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v30; // [rsp+88h] [rbp-2D0h]
  __int64 v31; // [rsp+90h] [rbp-2C8h]
  __int128 v32; // [rsp+B0h] [rbp-2A8h]
  __int128 v33; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-288h]
  _OWORD v35[3]; // [rsp+D8h] [rbp-280h] BYREF
  __int64 v36; // [rsp+108h] [rbp-250h]
  unsigned __int8 v37[512]; // [rsp+110h] [rbp-248h] BYREF

  memset(v35, 0, sizeof(v35));
  v36 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v7 = PtiCurrentShared((__int64)a1);
  v8 = v7;
  if ( a1 )
    v9 = a1[5] - *((_QWORD *)v7 + 59);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v37, 1, 0x200uLL);
  v12 = result;
  RegionSize[0] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v11);
    v29 = 0LL;
    v30 = 0LL;
    if ( v12 != (unsigned __int8 *)v35 && v12 != v37 )
      PushW32ThreadLock((__int64)v12, &v29, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_22;
    *((_DWORD *)v12 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, a3, (void **)v12 + 6) < 0 )
      goto LABEL_22;
    ThreadLock(a1, &v33);
    v13 = *((_QWORD *)v8 + 60);
    v32 = *(_OWORD *)(v13 + 64);
    v27 = v32;
    v28 = *(_QWORD *)(v13 + 80);
    *(_QWORD *)(v13 + 72) = v9;
    v14 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 60) + 64LL) = v14;
    v15 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 60) + 80LL) = v15;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v23);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v16 = KeUserModeCallback(1LL, v12, *(unsigned int *)v12, &v26, &v24);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v23);
    ThreadUnlock1(v18, v17, v19);
    v20 = *((_QWORD *)v8 + 60);
    *(_OWORD *)(v20 + 64) = v32;
    *(_QWORD *)(v20 + 80) = v28;
    if ( v16 < 0 )
      goto LABEL_22;
    if ( v24 == 24 )
    {
      v21 = (__int64 *)v26;
      if ( v26 + 8 < v26 || v26 + 8 > MmUserProbeAddress )
        v21 = (__int64 *)MmUserProbeAddress;
      v22 = *v21;
      v31 = *v21;
    }
    else
    {
LABEL_22:
      v22 = 0LL;
    }
    if ( v12 != (unsigned __int8 *)v35 && v12 != v37 )
    {
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
    }
    return (unsigned __int8 *)v22;
  }
  return result;
}
