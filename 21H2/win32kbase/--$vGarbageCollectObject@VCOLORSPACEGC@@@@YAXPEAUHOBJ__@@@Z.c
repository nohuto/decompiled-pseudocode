/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBAE4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CBF38 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C002CCA0 (PushThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C002E7A0 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0030210 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CAF18 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-38h]
  _OWORD v5[2]; // [rsp+48h] [rbp-28h] BYREF
  struct HOBJ__ **v6; // [rsp+68h] [rbp-8h]

  memset(v5, 0, sizeof(v5));
  PushThreadGuardedObject(
    v5,
    (__int64)v5,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v6 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v6 = (struct HOBJ__ **)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
      if ( v4 && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
        if ( (unsigned int)bDeleteColorSpace(*v6, 3) )
        {
          v6 = 0LL;
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        }
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
      v2 = (__int64)v6;
    }
    if ( v2 )
      DEC_SHARE_REF_CNT((unsigned int *)v2);
  }
  PopThreadGuardedObject(v5);
}
