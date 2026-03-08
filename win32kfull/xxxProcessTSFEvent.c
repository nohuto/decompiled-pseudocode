/*
 * XREFs of xxxProcessTSFEvent @ 0x1C01C1198
 * Callers:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00D8F74 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000F7B0 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C01C0E28 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01C0EB4 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  int v4; // r9d
  int v5; // eax
  __int64 v6; // r10
  int v7; // r8d

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v3 = PtiCurrentShared(v2);
  v4 = *((_DWORD *)a1 + 7);
  *((_QWORD *)a1 + 8) = v3;
  v5 = TSFRangeFromEvent(v4, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 448) + 24LL) & (v7 | v5) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  RemoveNotify((struct tagNOTIFY ***)a1);
}
