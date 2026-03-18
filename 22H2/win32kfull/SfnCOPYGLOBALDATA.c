/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C0205F60
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
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
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  _BYTE v31[4]; // [rsp+30h] [rbp-328h] BYREF
  int v32; // [rsp+34h] [rbp-324h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+38h] [rbp-320h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-308h] BYREF
  __int128 v35; // [rsp+60h] [rbp-2F8h]
  __int64 v36; // [rsp+70h] [rbp-2E8h]
  __int128 v37; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v38; // [rsp+88h] [rbp-2D0h]
  __int64 v39; // [rsp+90h] [rbp-2C8h]
  __int128 v40; // [rsp+B0h] [rbp-2A8h]
  __int128 v41; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-288h]
  _OWORD v43[3]; // [rsp+D8h] [rbp-280h] BYREF
  __int64 v44; // [rsp+108h] [rbp-250h]
  unsigned __int8 v45[512]; // [rsp+110h] [rbp-248h] BYREF

  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v34 = 0LL;
  v32 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = PtiCurrentShared((__int64)a1, a2, a3, (__int64)a4);
  v8 = v7;
  if ( a1 )
    v9 = a1[5] - *((_QWORD *)v7 + 59);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v45, 1, 0x200uLL);
  v15 = result;
  RegionSize[0] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v12, v11, v13, v14);
    v37 = 0LL;
    v38 = 0LL;
    if ( v15 != (unsigned __int8 *)v43 && v15 != v45 )
      PushW32ThreadLock((__int64)v15, &v37, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_22;
    *((_DWORD *)v15 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, a3, (void **)v15 + 6) < 0 )
      goto LABEL_22;
    ThreadLock(a1, &v41);
    v19 = *((_QWORD *)v8 + 60);
    v40 = *(_OWORD *)(v19 + 64);
    v35 = v40;
    v36 = *(_QWORD *)(v19 + 80);
    *(_QWORD *)(v19 + 72) = v9;
    v20 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 60) + 64LL) = v20;
    v21 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 60) + 80LL) = v21;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
      (LeaveEnterCritProperDisposition *)v31,
      v16,
      v17,
      v18);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v22 = KeUserModeCallback(1LL, v15, *(unsigned int *)v15, &v34, &v32);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31, v23, v24);
    ThreadUnlock1(v26, v25, v27);
    v28 = *((_QWORD *)v8 + 60);
    *(_OWORD *)(v28 + 64) = v40;
    *(_QWORD *)(v28 + 80) = v36;
    if ( v22 < 0 )
      goto LABEL_22;
    if ( v32 == 24 )
    {
      v29 = (__int64 *)v34;
      if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
        v29 = (__int64 *)MmUserProbeAddress;
      v30 = *v29;
      v39 = *v29;
    }
    else
    {
LABEL_22:
      v30 = 0LL;
    }
    if ( v15 != (unsigned __int8 *)v43 && v15 != v45 )
    {
      if ( *((_QWORD *)v15 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
    }
    return (unsigned __int8 *)v30;
  }
  return result;
}
