/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C020BF00
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
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     _WindowFromDC @ 0x1C01BF0E8 (_WindowFromDC.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(_QWORD *a1, int a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int8 *result; // rax
  __int64 v18; // rcx
  const struct tagWND *v19; // rax
  HDC DC; // r12
  __int64 v21; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v23; // rax
  __int128 v24; // xmm6
  __int64 v25; // xmm7_8
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  _BYTE v35[4]; // [rsp+30h] [rbp-388h] BYREF
  int v36; // [rsp+34h] [rbp-384h] BYREF
  int v37; // [rsp+38h] [rbp-380h]
  unsigned int v38; // [rsp+3Ch] [rbp-37Ch]
  unsigned __int8 *v39; // [rsp+50h] [rbp-368h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-360h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-358h] BYREF
  __int128 v42; // [rsp+70h] [rbp-348h]
  __int64 v43; // [rsp+80h] [rbp-338h]
  __int128 v44; // [rsp+88h] [rbp-330h] BYREF
  __int64 v45; // [rsp+98h] [rbp-320h]
  __int64 v46; // [rsp+A0h] [rbp-318h]
  __int128 v47; // [rsp+C0h] [rbp-2F8h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-2E8h]
  unsigned __int8 v49[112]; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int8 v50[512]; // [rsp+150h] [rbp-268h] BYREF

  memset_0(v49, 0, 0x68uLL);
  v10 = v49;
  v41 = 0LL;
  v36 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v12 = PtiCurrentShared(v11);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 16);
  v16 = v15 + 2;
  if ( (unsigned int)v16 < v15 )
    goto LABEL_24;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_24;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v16, v50, 1, 0x200uLL);
  v10 = result;
  v39 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v18);
  v44 = 0LL;
  v45 = 0LL;
  if ( v10 != v49 && v10 != v50 )
    PushW32ThreadLock((__int64)v10, &v44, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_24;
  v19 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v19);
  v38 = GreSetTextColor((__int64)DC, *(unsigned int *)(gpsi + 4640LL));
  v37 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
  DPIServerInfo = GetDPIServerInfo(v21);
  RegionSize = GreSelectFontInternal((__int64)DC, *(_QWORD *)(DPIServerInfo + 8), 1);
  *((_QWORD *)v10 + 5) = v14;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock(a1, &v47);
  v23 = *((_QWORD *)v13 + 60);
  v24 = *(_OWORD *)(v23 + 64);
  v42 = v24;
  v25 = *(_QWORD *)(v23 + 80);
  v43 = v25;
  *(_QWORD *)(v23 + 72) = v14;
  v26 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v26;
  v27 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v27;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v28 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v41, &v36);
  EtwTraceEndCallback(97LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  ThreadUnlock1(v30, v29, v31);
  v32 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v32 + 64) = v24;
  *(_QWORD *)(v32 + 80) = v25;
  GreSelectFontInternal((__int64)DC, RegionSize, 1);
  GreSetBkColor(DC, v37);
  GreSetTextColor((__int64)DC, v38);
  _ReleaseDC(DC);
  if ( v28 < 0 )
    goto LABEL_24;
  if ( v36 == 24 )
  {
    v33 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v33 = (__int64 *)MmUserProbeAddress;
    v34 = *v33;
    v46 = *v33;
  }
  else
  {
LABEL_24:
    v34 = 0LL;
  }
  if ( v10 != v49 && v10 != v50 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
  }
  return (unsigned __int8 *)v34;
}
