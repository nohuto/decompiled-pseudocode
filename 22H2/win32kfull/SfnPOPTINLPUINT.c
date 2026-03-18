/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C020E680
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r15
  __int64 v16; // r14
  unsigned int v17; // edx
  unsigned __int64 v18; // rsi
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  char v39[8]; // [rsp+30h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-350h] BYREF
  int v41; // [rsp+40h] [rbp-348h] BYREF
  int v42; // [rsp+44h] [rbp-344h]
  unsigned __int64 v43; // [rsp+58h] [rbp-330h] BYREF
  __int128 v44; // [rsp+68h] [rbp-320h]
  __int64 v45; // [rsp+78h] [rbp-310h]
  __int128 v46; // [rsp+80h] [rbp-308h] BYREF
  __int64 v47; // [rsp+90h] [rbp-2F8h]
  __int64 v48; // [rsp+98h] [rbp-2F0h]
  __int128 v49; // [rsp+B8h] [rbp-2D0h]
  __int128 v50; // [rsp+C8h] [rbp-2C0h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-2B0h]
  int v52; // [rsp+E0h] [rbp-2A8h] BYREF
  char v53[92]; // [rsp+E4h] [rbp-2A4h] BYREF
  unsigned __int8 v54[512]; // [rsp+140h] [rbp-248h] BYREF

  v42 = a2;
  memset_0(&v52, 0, 0x58uLL);
  v9 = &v52;
  v43 = 0LL;
  v41 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v14 = PtiCurrentShared(v11, v10, v12, v13);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 59);
  else
    v16 = 0LL;
  if ( a4 )
  {
    v17 = 1;
    v18 = 4LL * (unsigned int)a3;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  else
  {
    LODWORD(v18) = 0;
    v17 = 0;
  }
  if ( v17 )
  {
    result = AllocCallbackMessage(88, v17, (unsigned int)v18, v54, 1, 0x200uLL);
    v9 = (int *)result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v52;
    RegionSize = (ULONG_PTR)&v52;
    memset_0(v53, 0, 0x54uLL);
    v52 = 88;
  }
  PtiCurrentShared(v21, v20, v22, v23);
  v46 = 0LL;
  v47 = 0LL;
  if ( v9 != &v52 && v9 != (int *)v54 )
    PushW32ThreadLock((__int64)v9, &v46, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v16;
  v9[12] = v42;
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v18, (void **)v9 + 8) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  ThreadLock(a1, &v50);
  v27 = *((_QWORD *)v15 + 60);
  v49 = *(_OWORD *)(v27 + 64);
  v44 = v49;
  v45 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(v27 + 72) = v16;
  if ( a1 )
    v28 = *a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 60) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(a1[5] + 224);
  else
    v29 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 60) + 80LL) = v29;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v39,
    v24,
    v25,
    v26);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v30 = KeUserModeCallback(36LL, v9, (unsigned int)*v9, &v43, &v41);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v39, v31, v32);
  ThreadUnlock1(v34, v33, v35);
  v36 = *((_QWORD *)v15 + 60);
  *(_OWORD *)(v36 + 64) = v49;
  *(_QWORD *)(v36 + 80) = v45;
  if ( v30 >= 0 && v41 == 24 )
  {
    v37 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v37 = (__int64 *)MmUserProbeAddress;
    v38 = *v37;
    v48 = *v37;
    goto LABEL_32;
  }
LABEL_31:
  v38 = 0LL;
LABEL_32:
  if ( v9 != &v52 && v9 != (int *)v54 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46);
  }
  return (unsigned __int8 *)v38;
}
