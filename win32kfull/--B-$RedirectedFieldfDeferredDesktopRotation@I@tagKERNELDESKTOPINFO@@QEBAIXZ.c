/*
 * XREFs of ??B?$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ @ 0x1C01F6B74
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFieldfDeferredDesktopRotation<unsigned int>::operator unsigned int(
        __int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 - 250) + 64LL) >> 1) & 1;
}
