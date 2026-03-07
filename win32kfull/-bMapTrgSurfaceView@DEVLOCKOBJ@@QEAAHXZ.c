_BOOL8 __fastcall DEVLOCKOBJ::bMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  __int64 v1; // r8
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // r15d
  Gre::Base *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbx
  _DWORD *v10; // rbx
  __int64 v11; // rdi
  struct RFONT *v12; // rdx
  signed __int32 v13; // ett
  _QWORD *v14; // rax
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 1LL;
  if ( !*((_BYTE *)this + 49) )
    return 1LL;
  if ( (*((_DWORD *)this + 6) & 0x1000) == 0 )
    return 1LL;
  v3 = *(_QWORD *)(v1 + 496);
  if ( !v3 )
    return 1LL;
  v5 = SURFACE::Map(*(_QWORD *)(v1 + 496), this);
  if ( v5 <= 1 )
  {
    if ( (*(_DWORD *)(v3 + 112) & 0x800) != 0 )
    {
      if ( *(_QWORD *)(v3 + 248) )
      {
        v8 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
        if ( !*(_DWORD *)(v8 + 23384) )
        {
          v9 = *((_QWORD *)this + 4);
          if ( v9 )
          {
            if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
            {
              v10 = *(_DWORD **)(v9 + 48);
              if ( v10 )
              {
                if ( (v10[10] & 0x20000000) != 0 )
                {
                  Gre::Base::Globals(v7);
                  if ( !*(_QWORD *)(v8 + 23376) )
                    *(_QWORD *)(v8 + 23376) = PDEV::Allocate(0);
                  v11 = *(_QWORD *)(v8 + 23376);
                  if ( v11 && *(_QWORD *)(*((_QWORD *)this + 4) + 48LL) != v11 )
                  {
                    v15 = *(void **)(v8 + 23376);
                    memmove(v15, v10, 0xDA8uLL);
                    PDEVOBJ::prfntActive((PDEVOBJ *)&v15, 0LL);
                    PDEVOBJ::prfntInactive((PDEVOBJ *)&v15, v12);
                    if ( (*(_DWORD *)(v11 + 40) & 0x800000) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v11 + 3496) + 1528LL) = 0;
                    else
                      *(_DWORD *)(v11 + 1528) = 0;
                    _m_prefetchw((const void *)(v11 + 40));
                    do
                      v13 = *(_DWORD *)(v11 + 40);
                    while ( v13 != _InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v11 + 40),
                                     v13 | 0x800000,
                                     v13) );
                    v14 = v15;
                    *((_QWORD *)v15 + 437) = v10;
                    v14[10] = v14;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2848LL) = RedirTextOut;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2776LL) = RedirStrokePath;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2816LL) = RedirCopyBits;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2808LL) = RedirBitBlt;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2912LL) = RedirLineTo;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2784LL) = RedirFillPath;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2792LL) = RedirStrokeAndFillPath;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2824LL) = RedirStretchBlt;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3232LL) = RedirAlphaBlend;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3256LL) = RedirTransparentBlt;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3208LL) = RedirGradientFill;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3384LL) = RedirDrawStream;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3392LL) = RedirNineGrid;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3224LL) = RedirPlgBlt;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 3216LL) = RedirStretchBltROP;
                    *(_QWORD *)(*(_QWORD *)(v8 + 23376) + 2864LL) = RedirDrawEscape;
                    bMakeOpaque(*(struct SURFACE **)(*((_QWORD *)this + 4) + 496LL));
                    *(_QWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_QWORD *)(v8 + 23376);
                    *((_DWORD *)this + 6) |= 0x400u;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v3 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32)) )
      *((_DWORD *)this + 6) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 6) |= 0x40u;
    return 1LL;
  }
  return v5 != 2;
}
