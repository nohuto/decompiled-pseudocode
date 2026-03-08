/*
 * XREFs of ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E725C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveFromAdapterList(VIDMM_GLOBAL *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  ExAcquirePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  v2 = (_QWORD *)((char *)this + 44768);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExReleasePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
}
