__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  HDEV v9; // rbx
  bool v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebp
  HWND v15; // rdx
  void *Sprite; // rax
  void *v17; // rax
  void *v18; // r8
  int v20; // [rsp+38h] [rbp-130h]
  int v21; // [rsp+40h] [rbp-128h]
  int v22; // [rsp+48h] [rbp-120h]
  __int64 v23; // [rsp+50h] [rbp-118h]
  HDEV v26; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v29[8]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v30[144]; // [rsp+90h] [rbp-D8h] BYREF

  v7 = 1;
  v26 = a1;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v29, *((HSEMAPHORE *)v8 + 10));
  v28 = *((_QWORD *)v8 + 15);
  GreAcquireSemaphore(v28);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v26);
  v9 = a1 + 297;
  v10 = *((_DWORD *)a1 + 296) && *(_DWORD *)v9;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 20));
  v14 = a3 & 1;
  if ( a2 )
  {
    *(_DWORD *)v9 = v14;
    memset_0(v30, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v30, 0LL);
    Sprite = GreCreateSprite(
               (Gre::Base *)a1,
               v15,
               0LL,
               (struct tagMINIWINDOWINFO *)v30,
               0x9900u,
               a3 & 1,
               1,
               (unsigned int)v15 & v20,
               (unsigned int)v15 & v21,
               (unsigned int)v15 & v22,
               (unsigned __int16 *)((unsigned __int64)v15 & v23));
    *((_QWORD *)a1 + 155) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 296) = 1;
      *(_DWORD *)v9 = v14;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect((Gre::Base *)a1, a2, 1, a4, a5);
    }
    else
    {
      v7 = 0;
    }
  }
  else if ( v10 )
  {
    v17 = (void *)UserReferenceDwmApiPort(v12, v11, v13);
    DwmAsyncSendWindowArrangingData(v17, 2, a4, 0LL, a5);
  }
  if ( !*((_DWORD *)a1 + 296) )
  {
    v18 = (void *)*((_QWORD *)a1 + 155);
    if ( v18 )
    {
      GreDeleteSprite((Gre::Base *)a1, 0LL, v18, *(_DWORD *)v9);
      *((_QWORD *)a1 + 155) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v29);
  return v7;
}
