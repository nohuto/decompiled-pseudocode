/*
 * XREFs of SdbpCheckDll @ 0x140B104F0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DEA50 (KiSwInterruptDispatch.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0F1A0 @ 0x140B0F1A0 (sub_140B0F1A0.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
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
