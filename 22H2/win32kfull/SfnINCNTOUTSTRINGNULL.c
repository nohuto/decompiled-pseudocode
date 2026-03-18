/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C0207A40
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r15
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned __int64 v20; // rdi
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i *v41; // rcx
  __int64 *v42; // rdi
  __int64 v43; // rdi
  __m128i *v44; // rcx
  ULONG64 v45; // rdx
  __int64 v46; // xmm0_8
  __int64 v47; // rcx
  _BYTE v48[4]; // [rsp+30h] [rbp-368h] BYREF
  int v49; // [rsp+34h] [rbp-364h] BYREF
  int v50; // [rsp+38h] [rbp-360h]
  unsigned __int8 *v51; // [rsp+40h] [rbp-358h]
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-350h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-338h] BYREF
  __int64 v54; // [rsp+68h] [rbp-330h]
  __m128i v55; // [rsp+70h] [rbp-328h] BYREF
  __int64 v56; // [rsp+80h] [rbp-318h]
  __int128 v57; // [rsp+90h] [rbp-308h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-2F8h]
  __m128i v59; // [rsp+C8h] [rbp-2D0h]
  __int128 v60; // [rsp+D8h] [rbp-2C0h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-2B0h]
  unsigned __int8 v62[96]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v63[512]; // [rsp+150h] [rbp-248h] BYREF

  RegionSize[0] = a3;
  v50 = a7 & 1;
  memset_0(v62, 0, sizeof(v62));
  v11 = v62;
  v53 = 0LL;
  v49 = 0;
  v54 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v16 = PtiCurrentShared(v13, v12, v14, v15);
  v17 = v16;
  if ( a1 )
    v18 = a1[5] - *((_QWORD *)v16 + 59);
  else
    v18 = 0LL;
  v19 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v20 = v19 + 2;
  if ( (unsigned int)v20 < v19 )
    goto LABEL_37;
  if ( *(int *)(a4 + 4) < 0 && !v50 )
  {
    v20 *= 2LL;
    if ( v20 > 0xFFFFFFFF )
      goto LABEL_37;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v20, v63, 0, 0x200uLL);
  v11 = result;
  v51 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v23, v22, v24, v25);
  v57 = 0LL;
  v58 = 0LL;
  if ( v11 != v62 && v11 != v63 )
    PushW32ThreadLock((__int64)v11, &v57, (__int64)Win32FreePool);
  v26 = RegionSize[0];
  if ( RegionSize[0] < 2 )
    goto LABEL_37;
  *((_QWORD *)v11 + 5) = v18;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v26;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v20, (void **)v11 + 10) < 0 )
    goto LABEL_37;
  *((_DWORD *)v11 + 22) = v20;
  ThreadLock(a1, &v60);
  v30 = (__m128i *)*((_QWORD *)v17 + 60);
  v59 = v30[4];
  v55 = v59;
  v56 = v30[5].m128i_i64[0];
  v30[4].m128i_i64[1] = v18;
  v31 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v17 + 60) + 64LL) = v31;
  v32 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v17 + 60) + 80LL) = v32;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v48,
    v27,
    v28,
    v29);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v33 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v53, &v49);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v48, v34, v35);
  ThreadUnlock1(v37, v36, v38);
  v41 = (__m128i *)*((_QWORD *)v17 + 60);
  v41[4] = v59;
  v41[5].m128i_i64[0] = v56;
  if ( v33 < 0 || v49 != 24 )
    goto LABEL_37;
  v42 = (__int64 *)v53;
  if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
    v42 = (__int64 *)MmUserProbeAddress;
  v43 = *v42;
  v54 = v43;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_38;
  v44 = (__m128i *)v53;
  v45 = v53 + 24;
  if ( v53 + 24 < v53 || v45 > MmUserProbeAddress )
    v44 = (__m128i *)MmUserProbeAddress;
  v46 = v44[1].m128i_i64[0];
  v55 = *v44;
  v56 = v46;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v55, 8)) )
    goto LABEL_38;
  v47 = *((_QWORD *)PtiCurrentShared((__int64)v44, v45, v39, v40) + 64);
  if ( v47 && (*(_DWORD *)(v47 + 84) & 1) != 0 && *(_QWORD *)(v47 + 96) == a4 )
  {
LABEL_37:
    v43 = 0LL;
  }
  else
  {
    v43 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v55, v43, *(_DWORD *)(a4 + 4) >> 31, v50);
    v54 = v43;
    CopyOutputString((struct _CALLBACKSTATUS *)&v55, (struct _LARGE_STRING *)a4, RegionSize[0], v50);
  }
LABEL_38:
  if ( v11 != v62 && v11 != v63 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v57);
  }
  return (unsigned __int8 *)v43;
}
