/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C0212FB8
 * Callers:
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00F410C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0207CB4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

unsigned __int8 *__fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 *ThreadDesktopWindow; // r13
  int *v10; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  unsigned int v17; // eax
  unsigned __int8 *result; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r15
  _OWORD *v21; // rax
  CHAR *v22; // rdx
  void **v23; // r9
  struct _CAPTUREBUF *v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  int v27; // eax
  CHAR *v28; // rax
  int v29; // r8d
  void **v30; // r9
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  int v33; // eax
  unsigned int v34; // r8d
  ULONG_PTR v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rcx
  ULONG64 v47; // rcx
  __int128 v48; // xmm4
  __int128 v49; // xmm5
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  _BYTE v52[4]; // [rsp+30h] [rbp-4D8h] BYREF
  int v53; // [rsp+34h] [rbp-4D4h] BYREF
  int *v54; // [rsp+38h] [rbp-4D0h]
  CHAR v55; // [rsp+40h] [rbp-4C8h]
  int v56; // [rsp+44h] [rbp-4C4h] BYREF
  __int16 v57; // [rsp+48h] [rbp-4C0h]
  __int64 v58; // [rsp+78h] [rbp-490h]
  unsigned __int64 v59; // [rsp+80h] [rbp-488h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+88h] [rbp-480h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-460h]
  _QWORD *v62; // [rsp+B0h] [rbp-458h]
  __int64 v63; // [rsp+B8h] [rbp-450h]
  __int128 v64; // [rsp+C8h] [rbp-440h]
  __int64 v65; // [rsp+D8h] [rbp-430h]
  __int128 v66; // [rsp+E0h] [rbp-428h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-418h]
  __int64 v68; // [rsp+110h] [rbp-3F8h]
  __int128 v69; // [rsp+138h] [rbp-3D0h] BYREF
  __int64 v70; // [rsp+148h] [rbp-3C0h]
  _OWORD v71[5]; // [rsp+150h] [rbp-3B8h] BYREF
  __int64 v72; // [rsp+1A0h] [rbp-368h]
  __int128 v73; // [rsp+1D0h] [rbp-338h]
  __int64 v74; // [rsp+200h] [rbp-308h]
  int v75; // [rsp+210h] [rbp-2F8h] BYREF
  char v76[172]; // [rsp+214h] [rbp-2F4h] BYREF
  unsigned __int8 v77[512]; // [rsp+2C0h] [rbp-248h] BYREF

  v63 = a4;
  v62 = a3;
  v61 = a2;
  v53 = a1;
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  memset_0(v71, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
  memset_0(&v75, 0, 0xA8uLL);
  v10 = &v75;
  v59 = 0LL;
  v56 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v12 = PtiCurrentShared(v11);
  RegionSize[0] = (ULONG_PTR)v12;
  if ( ThreadDesktopWindow )
    v58 = ThreadDesktopWindow[5] - *((_QWORD *)v12 + 59);
  else
    v58 = 0LL;
  v13 = *a3;
  v14 = *(_QWORD *)(v13 + 56);
  if ( v14 && (*(_DWORD *)(v13 + 84) >> 31 != a5 || v14 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v15 = *(_DWORD *)(v13 + 80);
    v6 = v15 + 2;
    if ( (unsigned int)v6 < v15 )
      goto LABEL_76;
    if ( *(int *)(v13 + 84) < 0 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    v8 = 1;
  }
  v16 = *(_QWORD *)(v13 + 64);
  if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v13 + 100) >> 31 != a5 || v16 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v17 = *(_DWORD *)(v13 + 96);
    v7 = v17 + 2;
    if ( (unsigned int)v7 < v17 )
      goto LABEL_76;
    if ( *(int *)(v13 + 100) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    ++v8;
  }
  if ( (int)v7 + (int)v6 >= (unsigned int)v6 )
  {
    if ( v8 )
    {
      result = AllocCallbackMessage(168, v8, (unsigned int)(v7 + v6), v77, 1, 0x200uLL);
      v10 = (int *)result;
      v54 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v10 = &v75;
      v54 = &v75;
      memset_0(v76, 0, 0xA4uLL);
      v75 = 168;
    }
    PtiCurrentShared(v19);
    v66 = 0LL;
    v67 = 0LL;
    if ( v10 != &v75 && v10 != (int *)v77 )
      PushW32ThreadLock((__int64)v10, &v66, (__int64)Win32FreePool);
    *((_QWORD *)v10 + 5) = v58;
    v10[12] = v53;
    *((_QWORD *)v10 + 7) = v61;
    v20 = v62;
    *(_DWORD *)(*v62 + 52LL) = 0;
    *(_DWORD *)(*v20 + 76LL) = 0;
    v21 = (_OWORD *)*v20;
    *((_OWORD *)v10 + 4) = *(_OWORD *)*v20;
    *((_OWORD *)v10 + 5) = v21[1];
    *((_OWORD *)v10 + 6) = v21[2];
    *((_OWORD *)v10 + 7) = v21[3];
    *((_OWORD *)v10 + 8) = v21[4];
    if ( !(_DWORD)v6 )
      goto LABEL_48;
    if ( *(int *)(v13 + 84) < 0 )
    {
      v28 = *(CHAR **)(v13 + 56);
      v55 = *v28;
      if ( v55 == -1 )
      {
        if ( a5 )
        {
          v25 = 3;
          v22 = v28;
        }
        else
        {
          v53 = 0;
          v53 = ((unsigned __int16)(*(_DWORD *)v28 >> 8) << 16) | 0xFFFF;
          v25 = 4;
          v22 = (CHAR *)&v53;
        }
        v23 = (void **)(v10 + 30);
        v24 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v23 = (void **)(v10 + 30);
        v29 = *(_DWORD *)(v13 + 80);
        v22 = *(CHAR **)(v13 + 88);
        v24 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v22, 2 * v29 + 2, v23) < 0 )
            goto LABEL_76;
          goto LABEL_48;
        }
        v25 = v29 + 1;
      }
    }
    else
    {
      v22 = *(CHAR **)(v13 + 56);
      v57 = *(_WORD *)v22;
      v23 = (void **)(v10 + 30);
      v24 = (struct _CAPTUREBUF *)v10;
      if ( v57 == -1 )
      {
        if ( a5 )
        {
          ++v22;
          v25 = 3;
        }
        else
        {
          v25 = 4;
        }
      }
      else
      {
        v26 = *(_DWORD *)(v13 + 80);
        v22 = *(CHAR **)(v13 + 88);
        if ( a5 )
        {
          v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v22, (v26 >> 1) + 1, v23);
          goto LABEL_45;
        }
        v25 = v26 + 2;
      }
    }
    v27 = CaptureCallbackData(v24, v22, v25, v23);
