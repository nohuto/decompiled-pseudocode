/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00B4788
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 579) - *((_QWORD *)this + 897) > qword_1C0076450 )
  {
    *((_QWORD *)this + 895) = 0LL;
    v2 = *((_QWORD *)this + 579);
    *((_DWORD *)this + 1792) = 0;
    *((_QWORD *)this + 897) = v2;
  }
}
