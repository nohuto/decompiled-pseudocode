/*
 * XREFs of SfnOUTSTRING @ 0x1C00B2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00245D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0024648 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00246CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

ULONG_PTR __fastcall SfnOUTSTRING(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r12
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  ULONG_PTR *v24; // rsi
  ULONG_PTR v25; // rsi
  _BYTE *v26; // rax
  struct tagTHREADINFO *v28; // rax
  struct tagTHREADINFO *v29; // rax
  ULONG64 v30; // rcx
  __int64 v31; // xmm0_8
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  _BYTE v34[4]; // [rsp+30h] [rbp-378h] BYREF
  int v35; // [rsp+34h] [rbp-374h]
  int v36; // [rsp+38h] [rbp-370h] BYREF
  int v37; // [rsp+3Ch] [rbp-36Ch]
  unsigned int v38[2]; // [rsp+40h] [rbp-368h]
  unsigned __int8 *v39; // [rsp+48h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-358h] BYREF
  int v41; // [rsp+58h] [rbp-350h]
  unsigned __int64 v42; // [rsp+70h] [rbp-338h] BYREF
  __int128 v43; // [rsp+78h] [rbp-330h] BYREF
  __int64 v44; // [rsp+88h] [rbp-320h]
  __int128 v45; // [rsp+98h] [rbp-310h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-300h]
  __int128 v47; // [rsp+D8h] [rbp-2D0h]
  __int128 v48; // [rsp+E8h] [rbp-2C0h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-2B0h]
  unsigned __int8 v50[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v51[512]; // [rsp+160h] [rbp-248h] BYREF

  *(_QWORD *)v38 = a3;
  v41 = a2;
  v35 = a7 & 1;
  v37 = 0;
  memset_0(v50, 0, sizeof(v50));
  v10 = v50;
  v42 = 0LL;
  v36 = 0;
  RegionSize = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v11 = PtiCurrentShared();
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14
    || (*((_DWORD *)PtiCurrentShared() + 122) & 0x8000000) == 0
    && *(int *)(a4 + 4) < 0
    && !v35
    && (v15 *= 2LL, v15 > 0xFFFFFFFF) )
  {
LABEL_40:
    v25 = 0LL;
    goto LABEL_31;
  }
  v10 = AllocCallbackMessage(96, 1u, (unsigned int)v15, v51, 0, 0x200uLL);
  v39 = v10;
  if ( !v10 )
    return 0LL;
  PtiCurrentShared();
  v45 = 0LL;
  v46 = 0LL;
  if ( v10 != v50 && v10 != v51 )
    PushW32ThreadLock((__int64)v10, &v45, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = v41;
  if ( v35 )
  {
    if ( *(int *)(a4 + 4) < 0 )
      goto LABEL_12;
    *((_QWORD *)v10 + 7) = 2LL * *(_QWORD *)v38;
    v28 = PtiCurrentShared();
    *((_DWORD *)v28 + 122) |= 0x8000000u;
    v37 = 1;
  }
  else
  {
    if ( (*((_DWORD *)PtiCurrentShared() + 122) & 0x8000000) == 0 )
    {
LABEL_12:
      *((_QWORD *)v10 + 7) = *(_QWORD *)v38;
      goto LABEL_13;
    }
    *((_QWORD *)v10 + 7) = *(_QWORD *)v38 >> 1;
    v29 = PtiCurrentShared();
    *((_DWORD *)v29 + 122) &= ~0x8000000u;
  }
LABEL_13:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v15, (void **)v10 + 10) < 0 )
    goto LABEL_40;
  *((_DWORD *)v10 + 22) = v15;
  ThreadLock(a1, &v48);
  v16 = *((_QWORD *)v12 + 60);
  v47 = *(_OWORD *)(v16 + 64);
  v43 = v47;
  v44 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  v17 = 0LL;
  if ( a1 )
    v17 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v17;
  v18 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v19 = KeUserModeCallback(35LL, v10, *(unsigned int *)v10, &v42, &v36);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  ThreadUnlock1(v21, v20, v22);
  v23 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v23 + 64) = v47;
  *(_QWORD *)(v23 + 80) = v44;
  if ( v19 < 0 || v36 != 24 )
    goto LABEL_40;
  v24 = (ULONG_PTR *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v24 = (ULONG_PTR *)MmUserProbeAddress;
  v25 = *v24;
  RegionSize = v25;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_31;
  if ( !v25 )
  {
    if ( *(_QWORD *)v38 )
    {
      v26 = *(_BYTE **)(a4 + 8);
      if ( *(int *)(a4 + 4) < 0 )
        *v26 = 0;
      else
        *(_WORD *)v26 = 0;
    }
    goto LABEL_31;
  }
  v30 = v42;
  if ( v42 + 24 < v42 || v42 + 24 > MmUserProbeAddress )
    v30 = MmUserProbeAddress;
  v31 = *(_QWORD *)(v30 + 16);
  v43 = *(_OWORD *)v30;
  v44 = v31;
  v32 = *((_QWORD *)PtiCurrentShared() + 64);
  if ( v32 )
  {
    if ( (*(_DWORD *)(v32 + 84) & 1) != 0 && *(_QWORD *)(v32 + 96) == a4 )
      goto LABEL_40;
  }
  v25 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v43, v25, *(_DWORD *)(a4 + 4) >> 31, v35);
  RegionSize = v25;
  CopyOutputString((struct _CALLBACKSTATUS *)&v43, (struct _LARGE_STRING *)a4, v38[0], v35);
LABEL_31:
  if ( v10 != v50 && v10 != v51 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v45);
  }
  if ( v37 )
  {
    v33 = PtiCurrentShared();
    *((_DWORD *)v33 + 122) &= ~0x8000000u;
  }
  return v25;
}
