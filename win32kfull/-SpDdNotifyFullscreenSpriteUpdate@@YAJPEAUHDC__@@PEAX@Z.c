__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // r15
  Gre::Base *v6; // rcx
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rdi
  char ShouldUseSfmTokenArray; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  UINT_PTR v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // edi
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+30h] BYREF
  struct DWMSPRITE *v26; // [rsp+88h] [rbp+38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !v24[0] )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v24);
    return 3221225485LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
  v5 = Gre::Base::Globals(v4);
  v23 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v23);
  GreAcquireSemaphore(*((_QWORD *)v5 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v26, 0LL, a2);
  v7 = IsDwmActive(v6);
  v10 = v26;
  if ( v7 && v26 )
  {
    v11 = *((_QWORD *)v26 + 18);
    LOBYTE(v8) = 1;
    vSpDwmUpdateSpriteVisibility(v26, v8, v9);
    v25 = 0;
    vSpUpdateDirtyRgn(v10, (struct SFMLOGICALSURFACE *)v11, 0LL, (const struct _RECTL *)((char *)v10 + 56), &v25, 0);
    if ( v25 )
    {
      ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v11 + 252));
      v15 = *(_QWORD *)(v11 + 184);
      if ( ShouldUseSfmTokenArray )
      {
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          v16 = 0LL;
        v17 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v11, v25, v16);
      }
      else
      {
        if ( v15 )
          v18 = *(_QWORD *)(v15 + 8);
        else
          v18 = 0LL;
        v19 = *(_QWORD *)v10;
        v20 = (void *)UserReferenceDwmApiPort(v15, v13, v14);
        v17 = DwmAsyncDirtySprite(v20, v19, v21, v25, v18);
      }
      v22 = v17;
    }
    else
    {
      v22 = 0;
    }
    goto LABEL_18;
  }
  v22 = -1073741816;
  if ( v26 )
LABEL_18:
    _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
  if ( v24[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
  return v22;
}
