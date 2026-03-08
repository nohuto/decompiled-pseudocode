/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00DEE88 (--1COLORSPACEREF@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v2 = HmgShareLock(a1, 9);
  v7 = v2;
  v3 = (_QWORD *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v5 = 0LL;
    v6 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( (unsigned int)bDeleteColorSpace(*v3, 1LL) )
      {
        v7 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 1908LL));
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  }
  COLORSPACEREF::~COLORSPACEREF((COLORSPACEREF *)&v7);
}
