/*
 * XREFs of UnpackAffectedThreadList @ 0x1C00CE1E4
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0094B64 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00CE3D0 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnpackAffectedThreadList(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(SGDGetUserSessionState(a1) + 16880);
  v3 = (_QWORD *)*v2;
  while ( v3 && v3 != v2 )
  {
    v4 = v3;
    v3 = (_QWORD *)v3[189];
    Win32FreePool(v4);
  }
  v5 = (_QWORD *)(SGDGetUserSessionState(v1) + 16880);
  v5[1] = v5;
  *v5 = v5;
  result = SGDGetUserSessionState(v6);
  *(_DWORD *)(result + 16896) = 0;
  return result;
}
