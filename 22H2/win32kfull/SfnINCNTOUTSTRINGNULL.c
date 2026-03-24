/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C022A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00232F8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00233D0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C002452C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int8 *result; // rax
  __int64 v19; // rax
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rdi
  __int64 v29; // rdi
  __m128i *v30; // rcx
  __int64 v31; // xmm0_8
  __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-384h]
  int v36; // [rsp+38h] [rbp-380h] BYREF
  unsigned __int8 *v37; // [rsp+40h] [rbp-378h]
  unsigned __int64 v38; // [rsp+58h] [rbp-360h] BYREF
  __int64 v39; // [rsp+60h] [rbp-358h]
  unsigned int v40[4]; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int128 v42; // [rsp+80h] [rbp-338h] BYREF
  __int64 v43; // [rsp+90h] [rbp-328h]
  __int128 v44; // [rsp+98h] [rbp-320h]
  __int64 v45; // [rsp+A8h] [rbp-310h]
  __m128i v46; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-2F8h]
  __int128 v48; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-2E0h]
  __int128 v50; // [rsp+100h] [rbp-2B8h]
  unsigned __int8 v51[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v52[512]; // [rsp+170h] [rbp-248h] BYREF

  *(_QWORD *)v40 = a3;
  v11 = a7 & 1;
  memset(v51, 0, sizeof(v51));
  v12 = v51;
  v38 = 0LL;
  v36 = 0;
  v39 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4);
  v17 = (v16 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v17 < (v16 & 0x7FFFFFFFu) )
    goto LABEL_43;
  v35 = (v16 & 0x7FFFFFFF) + 2;
  if ( v16 >= 0 || (a7 & 1) != 0 )
    goto LABEL_9;
  v17 *= 2LL;
  if ( v17 > 0xFFFFFFFF )
  {
LABEL_43:
    v29 = 0LL;
    goto LABEL_44;
  }
  v35 = v17;
LABEL_9:
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v52, 0, 0x200uLL);
  v12 = result;
  v37 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v48 = 0LL;
  v49 = 0LL;
  if ( v12 != v51 && v12 != v52 )
    PushW32ThreadLock((__int64)v12, &v48, (__int64)Win32FreePool);
  v19 = *(_QWORD *)v40;
  if ( *(_QWORD *)v40 < 2uLL )
    goto LABEL_43;
  *((_QWORD *)v12 + 5) = v15;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = v19;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v35, (void **)v12 + 10) < 0 )
    goto LABEL_43;
  *((_DWORD *)v12 + 22) = v20;
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v42 = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = &v42;
  *((_QWORD *)&v42 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v14 + 480);
  v50 = *(_OWORD *)(v22 + 64);
  v44 = v50;
  v45 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v15;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v25 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v38, &v36);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  ThreadUnlock1(v26);
  v27 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v27 + 64) = v50;
  *(_QWORD *)(v27 + 80) = v45;
  if ( v25 < 0 || v36 != 24 )
    goto LABEL_43;
  v28 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  v29 = *v28;
  v39 = v29;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_44;
  v30 = (__m128i *)v38;
  if ( v38 + 24 < v38 || v38 + 24 > MmUserProbeAddress )
    v30 = (__m128i *)MmUserProbeAddress;
  v31 = v30[1].m128i_i64[0];
  v46 = *v30;
  v47 = v31;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v46, 8)) )
    goto LABEL_44;
  v32 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v32 )
  {
    if ( (*(_DWORD *)(v32 + 84) & 1) != 0 && *(_QWORD *)(v32 + 96) == a4 )
      goto LABEL_43;
  }
  v29 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v46, v29, *(_DWORD *)(a4 + 4) >> 31, v11);
  v39 = v29;
  CopyOutputString((volatile void **)&v46, (struct _LARGE_STRING *)a4, v40[0], v11);
LABEL_44:
  if ( v12 != v51 && v12 != v52 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v48);
  }
  return (unsigned __int8 *)v29;
}
