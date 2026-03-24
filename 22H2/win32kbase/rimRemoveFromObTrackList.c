/*
 * XREFs of rimRemoveFromObTrackList @ 0x1C0052CC0
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005287C (RawInputManagerObjectDelete.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v2[1] = v2;
  *v2 = v2;
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
