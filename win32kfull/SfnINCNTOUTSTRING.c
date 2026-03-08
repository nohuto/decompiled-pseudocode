/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C020A090
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r12
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  unsigned __int8 *result; // rax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // rsi
  ULONG64 v31; // rcx
  __int64 v32; // xmm0_8
  __int64 v33; // rcx
  _WORD *v34; // rax
  _BYTE v35[4]; // [rsp+30h] [rbp-368h] BYREF
  int v36; // [rsp+34h] [rbp-364h]
  int v37; // [rsp+38h] [rbp-360h] BYREF
  int v38; // [rsp+3Ch] [rbp-35Ch]
  unsigned __int8 *v39; // [rsp+40h] [rbp-358h]
  unsigned __int64 v40; // [rsp+58h] [rbp-340h] BYREF
  __int64 v41; // [rsp+60h] [rbp-338h]
  ULONG_PTR RegionSize[2]; // [rsp+68h] [rbp-330h] BYREF
  __int128 v43; // [rsp+78h] [rbp-320h] BYREF
  __int64 v44; // [rsp+88h] [rbp-310h]
  __int128 v45; // [rsp+98h] [rbp-300h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-2F0h]
  __int128 v47; // [rsp+D8h] [rbp-2C0h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-2B0h]
  unsigned __int8 v49[112]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v50[512]; // [rsp+160h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v36 = a2;
  v38 = a7 & 1;
  memset_0(v49, 0, 0x68uLL);
  v10 = v49;
  v40 = 0LL;
  v37 = 0;
  v41 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v12 = PtiCurrentShared(v11);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v16 = v15 + 2;
  if ( (unsigned int)v16 < v15 )
    goto LABEL_41;
  if ( *(int *)(a4 + 4) < 0 && !v38 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_41;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v16, v50, 0, 0x200uLL);
  v10 = result;
  v39 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v18);
  v45 = 0LL;
  v46 = 0LL;
  if ( v10 != v49 && v10 != v50 )
    PushW32ThreadLock((__int64)v10, &v45, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v14;
  *((_DWORD *)v10 + 12) = v36;
  *((_QWORD *)v10 + 7) = RegionSize[0];
  v19 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v19 = *(_WORD *)(a4 + 4);
  LOWORD(v36) = v19;
  v20 = -1;
  if ( v19 != -1 )
    v20 = v19;
  *((_WORD *)v10 + 40) = v20;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v16, (void **)v10 + 11) < 0 )
    goto LABEL_41;
  *((_DWORD *)v10 + 24) = v16;
  ThreadLock(a1, &v47);
  v21 = *((_QWORD *)v13 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v21 + 64);
  v43 = *(_OWORD *)RegionSize;
  v44 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v22;
  v23 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v24 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v40, &v37);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  ThreadUnlock1(v26, v25, v27);
  v28 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v28 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v28 + 80) = v44;
  if ( v24 < 0 || v37 != 24 )
    goto LABEL_41;
  v29 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  v30 = *v29;
  v41 = v30;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_42;
  if ( !v30 )
  {
    v34 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v34 = 0;
    else
      *(_BYTE *)v34 = 0;
    goto LABEL_42;
  }
  v31 = v40;
  if ( v40 + 24 < v40 || v40 + 24 > MmUserProbeAddress )
    v31 = MmUserProbeAddress;
  v32 = *(_QWORD *)(v31 + 16);
  v43 = *(_OWORD *)v31;
  v44 = v32;
  v33 = *((_QWORD *)PtiCurrentShared(v31) + 64);
  if ( v33 && (*(_DWORD *)(v33 + 84) & 1) != 0 && *(_QWORD *)(v33 + 96) == a4 )
  {
LABEL_41:
    v30 = 0LL;
  }
  else
  {
    v30 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v43, v30, *(_DWORD *)(a4 + 4) >> 31, v38);
    v41 = v30;
    CopyOutputString((struct _CALLBACKSTATUS *)&v43, (struct _LARGE_STRING *)a4, (unsigned __int16)v36, v38);
  }
LABEL_42:
  if ( v10 != v49 && v10 != v50 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v45);
  }
  return (unsigned __int8 *)v30;
}
