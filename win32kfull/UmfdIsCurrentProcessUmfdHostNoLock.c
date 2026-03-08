/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00D3D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UmfdIsCurrentProcessUmfdHostNoLock(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  return *(_QWORD *)(v1 + 23496) == PsGetCurrentProcess(v3, v2, v4);
}
