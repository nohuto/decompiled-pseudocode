/*
 * XREFs of ?InitializeMouseGlobals@@YAJXZ @ 0x1C009704C
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1C0096E3C (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeMouseGlobals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_DWORD *)(v4 + 15964) = -1;
  v4 += 14360LL;
  *(_DWORD *)v4 = 500;
  *(_DWORD *)(v4 + 4) = 1;
  *(_OWORD *)(v4 + 1640) = (unsigned __int64)CMouseAcceleration_CreateInstance;
  *(_QWORD *)(v4 + 1656) = 0LL;
  *(_OWORD *)(v4 + 1664) = (unsigned __int64)CTouchpadAcceleration_CreateInstance;
  *(_QWORD *)(v4 + 1680) = 1LL;
  return 0LL;
}
