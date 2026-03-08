/*
 * XREFs of ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00DEE88 (--1COLORSPACEREF@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<BRUSHSELOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  struct HOBJ__ **v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+48h] [rbp-18h]

  v6 = 0;
  v2 = HmgShareLock(a1, 16);
  v5 = v2;
  v3 = (struct HOBJ__ **)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v7 = 0LL;
    v8 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v8 && (*(_DWORD *)(v7 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( (unsigned int)bDeleteBrush(*v3, 1, 1) )
      {
        v5 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 1908LL));
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  COLORSPACEREF::~COLORSPACEREF((COLORSPACEREF *)&v5);
}
