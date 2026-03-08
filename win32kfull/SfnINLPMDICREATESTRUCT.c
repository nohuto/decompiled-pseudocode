/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C020C3B0
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
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00F410C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0207CB4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned int v10; // r14d
  int v11; // r12d
  int *v12; // rdi
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 *result; // rax
  __int64 v19; // rcx
  void **v20; // r9
  unsigned int v21; // r8d
  CHAR *v22; // rdx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  CHAR *v26; // rdx
  void **v27; // r9
  int v28; // eax
  unsigned int v29; // r8d
  __int64 *v30; // rsi
  ULONG_PTR v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rsi
  _BYTE v42[4]; // [rsp+30h] [rbp-398h] BYREF
  int v43; // [rsp+34h] [rbp-394h] BYREF
  int *v44; // [rsp+38h] [rbp-390h]
  int v45; // [rsp+40h] [rbp-388h]
  __int64 v46; // [rsp+58h] [rbp-370h]
  __int64 *v47; // [rsp+60h] [rbp-368h]
  unsigned __int64 v48; // [rsp+68h] [rbp-360h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+70h] [rbp-358h] BYREF
  __int64 v50; // [rsp+88h] [rbp-340h]
  __int128 v51; // [rsp+90h] [rbp-338h]
  __int64 v52; // [rsp+A0h] [rbp-328h]
  __int128 v53; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-310h]
  __int64 v55; // [rsp+C0h] [rbp-308h]
  __int128 v56; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-2D8h]
  int v58; // [rsp+100h] [rbp-2C8h] BYREF
  char v59[140]; // [rsp+104h] [rbp-2C4h] BYREF
  unsigned __int8 v60[512]; // [rsp+190h] [rbp-238h] BYREF

  v50 = a3;
  v45 = a2;
  v47 = a1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = a7 & 1;
  memset_0(&v58, 0, 0x90uLL);
  v12 = &v58;
  v48 = 0LL;
  v43 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v14 = PtiCurrentShared(v13);
  RegionSize[0] = (ULONG_PTR)v14;
  if ( v47 )
    v46 = v47[5] - *((_QWORD *)v14 + 59);
  else
    v46 = 0LL;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 && (v15 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v16 = *(_DWORD *)(a4 + 56);
    v8 = v16 + 2;
    if ( (unsigned int)v8 < v16 )
      goto LABEL_60;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v8 *= 2LL;
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v17 = *(_DWORD *)(a4 + 72);
    v9 = v17 + 2;
    if ( (unsigned int)v9 < v17 )
      goto LABEL_60;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    ++v10;
  }
  if ( (int)v8 + (int)v9 >= (unsigned int)v8 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v8 + v9), v60, 1, 0x200uLL);
      v12 = (int *)result;
      v44 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = &v58;
      v44 = &v58;
      memset_0(v59, 0, sizeof(v59));
      v58 = 144;
    }
    PtiCurrentShared(v19);
    v53 = 0LL;
    v54 = 0LL;
    if ( v12 != &v58 && v12 != (int *)v60 )
      PushW32ThreadLock((__int64)v12, &v53, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v46;
    v12[12] = v45;
    *((_QWORD *)v12 + 7) = v50;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    v20 = (void **)(v12 + 18);
    v21 = *(_DWORD *)(a4 + 56);
    v22 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v23 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v22, 2 * v21 + 2, v20);
LABEL_37:
        if ( v23 < 0 )
          goto LABEL_60;
LABEL_38:
        if ( !(_DWORD)v9 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v30 = v47;
          ThreadLock(v47, &v56);
          v31 = RegionSize[0];
          v32 = *(_QWORD *)(RegionSize[0] + 480);
          *(_OWORD *)RegionSize = *(_OWORD *)(v32 + 64);
          v51 = *(_OWORD *)RegionSize;
          v52 = *(_QWORD *)(v32 + 80);
          *(_QWORD *)(v32 + 72) = v46;
          if ( v30 )
            v33 = *v30;
          else
            v33 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v31 + 480) + 64LL) = v33;
          if ( v30 )
            v34 = *(_QWORD *)(v30[5] + 224);
          else
            v34 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v31 + 480) + 80LL) = v34;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v42);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v35 = KeUserModeCallback(15LL, v12, (unsigned int)*v12, &v48, &v43);
          EtwTraceEndCallback(15LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v42);
          ThreadUnlock1(v37, v36, v38);
          v39 = *(_QWORD *)(v31 + 480);
          *(_OWORD *)(v39 + 64) = *(_OWORD *)RegionSize;
          *(_QWORD *)(v39 + 80) = v52;
          if ( v35 >= 0 && v43 == 24 )
          {
            v40 = (__int64 *)v48;
            if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
              v40 = (__int64 *)MmUserProbeAddress;
            v41 = *v40;
            v55 = *v40;
            goto LABEL_61;
          }
          goto LABEL_60;
        }
        v25 = *(_DWORD *)(a4 + 72);
        v26 = *(CHAR **)(a4 + 80);
        v27 = (void **)(v12 + 16);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v28 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v26, 2 * v25 + 2, v27);
LABEL_47:
            if ( v28 < 0 )
              goto LABEL_60;
            goto LABEL_48;
          }
          v29 = v25 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v28 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v26, (v25 >> 1) + 1, v27);
            goto LABEL_47;
          }
          v29 = v25 + 2;
        }
        v28 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v26, v29, v27);
        goto LABEL_47;
      }
      v24 = v21 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v23 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v22, (v21 >> 1) + 1, v20);
        goto LABEL_37;
      }
      v24 = v21 + 2;
    }
    v23 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v22, v24, v20);
    goto LABEL_37;
  }
LABEL_60:
  v41 = 0LL;
LABEL_61:
  if ( v12 != &v58 && v12 != (int *)v60 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v53);
  }
  return (unsigned __int8 *)v41;
}
