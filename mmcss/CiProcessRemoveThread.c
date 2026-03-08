/*
 * XREFs of CiProcessRemoveThread @ 0x1C000A6D0
 * Callers:
 *     CiThreadCleanup @ 0x1C000A4B0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessRemoveThread(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(v1 + 16, 0LL);
  v3 = (_QWORD *)(a1 + 112);
  *(_QWORD *)(v1 + 24) = KeGetCurrentThread();
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)(v1 + 24) = 0LL;
  return ExReleasePushLockExclusiveEx(v1 + 16, 0LL);
}
