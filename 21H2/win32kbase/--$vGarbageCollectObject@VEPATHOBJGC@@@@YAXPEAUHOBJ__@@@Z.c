/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBBFC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CBF38 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C002E7A0 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0030210 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00C84CC (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00CBEF8 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  bool v3; // cc
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  _DWORD v6[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v7; // [rsp+58h] [rbp+Fh]
  __int128 v8; // [rsp+60h] [rbp+17h]
  __int128 v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+80h] [rbp+37h]
  int v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+8Ch] [rbp+43h]
  __int64 v13; // [rsp+90h] [rbp+47h]
  __int64 v14; // [rsp+98h] [rbp+4Fh]

  v14 = 0LL;
  v12 = 0;
  v11 = 0;
  v13 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = HmgShareLock(a1, 7);
  v7 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8) <= 1u;
    v6[1] = *(_DWORD *)(v2 + 92);
    v6[0] = *(_DWORD *)(v2 + 88);
    if ( v3 && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v4 = 0LL;
      v5 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
      if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( EPATHOBJGC::bGarbageCollect((EPATHOBJGC *)v6) )
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v6);
}
