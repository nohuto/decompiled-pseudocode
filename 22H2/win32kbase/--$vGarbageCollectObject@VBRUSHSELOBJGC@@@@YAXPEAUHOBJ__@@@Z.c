/*
 * XREFs of ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2E48
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00D15A0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEA.c)
 */

__int64 __fastcall vGarbageCollectObject<BRUSHSELOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  struct HOBJ__ **v3; // rbx
  __int64 v4; // rcx
  struct OBJECT *v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-18h]

  v7 = 0;
  v2 = HmgShareLock(a1, 16);
  v6 = (struct OBJECT *)v2;
  v3 = (struct HOBJ__ **)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v8 = 0LL;
    v9 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v8, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v9 && (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
      if ( (unsigned int)bDeleteBrush(*v3, 1, 1) )
      {
        v6 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 1908LL));
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  }
  return UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic(&v6);
}
