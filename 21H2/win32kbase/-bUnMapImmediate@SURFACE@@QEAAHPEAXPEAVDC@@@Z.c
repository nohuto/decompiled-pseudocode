/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0082504
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C00820A0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0082620 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00826C8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct _ERESOURCE *a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  HSEMAPHORE v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && _bittest16((const signed __int16 *)(v4 + 102), 0xBu) )
  {
    v10 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 33) )
    {
      v5 = (_QWORD *)((char *)this + 528);
      v6 = *((_QWORD *)this + 66);
      if ( *(SURFACE **)(v6 + 8) != (SURFACE *)((char *)this + 528)
        || (v7 = (_QWORD *)*((_QWORD *)this + 67), (_QWORD *)*v7 != v5) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *((_QWORD *)this + 67) = (char *)this + 528;
      *v5 = v5;
      if ( *((_QWORD *)this + 9) )
        MmUnmapViewOfSection(**((_QWORD **)this + 33));
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    v8 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v8 + 64), 0);
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ::vUnlock((PERESOURCE *)&v10);
  }
  return 1LL;
}
