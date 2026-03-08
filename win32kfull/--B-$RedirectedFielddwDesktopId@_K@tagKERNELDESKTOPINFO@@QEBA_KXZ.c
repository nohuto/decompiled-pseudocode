/*
 * XREFs of ??B?$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ @ 0x1C01A4014
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFielddwDesktopId<unsigned __int64>::operator unsigned __int64(
        __int64 a1)
{
  return **(_QWORD **)(a1 - 16);
}
