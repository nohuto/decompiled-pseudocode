/*
 * XREFs of SfnOUTSTRING @ 0x1C00EAB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0109220 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0109294 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0109318 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
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
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  ULONG64 v13; // rcx
  struct tagTHREADINFO *v14; // r12
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG_PTR *v28; // rsi
  ULONG_PTR v29; // rsi
  _BYTE *v30; // rax
  struct tagTHREADINFO *v32; // rax
  struct tagTHREADINFO *v33; // rax
  ULONG64 v34; // rcx
  __int64 v35; // xmm0_8
  struct tagTHREADINFO *v36; // rax
  _BYTE v37[4]; // [rsp+30h] [rbp-378h] BYREF
  int v38; // [rsp+34h] [rbp-374h]
  int v39; // [rsp+38h] [rbp-370h] BYREF
  int v40; // [rsp+3Ch] [rbp-36Ch]
  unsigned int v41[2]; // [rsp+40h] [rbp-368h]
  unsigned __int8 *v42; // [rsp+48h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-358h] BYREF
  int v44; // [rsp+58h] [rbp-350h]
  unsigned __int64 v45; // [rsp+70h] [rbp-338h] BYREF
  __int128 v46; // [rsp+78h] [rbp-330h] BYREF
  __int64 v47; // [rsp+88h] [rbp-320h]
  __int128 v48; // [rsp+98h] [rbp-310h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-300h]
  __int128 v50; // [rsp+D8h] [rbp-2D0h]
  __int128 v51; // [rsp+E8h] [rbp-2C0h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-2B0h]
  unsigned __int8 v53[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v54[512]; // [rsp+160h] [rbp-248h] BYREF

  *(_QWORD *)v41 = a3;
  v44 = a2;
  v38 = a7 & 1;
  v40 = 0;
  memset_0(v53, 0, sizeof(v53));
  v10 = v53;
  v45 = 0LL;
  v39 = 0;
  RegionSize = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v12 = PtiCurrentShared(v11);
  v14 = v12;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 < v16
    || (*((_DWORD *)PtiCurrentShared(v13) + 122) & 0x8000000) == 0
    && *(int *)(a4 + 4) < 0
    && !v38
    && (v17 *= 2LL, v17 > 0xFFFFFFFF) )
  {
LABEL_40:
    v29 = 0LL;
    goto LABEL_31;
  }
  v10 = AllocCallbackMessage(96, 1u, (unsigned int)v17, v54, 0, 0x200uLL);
  v42 = v10;
  if ( !v10 )
    return 0LL;
  PtiCurrentShared(v18);
  v48 = 0LL;
  v49 = 0LL;
  if ( v10 != v53 && v10 != v54 )
    PushW32ThreadLock((__int64)v10, &v48, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v15;
  *((_DWORD *)v10 + 12) = v44;
  if ( v38 )
  {
    if ( *(int *)(a4 + 4) < 0 )
      goto LABEL_12;
    *((_QWORD *)v10 + 7) = 2LL * *(_QWORD *)v41;
    v32 = PtiCurrentShared(v19);
    *((_DWORD *)v32 + 122) |= 0x8000000u;
    v40 = 1;
  }
  else
  {
    if ( (*((_DWORD *)PtiCurrentShared(v19) + 122) & 0x8000000) == 0 )
    {
LABEL_12:
      *((_QWORD *)v10 + 7) = *(_QWORD *)v41;
      goto LABEL_13;
    }
    *((_QWORD *)v10 + 7) = *(_QWORD *)v41 >> 1;
    v33 = PtiCurrentShared(v20);
    *((_DWORD *)v33 + 122) &= ~0x8000000u;
  }
LABEL_13:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v10, v17, (void **)v10 + 10) < 0 )
    goto LABEL_40;
  *((_DWORD *)v10 + 22) = v17;
  ThreadLock(a1, &v51);
  v21 = *((_QWORD *)v14 + 60);
  v50 = *(_OWORD *)(v21 + 64);
  v46 = v50;
  v47 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v15;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 64LL) = v22;
  v23 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v37);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v24 = KeUserModeCallback(35LL, v10, *(unsigned int *)v10, &v45, &v39);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v37);
  ThreadUnlock1(v26, v25, v27);
  v13 = *((_QWORD *)v14 + 60);
  *(_OWORD *)(v13 + 64) = v50;
  *(_QWORD *)(v13 + 80) = v47;
  if ( v24 < 0 || v39 != 24 )
    goto LABEL_40;
  v28 = (ULONG_PTR *)v45;
  v13 = v45 + 8;
  if ( v45 + 8 < v45 || v13 > MmUserProbeAddress )
    v28 = (ULONG_PTR *)MmUserProbeAddress;
  v29 = *v28;
  RegionSize = v29;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_31;
  if ( !v29 )
  {
    if ( *(_QWORD *)v41 )
    {
      v30 = *(_BYTE **)(a4 + 8);
      if ( *(int *)(a4 + 4) < 0 )
        *v30 = 0;
      else
        *(_WORD *)v30 = 0;
    }
    goto LABEL_31;
  }
  v34 = v45;
  if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
    v34 = MmUserProbeAddress;
  v35 = *(_QWORD *)(v34 + 16);
  v46 = *(_OWORD *)v34;
  v47 = v35;
  v13 = *((_QWORD *)PtiCurrentShared(v34) + 64);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 84) & 1) != 0 && *(_QWORD *)(v13 + 96) == a4 )
      goto LABEL_40;
  }
  v29 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v46, v29, *(_DWORD *)(a4 + 4) >> 31, v38);
  RegionSize = v29;
  CopyOutputString((struct _CALLBACKSTATUS *)&v46, (struct _LARGE_STRING *)a4, v41[0], v38);
LABEL_31:
  if ( v10 != v53 && v10 != v54 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v48);
  }
  if ( v40 )
  {
    v36 = PtiCurrentShared(v13);
    *((_DWORD *)v36 + 122) &= ~0x8000000u;
  }
  return v29;
}
