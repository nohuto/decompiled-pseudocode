__int64 __fastcall bSetDevDragRect(Gre::Base *a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rdi
  unsigned int v7; // r15d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  char v9; // r14
  __int64 v10; // rsi
  int v11; // ebx
  void **v12; // rbx
  __int64 *v14; // r14
  __int64 v15; // rdi
  HWND v16; // rdx
  __int64 Sprite; // rax
  unsigned int v18; // eax
  void *v19; // rax
  Gre::Base *v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  _BYTE v23[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[144]; // [rsp+B0h] [rbp-50h] BYREF

  v22 = a3;
  v26 = 0LL;
  v4 = (HDEV)((char *)a1 + 80);
  v21 = a1;
  v7 = 1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, *((HSEMAPHORE *)v8 + 10));
  v24 = *((_QWORD *)v8 + 15);
  GreAcquireSemaphore(v24);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v21);
  if ( !*((_DWORD *)v4 + 276) || (v9 = 1, !*((_DWORD *)v4 + 277)) )
    v9 = 0;
  bCleanupSpriteStateRects((HDEV)a1, (struct _SPRITESTATE *)v4);
  v10 = 4LL;
  v11 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v11;
    v14 = (__int64 *)(v4 + 282);
    v15 = 4LL;
    do
    {
      memset_0(v27, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v27, 0LL);
      Sprite = GreCreateSprite((HDEV)a1, v16, 0LL, (struct tagMINIWINDOWINFO *)v27, 0x9900u, v11, 1, 0, 0, 0, 0LL);
      *v14++ = Sprite;
      v18 = Sprite != 0 ? v7 : 0;
      v7 = v18;
      --v15;
    }
    while ( v15 );
    v4 = (HDEV)((char *)a1 + 80);
    if ( v18 )
    {
      *((_DWORD *)a1 + 294) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v22, a4 & 1);
    }
  }
  else if ( v9 )
  {
    v19 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v19, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v12 = (void **)(v4 + 282);
    do
    {
      if ( *v12 )
      {
        GreDeleteSprite((HDEV)a1, 0LL, *v12, *((_DWORD *)v4 + 275));
        *v12 = 0LL;
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v7;
}
