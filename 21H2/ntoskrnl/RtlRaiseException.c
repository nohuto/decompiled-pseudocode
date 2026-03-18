/*
 * XREFs of RtlRaiseException @ 0x140294A60
 * Callers:
 *     RaiseException @ 0x1403E5840 (RaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x14042A160 (RtlRaiseNoncontinuableException.c)
 *     HvlpGetRegister128 @ 0x14054BF60 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x14054BFF0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14054C0E0 (HvlpSetRegister64.c)
 *     KiStallBugcheckThread @ 0x1405798A8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405E8980 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x140295210 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14041E540 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x140429AE0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 */

__int64 __fastcall RtlRaiseException(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24)
{
  int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 result; // rax
  unsigned int v33; // [rsp+40h] [rbp+0h] BYREF
  __int64 v34; // [rsp+48h] [rbp+8h] BYREF
  __int64 v35; // [rsp+50h] [rbp+10h] BYREF
  __int64 v36; // [rsp+58h] [rbp+18h] BYREF

  v33 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  *(_DWORD *)(a1 + 4) |= 0x80u;
  v25 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2((unsigned int)(v25 + 1048587), &v33, 0LL);
  v26 = v33 + 15LL;
  if ( v26 <= v33 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
  v28 = alloca(v27);
  v29 = alloca(v27);
  v30 = RtlInitializeExtendedContext2(&v33, (unsigned int)(v25 + 1048587), &v33, 0LL);
  RtlpCaptureContext2(&v33);
  v31 = RtlLookupFunctionEntry(a24, &v34, 0LL);
  if ( !v31 )
LABEL_6:
    RtlRaiseStatus(v30);
  RtlVirtualUnwind(0, v34, a24, v31, (__int64)&v33, (__int64)&v36, (__int64)&v35, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1);
  if ( !(_BYTE)result )
  {
    v30 = ZwRaiseException(a1, &v33, 0LL);
    goto LABEL_6;
  }
  return result;
}
