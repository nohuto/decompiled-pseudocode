/*
 * XREFs of DwmAsyncSignalGhost @ 0x1C0003998
 * Callers:
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0003960 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncSignalGhost(PVOID Object, __int128 *a2)
{
  unsigned int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  _DWORD v9[20]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(v9, 0, sizeof(v9));
    v5 = *a2;
    v6 = a2[1];
    LOWORD(v9[1]) = 0x8000;
    v7 = *((_DWORD *)a2 + 8);
    *(_OWORD *)&v9[11] = v5;
    v9[19] = v7;
    *(_OWORD *)&v9[15] = v6;
    v9[0] = 5242920;
    v9[10] = 1073741876;
    v4 = LpcRequestPort(Object, v9);
    ObfDereferenceObject(Object);
  }
  return v4;
}
