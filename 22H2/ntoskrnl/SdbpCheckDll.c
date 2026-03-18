/*
 * XREFs of SdbpCheckDll @ 0x140B144F0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403E3F70 (KiSwInterruptDispatch.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B131A0 @ 0x140B131A0 (sub_140B131A0.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
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
