/*
 * XREFs of ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DDC4C
 * Callers:
 *     FreeTimer @ 0x1C003A800 (FreeTimer.c)
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 *     NtUserKillTimer @ 0x1C00666F0 (NtUserKillTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall DecTimerCount(struct tagTIMER *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = (_QWORD *)((char *)a1 + 56);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( (*(_DWORD *)(v1 + 604))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 448) + 8LL), 0xFFFFFFEF);
}
