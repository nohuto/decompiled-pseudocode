/*
 * XREFs of MiPageRead @ 0x14027D14C
 * Callers:
 *     MiPfExecuteReadList @ 0x140636824 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x1406FF22C (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a5, a6, a7);
}
