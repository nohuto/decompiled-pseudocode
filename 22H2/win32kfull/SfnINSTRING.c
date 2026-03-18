/*
 * XREFs of SfnINSTRING @ 0x1C020D030
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C02239BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013CD84 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C02050E4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r13
  __int64 v16; // r15
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void **v24; // r9
  unsigned int v25; // r8d
  CHAR *v26; // rdx
  int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rdi
  _BYTE v45[4]; // [rsp+30h] [rbp-348h] BYREF
  int v46; // [rsp+34h] [rbp-344h] BYREF
  int *v47; // [rsp+38h] [rbp-340h]
  int v48; // [rsp+40h] [rbp-338h]
  unsigned __int64 v49; // [rsp+58h] [rbp-320h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+60h] [rbp-318h] BYREF
  __int128 v51; // [rsp+78h] [rbp-300h]
  __int64 v52; // [rsp+88h] [rbp-2F0h]
  __int128 v53; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-2D8h]
  __int64 v55; // [rsp+A8h] [rbp-2D0h]
  __int128 v56; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-2A0h]
  int v58; // [rsp+E0h] [rbp-298h] BYREF
  char v59[92]; // [rsp+E4h] [rbp-294h] BYREF
  unsigned __int8 v60[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v48 = a2;
  memset_0(&v58, 0, 0x58uLL);
  v9 = &v58;
  v49 = 0LL;
  v46 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v14 = PtiCurrentShared(v11, v10, v12, v13);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 59);
  else
    v16 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v18) = 0;
    v17 = 0;
  }
  else
  {
    v17 = 1;
    v18 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v18 < *a4 )
      goto LABEL_47;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v18 *= 2LL;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_47;
    }
  }
  if ( v17 )
  {
    result = AllocCallbackMessage(88, v17, (unsigned int)v18, v60, 1, 0x200uLL);
    v9 = (int *)result;
    v47 = (int *)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v58;
    v47 = &v58;
    memset_0(v59, 0, 0x54uLL);
    v58 = 88;
  }
  PtiCurrentShared(v21, v20, v22, v23);
  v53 = 0LL;
  v54 = 0LL;
  if ( v9 != &v58 && v9 != (int *)v60 )
    PushW32ThreadLock((__int64)v9, &v53, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v16;
  v9[12] = v48;
  *((_QWORD *)v9 + 7) = RegionSize[0];
  if ( v17 )
  {
    v24 = (void **)(v9 + 20);
    v25 = *a4;
    v26 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v26, 2 * v25 + 2, v24);
LABEL_29:
        if ( v27 < 0 )
          goto LABEL_47;
        goto LABEL_35;
      }
      v28 = v25 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v26, (v25 >> 1) + 1, v24, 0);
        goto LABEL_29;
      }
      v28 = v25 + 2;
    }
    v27 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v26, v28, v24);
    goto LABEL_29;
  }
  if ( a4 )
    v29 = *((_QWORD *)a4 + 1);
  else
    v29 = 0LL;
  *((_QWORD *)v9 + 10) = v29;
LABEL_35:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  ThreadLock(a1, &v56);
  v33 = *((_QWORD *)v15 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v33 + 64);
  v51 = *(_OWORD *)RegionSize;
  v52 = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(v33 + 72) = v16;
  if ( a1 )
    v34 = *a1;
  else
    v34 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 60) + 64LL) = v34;
  if ( a1 )
    v35 = *(_QWORD *)(a1[5] + 224);
  else
    v35 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 60) + 80LL) = v35;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v45,
    v30,
    v31,
    v32);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v36 = KeUserModeCallback(26LL, v9, (unsigned int)*v9, &v49, &v46);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v45, v37, v38);
  ThreadUnlock1(v40, v39, v41);
  v42 = *((_QWORD *)v15 + 60);
  *(_OWORD *)(v42 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v42 + 80) = v52;
  if ( v36 >= 0 && v46 == 24 )
  {
    v43 = (__int64 *)v49;
    if ( v49 + 8 < v49 || v49 + 8 > MmUserProbeAddress )
      v43 = (__int64 *)MmUserProbeAddress;
    v44 = *v43;
    v55 = *v43;
    goto LABEL_48;
  }
LABEL_47:
  v44 = 0LL;
LABEL_48:
  if ( v9 != &v58 && v9 != (int *)v60 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v53);
  }
  return (unsigned __int8 *)v44;
}
