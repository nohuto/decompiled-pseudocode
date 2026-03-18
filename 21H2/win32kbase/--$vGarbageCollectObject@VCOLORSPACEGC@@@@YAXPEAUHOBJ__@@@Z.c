/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-38h]
  _OWORD v5[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-8h]

  memset(v5, 0, sizeof(v5));
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v5,
      (__int64)v5,
      (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v6 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v6 = (_QWORD *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v3 = 0LL;
    v4 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0LL, 0, 0);
    if ( v4 && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( (unsigned int)bDeleteColorSpace(*v6, 3LL) )
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
  }
  SURFREF::~SURFREF((SURFREF *)v5);
}
