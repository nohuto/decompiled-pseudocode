/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00DE138 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00DEEA8 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  bool v3; // cc
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  _DWORD v7[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v8; // [rsp+58h] [rbp+Fh]
  __int128 v9; // [rsp+60h] [rbp+17h]
  __int128 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]
  __int64 v14; // [rsp+90h] [rbp+47h]
  __int64 v15; // [rsp+98h] [rbp+4Fh]

  v15 = 0LL;
  v13 = 0;
  v12 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v2 = HmgShareLock(a1, 7);
  v8 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8) <= 1u;
    v7[1] = *(_DWORD *)(v2 + 92);
    v7[0] = *(_DWORD *)(v2 + 88);
    if ( v3 )
    {
      if ( _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
      {
        v5 = 0LL;
        v6 = 0;
        HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
        if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
          if ( EPATHOBJGC::bGarbageCollect((EPATHOBJGC *)v7) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 1908LL));
        }
        else
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        }
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
      }
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v7);
}
