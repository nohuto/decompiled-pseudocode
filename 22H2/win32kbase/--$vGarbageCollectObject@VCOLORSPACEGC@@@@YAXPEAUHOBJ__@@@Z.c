/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00D325C (--1COLORSPACEREF@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  _OWORD v6[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-8h]

  memset(v6, 0, sizeof(v6));
  PushThreadGuardedObject(
    v6,
    (__int64)v6,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v7 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v7 = (_QWORD *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      if ( (unsigned int)bDeleteColorSpace(*v7, 1LL) )
      {
        v7 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 1908LL));
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  COLORSPACEREF::~COLORSPACEREF((COLORSPACEREF *)v6);
}
