/*
 * XREFs of SeAccessCheckEx @ 0x1403CA390
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 */

bool __fastcall SeAccessCheckEx(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6, 0);
}
