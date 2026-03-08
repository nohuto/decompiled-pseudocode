/*
 * XREFs of rimRemoveFromObTrackList @ 0x1C0038270
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C00361E4 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v9 = (_QWORD *)(a1 + 16);
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v12 = SGDGetUserSessionState(v10, v6, v7, v8);
  *(_QWORD *)(v12 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v12 + 240, 0LL);
  KeLeaveCriticalRegion();
}
