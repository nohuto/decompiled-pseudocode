unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  unsigned __int8 *result; // rax
  __int64 v18; // rcx
  void *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rsi
  ULONG64 v30; // rcx
  _BYTE v31[4]; // [rsp+30h] [rbp-398h] BYREF
  int v32; // [rsp+34h] [rbp-394h] BYREF
  unsigned __int8 *v33; // [rsp+38h] [rbp-390h]
  unsigned __int64 v34; // [rsp+58h] [rbp-370h] BYREF
  SIZE_T Length; // [rsp+60h] [rbp-368h] BYREF
  void *v36[2]; // [rsp+68h] [rbp-360h]
  volatile void *Address; // [rsp+78h] [rbp-350h]
  __int128 v38; // [rsp+90h] [rbp-338h]
  __int64 v39; // [rsp+A0h] [rbp-328h]
  __int128 v40; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-310h]
  __int64 v42; // [rsp+C0h] [rbp-308h]
  __int128 v43; // [rsp+E8h] [rbp-2E0h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-2D0h]
  __int128 v45; // [rsp+100h] [rbp-2C8h]
  volatile void *v46; // [rsp+110h] [rbp-2B8h]
  unsigned __int8 v47[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v48[512]; // [rsp+180h] [rbp-248h] BYREF

  v36[0] = a4;
  memset_0(v47, 0, sizeof(v47));
  v11 = v47;
  v34 = 0LL;
  v32 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v13 = PtiCurrentShared(v12);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 59);
  else
    v15 = 0LL;
  v16 = 4LL * (unsigned int)a3;
  if ( v16 > 0xFFFFFFFF )
    goto LABEL_33;
  Length = (unsigned int)v16;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v16, v48, 0, 0x200uLL);
  v11 = result;
  v33 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v18);
  v40 = 0LL;
  v41 = 0LL;
  if ( v11 != v47 && v11 != v48 )
    PushW32ThreadLock((__int64)v11, &v40, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v15;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v16;
    v19 = v36[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v36[0], v16, (void **)v11 + 10) < 0 )
      goto LABEL_33;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v16, (void **)v11 + 10) < 0 )
      goto LABEL_33;
    *((_DWORD *)v11 + 22) = v16;
    v19 = v36[0];
  }
  ThreadLock(a1, &v43);
  v20 = *((_QWORD *)v14 + 60);
  *(_OWORD *)v36 = *(_OWORD *)(v20 + 64);
  v38 = *(_OWORD *)v36;
  v39 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v15;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 80LL) = v22;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v23 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v34, &v32);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  ThreadUnlock1(v25, v24, v26);
  v27 = *((_QWORD *)v14 + 60);
  *(_OWORD *)(v27 + 64) = *(_OWORD *)v36;
  *(_QWORD *)(v27 + 80) = v39;
  if ( v23 >= 0 && v32 == 24 )
  {
    v28 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v42 = *v28;
    if ( (_DWORD)v16 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v30 = v34;
      if ( v34 + 24 < v34 || v34 + 24 > MmUserProbeAddress )
        v30 = MmUserProbeAddress;
      *(_OWORD *)v36 = *(_OWORD *)v30;
      Address = *(volatile void **)(v30 + 16);
      v45 = *(_OWORD *)v36;
      v46 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v19, (const void *)Address, Length);
    }
    goto LABEL_34;
  }
LABEL_33:
  v29 = 0LL;
LABEL_34:
  if ( v11 != v47 && v11 != v48 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v40);
  }
  return (unsigned __int8 *)v29;
}
