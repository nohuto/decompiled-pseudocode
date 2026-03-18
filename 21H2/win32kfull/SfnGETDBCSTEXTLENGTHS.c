/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C00D5120
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00D57F4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rdx
  int v22; // r12d
  BOOL v24; // edx
  unsigned int v25; // edi
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int v29; // r12d
  unsigned __int8 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rdx
  ULONG64 v40; // rcx
  __int64 v41; // xmm0_8
  __int64 v42; // rax
  __int64 v43; // rsi
  char v45; // [rsp+30h] [rbp-428h] BYREF
  _BYTE v46[7]; // [rsp+31h] [rbp-427h] BYREF
  __int64 v47; // [rsp+38h] [rbp-420h]
  unsigned __int8 *v48; // [rsp+40h] [rbp-418h]
  int v49; // [rsp+48h] [rbp-410h] BYREF
  int v50; // [rsp+4Ch] [rbp-40Ch] BYREF
  int v51; // [rsp+50h] [rbp-408h]
  int v52; // [rsp+54h] [rbp-404h]
  __int64 v53; // [rsp+58h] [rbp-400h]
  unsigned int v54; // [rsp+60h] [rbp-3F8h]
  unsigned __int64 v55; // [rsp+88h] [rbp-3D0h] BYREF
  __int64 v56; // [rsp+90h] [rbp-3C8h]
  unsigned __int64 v57[3]; // [rsp+98h] [rbp-3C0h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-3A8h]
  __int64 v59; // [rsp+B8h] [rbp-3A0h]
  __int64 v60; // [rsp+C0h] [rbp-398h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-390h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-388h]
  __int128 v63; // [rsp+E0h] [rbp-378h]
  __int64 v64; // [rsp+F0h] [rbp-368h]
  __int128 v65; // [rsp+F8h] [rbp-360h]
  __int64 v66; // [rsp+108h] [rbp-350h]
  __int64 v67; // [rsp+110h] [rbp-348h] BYREF
  int v68; // [rsp+118h] [rbp-340h]
  int v69; // [rsp+11Ch] [rbp-33Ch]
  __int64 v70; // [rsp+120h] [rbp-338h]
  __int64 v71; // [rsp+128h] [rbp-330h]
  __int64 v72; // [rsp+130h] [rbp-328h]
  __int128 v73; // [rsp+138h] [rbp-320h] BYREF
  __int64 v74; // [rsp+148h] [rbp-310h]
  __int128 v75; // [rsp+188h] [rbp-2D0h] BYREF
  __int64 v76; // [rsp+198h] [rbp-2C0h]
  __int128 v77; // [rsp+1A0h] [rbp-2B8h] BYREF
  __int64 v78; // [rsp+1B0h] [rbp-2A8h]
  __int128 v79; // [rsp+1B8h] [rbp-2A0h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp-290h]
  unsigned __int8 v81[96]; // [rsp+1D0h] [rbp-288h] BYREF
  unsigned __int8 v82[512]; // [rsp+230h] [rbp-228h] BYREF

  v48 = a4;
  v58 = a3;
  v52 = (_DWORD)a4 != 0;
  v51 = a7 & 1;
  v57[0] = 0LL;
  v49 = 0;
  v47 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  if ( !a1 )
    return 0LL;
  v53 = *(_QWORD *)(a1[5] + 120LL);
  v69 = 0;
  v67 = v13;
  v68 = a2;
  v70 = a3;
  v59 = a5;
  v71 = a5;
  v60 = a6;
  v72 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v75);
  v14 = *(_QWORD *)(v12 + 480);
  v62 = *(_OWORD *)(v14 + 64);
  v63 = v62;
  v64 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v13;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(6LL);
  v15 = KeUserModeCallback(6LL, &v67, 40LL, v57, &v49);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ThreadUnlock1(v17, v16, v18);
  v19 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v19 + 64) = v62;
  *(_QWORD *)(v19 + 80) = v64;
  if ( v15 < 0 || v49 != 24 )
    return 0LL;
  v20 = (__int64 *)v57[0];
  if ( v57[0] + 8 < v57[0] || v57[0] + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  v21 = *v20;
  v47 = *v20;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 )
    return v47;
  if ( (a7 & 2) != 0 )
    return v47;
  if ( (int)v21 <= 0 )
    return v47;
  v22 = v51;
  if ( v52 == v51 )
    return v47;
  if ( *(_QWORD *)(a1[5] + 120LL) != v53 )
    return 2 * v21;
  v24 = 0;
  if ( a2 != 14 )
  {
    if ( HMValidateHandleNoSecure(*a1, 1) )
    {
      if ( a2 == 394 )
      {
        v24 = (*(_DWORD *)(a1[5] + 28LL) & 0x40) == 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0;
        goto LABEL_56;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x200) == 0 )
        {
          v24 = 1;
LABEL_57:
          v47 = 8LL;
          goto LABEL_18;
        }
        v24 = 0;
LABEL_56:
        if ( !v24 )
          goto LABEL_19;
        goto LABEL_57;
      }
    }
    return 0LL;
  }
