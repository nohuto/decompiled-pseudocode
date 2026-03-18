/*
 * XREFs of xxxProcessTSFEvent @ 0x1C01BFFF8
 * Callers:
 *     xxxFlushDeferredWindowEvents @ 0x1C0025160 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010160 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C01BFC88 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01BFD14 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax
  int v7; // r9d
  int v8; // eax
  __int64 v9; // r10
  int v10; // r8d

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v6 = PtiCurrentShared(v3, v2, v4, v5);
  v7 = *((_DWORD *)a1 + 7);
  *((_QWORD *)a1 + 8) = v6;
  v8 = TSFRangeFromEvent(v7, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 448) + 24LL) & (v10 | v8) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  RemoveNotify((struct tagNOTIFY ***)a1);
}
