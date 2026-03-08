/*
 * XREFs of SfnINLPHELPINFOSTRUCT @ 0x1C020B760
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPHELPINFOSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  unsigned __int8 *result; // rax
  __int64 v15; // rcx
  unsigned __int8 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  _BYTE v27[4]; // [rsp+30h] [rbp-348h] BYREF
  int v28; // [rsp+34h] [rbp-344h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+38h] [rbp-340h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-328h] BYREF
  __int128 v31; // [rsp+60h] [rbp-318h]
  __int64 v32; // [rsp+70h] [rbp-308h]
  __int128 v33; // [rsp+78h] [rbp-300h] BYREF
  __int64 v34; // [rsp+88h] [rbp-2F0h]
  __int64 v35; // [rsp+90h] [rbp-2E8h]
  __int128 v36; // [rsp+B0h] [rbp-2C8h]
  __int128 v37; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v39[96]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v40[512]; // [rsp+140h] [rbp-238h] BYREF

  memset_0(v39, 0, 0x58uLL);
  v30 = 0LL;
  v28 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v11 = PtiCurrentShared(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v40, 1, 0x200uLL);
  v16 = result;
  RegionSize[0] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v15);
    v33 = 0LL;
    v34 = 0LL;
    if ( v16 != v39 && v16 != v40 )
      PushW32ThreadLock((__int64)v16, &v33, (__int64)Win32FreePool);
    *((_QWORD *)v16 + 5) = v13;
    *((_DWORD *)v16 + 12) = a2;
    *((_QWORD *)v16 + 7) = a3;
    *((_DWORD *)a4 + 3) = 0;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v16, a4, *(_DWORD *)a4, (void **)v16 + 8) < 0 )
      goto LABEL_21;
    *((_QWORD *)v16 + 9) = a5;
    *((_QWORD *)v16 + 10) = a6;
    ThreadLock(a1, &v37);
    v17 = *((_QWORD *)v12 + 60);
    v36 = *(_OWORD *)(v17 + 64);
    v31 = v36;
    v32 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(v17 + 72) = v13;
    v18 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v18;
    v19 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v19;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
    EtwTraceBeginCallback(13LL);
    *((_QWORD *)v16 + 2) = 0LL;
    v20 = KeUserModeCallback(13LL, v16, *(unsigned int *)v16, &v30, &v28);
    EtwTraceEndCallback(13LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
    ThreadUnlock1(v22, v21, v23);
    v24 = *((_QWORD *)v12 + 60);
    *(_OWORD *)(v24 + 64) = v36;
    *(_QWORD *)(v24 + 80) = v32;
    if ( v20 < 0 )
      goto LABEL_21;
    if ( v28 == 24 )
    {
      v25 = (__int64 *)v30;
      if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
        v25 = (__int64 *)MmUserProbeAddress;
      v26 = *v25;
      v35 = *v25;
    }
    else
    {
LABEL_21:
      v26 = 0LL;
    }
    if ( v16 != v39 && v16 != v40 )
    {
      if ( *((_QWORD *)v16 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v33);
    }
    return (unsigned __int8 *)v26;
  }
  return result;
}