LABEL_18:
  if ( v24 )
    return v47;
LABEL_19:
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x4000000) != 0 )
  {
    if ( (_DWORD)v48 )
      return 2 * v47;
    return v47;
  }
  v25 = v47 + 1;
  v54 = v47 + 1;
  memset(v81, 0, sizeof(v81));
  v55 = 0LL;
  v50 = 0;
  v56 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v53 = a1[5] - *(_QWORD *)(v26 + 472);
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_DWORD *)(v27 + 488) |= 0x4000000u;
  v28 = 2 * v25;
  if ( v22 )
    v28 = v25;
  v29 = v28;
  v30 = AllocCallbackMessage(96, 1u, v28, v82, 0, 0x200uLL);
  v48 = v30;
  if ( !v30 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v73 = 0LL;
  v74 = 0LL;
  if ( v30 != v81 && v30 != v82 )
    PushW32ThreadLock((__int64)v30, &v73, (__int64)Win32FreePool);
  *((_QWORD *)v30 + 5) = v53;
  *((_DWORD *)v30 + 12) = a2 - 1;
  v31 = v54;
  if ( a2 != 14 )
    v31 = v58;
  *((_QWORD *)v30 + 7) = v31;
  *((_QWORD *)v30 + 8) = v59;
  *((_QWORD *)v30 + 9) = v60;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v30, v29, (void **)v30 + 10) < 0 )
    goto LABEL_46;
  *((_DWORD *)v30 + 22) = v29;
  ThreadLock((__int64)a1, (__int64 *)&v77);
  v32 = *(_QWORD *)(v26 + 480);
  v62 = *(_OWORD *)(v32 + 64);
  v65 = v62;
  v66 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v53;
  *(_QWORD *)(*(_QWORD *)(v26 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v26 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v46);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v30 + 2) = 0LL;
  v33 = KeUserModeCallback(35LL, v30, *(unsigned int *)v30, &v55, &v50);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v46);
  ThreadUnlock1(v35, v34, v36);
  v37 = *(_QWORD *)(v26 + 480);
  *(_OWORD *)(v37 + 64) = v62;
  *(_QWORD *)(v37 + 80) = v66;
  if ( v33 < 0 )
    goto LABEL_46;
  if ( v50 == 24 )
  {
    v38 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
      v38 = (__int64 *)MmUserProbeAddress;
    v39 = *v38;
    v56 = *v38;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v39 > 0 )
    {
      v40 = v55;
      if ( v55 + 24 < v55 || v55 + 24 > MmUserProbeAddress )
        v40 = MmUserProbeAddress;
      v41 = *(_QWORD *)(v40 + 16);
      v79 = *(_OWORD *)v40;
      v80 = v41;
      v56 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v79, v39, v52, v51);
    }
    v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_DWORD *)(v42 + 488) &= ~0x4000000u;
    v43 = v56;
  }
  else
  {
LABEL_46:
    v43 = 0LL;
  }
  if ( v30 != v81 && v30 != v82 )
  {
    if ( *((_QWORD *)v30 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v30 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v73);
  }
  return v43;
}
