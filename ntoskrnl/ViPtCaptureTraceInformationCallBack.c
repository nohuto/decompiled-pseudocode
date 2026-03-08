/*
 * XREFs of ViPtCaptureTraceInformationCallBack @ 0x140ADBBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViPtCaptureTraceInformationCallBack(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, GUID *, _QWORD, _QWORD),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax

  result = a2(a1, &GUID_VERIFIER_LIVEDUMP_INTERFACE, *(_QWORD *)a8, *(unsigned int *)(a8 + 8));
  *(_QWORD *)(a8 + 24) = a1;
  return result;
}
