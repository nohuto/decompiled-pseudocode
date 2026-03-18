/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C0224480
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00D4FCC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00D57F4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned __int64 v16; // rdi
  unsigned __int8 *result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rdi
  __int64 v28; // rdi
  __m128i *v29; // rcx
  __int64 v30; // xmm0_8
  __int64 v31; // rcx
  _BYTE v32[4]; // [rsp+30h] [rbp-388h] BYREF
  int v33; // [rsp+34h] [rbp-384h] BYREF
  int v34; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v35; // [rsp+40h] [rbp-378h]
  unsigned __int64 v36; // [rsp+58h] [rbp-360h] BYREF
  __int64 v37; // [rsp+60h] [rbp-358h]
  unsigned int v38[4]; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int128 v40; // [rsp+80h] [rbp-338h]
  __int64 v41; // [rsp+90h] [rbp-328h]
  __m128i v42; // [rsp+98h] [rbp-320h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-310h]
  __int128 v44; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-2F8h]
  __int128 v46; // [rsp+E8h] [rbp-2D0h]
  __int128 v47; // [rsp+F8h] [rbp-2C0h] BYREF
  __int64 v48; // [rsp+108h] [rbp-2B0h]
  unsigned __int8 v49[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v50[512]; // [rsp+170h] [rbp-248h] BYREF

  *(_QWORD *)v38 = a3;
  v34 = a7 & 1;
  memset(v49, 0, sizeof(v49));
  v11 = v49;
  v36 = 0LL;
  v33 = 0;
  v37 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v16 = v15 + 2;
  if ( (unsigned int)v16 < v15 )
    goto LABEL_37;
  if ( *(int *)(a4 + 4) < 0 && !v34 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_37;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v16, v50, 0, 0x200uLL);
  v11 = result;
  v35 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v44 = 0LL;
  v45 = 0LL;
  if ( v11 != v49 && v11 != v50 )
    PushW32ThreadLock((__int64)v11, &v44, (__int64)Win32FreePool);
  v18 = *(_QWORD *)v38;
  if ( *(_QWORD *)v38 < 2uLL )
    goto LABEL_37;
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v18;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v16, (void **)v11 + 10) < 0 )
    goto LABEL_37;
  *((_DWORD *)v11 + 22) = v16;
  ThreadLock((__int64)a1, (__int64 *)&v47);
  v19 = *(_QWORD *)(v13 + 480);
  v46 = *(_OWORD *)(v19 + 64);
  v40 = v46;
  v41 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v14;
  v20 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  v21 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v22 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v36, &v33);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v26 + 64) = v46;
  *(_QWORD *)(v26 + 80) = v41;
  if ( v22 < 0 || v33 != 24 )
    goto LABEL_37;
  v27 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v37 = v28;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_38;
  v29 = (__m128i *)v36;
  if ( v36 + 24 < v36 || v36 + 24 > MmUserProbeAddress )
    v29 = (__m128i *)MmUserProbeAddress;
  v30 = v29[1].m128i_i64[0];
  v42 = *v29;
  v43 = v30;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v42, 8)) )
    goto LABEL_38;
  v31 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
  if ( v31 && (*(_DWORD *)(v31 + 84) & 1) != 0 && *(_QWORD *)(v31 + 96) == a4 )
  {
LABEL_37:
    v28 = 0LL;
  }
  else
  {
    v28 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v42, v28, *(_DWORD *)(a4 + 4) >> 31, v34);
    v37 = v28;
    CopyOutputString((volatile void **)&v42, (struct _LARGE_STRING *)a4, v38[0], v34);
  }
LABEL_38:
  if ( v11 != v49 && v11 != v50 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
  }
  return (unsigned __int8 *)v28;
}
