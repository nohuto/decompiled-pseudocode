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
    v10 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 104LL);
    EngAcquireSemaphore(v10);
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
