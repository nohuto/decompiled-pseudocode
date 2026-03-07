void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct tagSIZE **v2; // rbx
  __int64 v4; // r8
  SURFACE *v5; // rcx
  struct tagSIZE *v6; // rdx
  int v7; // eax
  __int64 v8; // rbx

  v2 = (struct tagSIZE **)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)this + 49) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
        {
          v5 = *(SURFACE **)(v4 + 496);
          if ( v5 )
            SURFACE::bUnMap(v5, this, (struct DC *)v4);
        }
        (*v2)[5].cy &= ~1u;
        v6 = *v2;
        if ( ((*v2)[4].cy & 0x4000) != 0 && *(_QWORD *)&v6[59] )
        {
          if ( v6[61].cx )
            GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(v4 + 36);
      if ( (v7 & 0x4000) != 0 && (v7 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v4 + 472) )
        {
          if ( *(_DWORD *)(v4 + 488) )
          {
            v8 = *(_QWORD *)(v4 + 496);
            if ( v8 )
            {
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v8 + 272));
              W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v8 + 272));
            }
          }
        }
      }
    }
  }
}
