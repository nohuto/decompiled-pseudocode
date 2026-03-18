/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  _BYTE v6[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v7; // [rsp+68h] [rbp-8h]
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  SURFREF::SURFREF((SURFREF *)v6);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&vars0);
  v2 = HmgShareLockEx(a1, 5, 0);
  v7 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      if ( (unsigned int)SURFACE::bDeleteSurface(v7, 1, 0) )
      {
        v7 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 1908LL));
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    if ( v5 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&vars0);
  SURFREF::~SURFREF((SURFREF *)v6);
}
