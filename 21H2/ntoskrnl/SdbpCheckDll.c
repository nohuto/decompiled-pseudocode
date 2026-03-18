/*
 * XREFs of SdbpCheckDll @ 0x140AD2100
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403EBF10 (KiSwInterruptDispatch.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AB9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140AD0DA0 @ 0x140AD0DA0 (sub_140AD0DA0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
