void __fastcall GreUpdateSpriteClipRgn(Gre::Base *a1, HWND a2, HRGN a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  struct PDEVOBJ *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  REGION *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-20h] BYREF
  Gre::Base *v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = a1;
  v7 = Gre::Base::Globals(a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v20, v8, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v7 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 0, 0);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v14, a2);
    v9 = v14;
    if ( !v14 )
    {
LABEL_19:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
      goto LABEL_20;
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v17, (struct _EX_PUSH_LOCK *)(v14 + 88));
    v10 = *(_QWORD *)(v9 + 144);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct _EX_PUSH_LOCK *)(v10 + 256));
    if ( v19[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v9 + 40), v18) )
    {
      if ( !*(_QWORD *)(v10 + 88) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
        if ( v15 )
          *(_QWORD *)(v10 + 88) = v15;
      }
      if ( !*(_QWORD *)(v10 + 88) )
        goto LABEL_15;
      v12 = *(_QWORD *)(v10 + 88);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)v19) )
        goto LABEL_15;
      v13.x = -v18[0];
      v13.y = -v18[1];
      if ( RGNOBJ::bOffset((RGNOBJ *)&v12, &v13) )
      {
        if ( (*(_DWORD *)(v9 + 140) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v12,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v9 + 132), (__m128)*(unsigned int *)(v9 + 136)).m128_u64[0]);
        *(_QWORD *)(v10 + 88) = v12;
        goto LABEL_14;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    }
    else
    {
      v11 = *(REGION **)(v10 + 88);
      if ( !v11 )
      {
LABEL_15:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
        if ( (*(_DWORD *)(v10 + 252) & 1) == 0 || !a4 )
          vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v10);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
        if ( v9 )
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
        goto LABEL_19;
      }
      REGION::vDeleteREGION(v11);
    }
    *(_QWORD *)(v10 + 88) = 0LL;
LABEL_14:
    *(_DWORD *)(v10 + 252) |= 0x20u;
    goto LABEL_15;
  }
LABEL_20:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v20);
}
