/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C020A610
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
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int8 *result; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __m128i *v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // rdi
  __m128i *v31; // rcx
  __int64 v32; // xmm0_8
  __int64 v33; // rcx
  _BYTE v34[4]; // [rsp+30h] [rbp-368h] BYREF
  int v35; // [rsp+34h] [rbp-364h] BYREF
  int v36; // [rsp+38h] [rbp-360h]
  unsigned __int8 *v37; // [rsp+40h] [rbp-358h]
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-350h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-338h] BYREF
  __int64 v40; // [rsp+68h] [rbp-330h]
  __m128i v41; // [rsp+70h] [rbp-328h] BYREF
  __int64 v42; // [rsp+80h] [rbp-318h]
  __int128 v43; // [rsp+90h] [rbp-308h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-2F8h]
  __m128i v45; // [rsp+C8h] [rbp-2D0h]
  __int128 v46; // [rsp+D8h] [rbp-2C0h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-2B0h]
  unsigned __int8 v48[96]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v49[512]; // [rsp+150h] [rbp-248h] BYREF

  RegionSize[0] = a3;
  v36 = a7 & 1;
  memset_0(v48, 0, sizeof(v48));
  v11 = v48;
  v39 = 0LL;
  v35 = 0;
  v40 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v13 = PtiCurrentShared(v12);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 59);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 < v16 )
    goto LABEL_37;
  if ( *(int *)(a4 + 4) < 0 && !v36 )
  {
    v17 *= 2LL;
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_37;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v49, 0, 0x200uLL);
  v11 = result;
  v37 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v19);
  v43 = 0LL;
  v44 = 0LL;
  if ( v11 != v48 && v11 != v49 )
    PushW32ThreadLock((__int64)v11, &v43, (__int64)Win32FreePool);
  v20 = RegionSize[0];
  if ( RegionSize[0] < 2 )
    goto LABEL_37;
  *((_QWORD *)v11 + 5) = v15;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v20;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v17, (void **)v11 + 10) < 0 )
    goto LABEL_37;
  *((_DWORD *)v11 + 22) = v17;
  ThreadLock(a1, &v46);
  v21 = (__m128i *)*((_QWORD *)v14 + 60);
  v45 = v21[4];
  v41 = v45;
  v42 = v21[5].m128i_i64[0];
  v21[4].m128i_i64[1] = v15;
  v22 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 64LL) = v22;
  v23 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v24 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v39, &v35);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  ThreadUnlock1(v26, v25, v27);
  v28 = (__m128i *)*((_QWORD *)v14 + 60);
  v28[4] = v45;
  v28[5].m128i_i64[0] = v42;
  if ( v24 < 0 || v35 != 24 )
    goto LABEL_37;
  v29 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  v30 = *v29;
  v40 = v30;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_38;
  v31 = (__m128i *)v39;
  if ( v39 + 24 < v39 || v39 + 24 > MmUserProbeAddress )
    v31 = (__m128i *)MmUserProbeAddress;
  v32 = v31[1].m128i_i64[0];
  v41 = *v31;
  v42 = v32;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v41, 8)) )
    goto LABEL_38;
  v33 = *((_QWORD *)PtiCurrentShared((__int64)v31) + 64);
  if ( v33 && (*(_DWORD *)(v33 + 84) & 1) != 0 && *(_QWORD *)(v33 + 96) == a4 )
  {
LABEL_37:
    v30 = 0LL;
  }
  else
  {
    v30 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v41, v30, *(_DWORD *)(a4 + 4) >> 31, v36);
    v40 = v30;
    CopyOutputString((struct _CALLBACKSTATUS *)&v41, (struct _LARGE_STRING *)a4, RegionSize[0], v36);
  }
LABEL_38:
  if ( v11 != v48 && v11 != v49 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v43);
  }
  return (unsigned __int8 *)v30;
}