LABEL_45:
    if ( v27 < 0 )
      goto LABEL_76;
LABEL_48:
    if ( !(_DWORD)v7 )
    {
LABEL_58:
      *((_QWORD *)v10 + 18) = v20[1];
      *((_QWORD *)v10 + 19) = v63;
      v10[40] = a5;
      ThreadLock(ThreadDesktopWindow, &v69);
      v35 = RegionSize[0];
      v36 = *(_QWORD *)(RegionSize[0] + 480);
      *(_OWORD *)RegionSize = *(_OWORD *)(v36 + 64);
      v64 = *(_OWORD *)RegionSize;
      v65 = *(_QWORD *)(v36 + 80);
      *(_QWORD *)(v36 + 72) = v58;
      if ( ThreadDesktopWindow )
        v37 = *ThreadDesktopWindow;
      else
        v37 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v35 + 480) + 64LL) = v37;
      if ( ThreadDesktopWindow )
        v38 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
      else
        v38 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v35 + 480) + 80LL) = v38;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v52);
      EtwTraceBeginCallback(42LL);
      *((_QWORD *)v10 + 2) = 0LL;
      v39 = KeUserModeCallback(42LL, v10, (unsigned int)*v10, &v59, &v56);
      EtwTraceEndCallback(42LL);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v52);
      ThreadUnlock1(v41, v40, v42);
      v43 = *(_QWORD *)(v35 + 480);
      *(_OWORD *)(v43 + 64) = *(_OWORD *)RegionSize;
      *(_QWORD *)(v43 + 80) = v65;
      if ( v39 >= 0 && v56 == 24 )
      {
        v44 = (__int64 *)v59;
        if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
          v44 = (__int64 *)MmUserProbeAddress;
        v45 = *v44;
        v68 = *v44;
        v46 = *((_QWORD *)PtiCurrentShared((__int64)v44) + 64);
        if ( !v46 || (*(_DWORD *)(v46 + 84) & 1) == 0 || *(_OWORD **)(v46 + 96) != v71 )
        {
          v47 = *(_QWORD *)(v59 + 16);
          if ( v47 + 88 < v47 || v47 + 88 > MmUserProbeAddress )
            v47 = MmUserProbeAddress;
          v48 = *(_OWORD *)v47;
          v49 = *(_OWORD *)(v47 + 16);
          v73 = *(_OWORD *)(v47 + 32);
          v50 = *(_OWORD *)(v47 + 48);
          v51 = *(_OWORD *)(v47 + 64);
          v74 = *(_QWORD *)(v47 + 80);
          v71[0] = v48;
          v71[1] = v49;
          v71[2] = v73;
          v71[3] = v50;
          v71[4] = v51;
          v72 = v74;
          v20[1] = v74;
          *(_OWORD *)(*v20 + 32LL) = v73;
          goto LABEL_77;
        }
      }
      goto LABEL_76;
    }
    v30 = (void **)(v10 + 32);
    v31 = *(_DWORD *)(v13 + 96);
    v32 = *(CHAR **)(v13 + 104);
    if ( *(int *)(v13 + 100) < 0 )
    {
      if ( !a5 )
      {
        v33 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v32, 2 * v31 + 2, v30);
LABEL_57:
        if ( v33 < 0 )
          goto LABEL_76;
        goto LABEL_58;
      }
      v34 = v31 + 1;
    }
    else
    {
      if ( a5 )
      {
        v33 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v32, (v31 >> 1) + 1, v30);
        goto LABEL_57;
      }
      v34 = v31 + 2;
    }
    v33 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v32, v34, v30);
    goto LABEL_57;
  }
LABEL_76:
  v45 = 0LL;
LABEL_77:
  if ( v10 != &v75 && v10 != (int *)v77 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v66);
  }
  return (unsigned __int8 *)v45;
}
