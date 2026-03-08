/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1)
{
  __int64 v2; // rax
  int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h]
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  v2 = HmgShareLockEx(a1, 5, 0);
  v3 = (int *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v5 = 0LL;
    v6 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( (unsigned int)SURFACE::bDeleteSurface((__int64)v3, 1, 0) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 1908LL));
        v3 = 0LL;
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  if ( v3 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
}
