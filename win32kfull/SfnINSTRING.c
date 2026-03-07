unsigned __int8 *__fastcall SfnINSTRING(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int *v9; // rbx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r13
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned __int64 v15; // rcx
  unsigned __int8 *result; // rax
  __int64 v17; // rcx
  void **v18; // r9
  unsigned int v19; // r8d
  CHAR *v20; // rdx
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rdi
  _BYTE v34[4]; // [rsp+30h] [rbp-348h] BYREF
  int v35; // [rsp+34h] [rbp-344h] BYREF
  int *v36; // [rsp+38h] [rbp-340h]
  int v37; // [rsp+40h] [rbp-338h]
  unsigned __int64 v38; // [rsp+58h] [rbp-320h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+60h] [rbp-318h] BYREF
  __int128 v40; // [rsp+78h] [rbp-300h]
  __int64 v41; // [rsp+88h] [rbp-2F0h]
  __int128 v42; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-2D8h]
  __int64 v44; // [rsp+A8h] [rbp-2D0h]
  __int128 v45; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-2A0h]
  int v47; // [rsp+E0h] [rbp-298h] BYREF
  char v48[92]; // [rsp+E4h] [rbp-294h] BYREF
  unsigned __int8 v49[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v37 = a2;
  memset_0(&v47, 0, 0x58uLL);
  v9 = &v47;
  v38 = 0LL;
  v35 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v11 = PtiCurrentShared(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v15) = 0;
    v14 = 0;
  }
  else
  {
    v14 = 1;
    v15 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v15 < *a4 )
      goto LABEL_47;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v15 *= 2LL;
      if ( v15 > 0xFFFFFFFF )
        goto LABEL_47;
    }
  }
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v15, v49, 1, 0x200uLL);
    v9 = (int *)result;
    v36 = (int *)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v47;
    v36 = &v47;
    memset_0(v48, 0, 0x54uLL);
    v47 = 88;
  }
  PtiCurrentShared(v17);
  v42 = 0LL;
  v43 = 0LL;
  if ( v9 != &v47 && v9 != (int *)v49 )
    PushW32ThreadLock((__int64)v9, &v42, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v13;
  v9[12] = v37;
  *((_QWORD *)v9 + 7) = RegionSize[0];
  if ( v14 )
  {
    v18 = (void **)(v9 + 20);
    v19 = *a4;
    v20 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v21 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v20, 2 * v19 + 2, v18);
LABEL_29:
        if ( v21 < 0 )
          goto LABEL_47;
        goto LABEL_35;
      }
      v22 = v19 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v21 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v20, (v19 >> 1) + 1, v18);
        goto LABEL_29;
      }
      v22 = v19 + 2;
    }
    v21 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v20, v22, v18);
    goto LABEL_29;
  }
  if ( a4 )
    v23 = *((_QWORD *)a4 + 1);
  else
    v23 = 0LL;
  *((_QWORD *)v9 + 10) = v23;
LABEL_35:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  ThreadLock(a1, &v45);
  v24 = *((_QWORD *)v12 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v24 + 64);
  v40 = *(_OWORD *)RegionSize;
  v41 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v13;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224);
  else
    v26 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v26;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v27 = KeUserModeCallback(26LL, v9, (unsigned int)*v9, &v38, &v35);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  ThreadUnlock1(v29, v28, v30);
  v31 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v31 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v31 + 80) = v41;
  if ( v27 >= 0 && v35 == 24 )
  {
    v32 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v44 = *v32;
    goto LABEL_48;
  }
LABEL_47:
  v33 = 0LL;
LABEL_48:
  if ( v9 != &v47 && v9 != (int *)v49 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v42);
  }
  return (unsigned __int8 *)v33;
}
