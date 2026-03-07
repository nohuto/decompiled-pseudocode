__int64 __fastcall bMoveDevPreviewRect(Gre::Base *a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  __int64 v10; // r8
  Gre::Base *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  LONG v15; // r10d
  LONG v16; // r9d
  void *v17; // rax
  int v18; // edx
  unsigned int updated; // eax
  Gre::Base *v21; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v22; // [rsp+88h] [rbp-19h] BYREF
  char v23[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+98h] [rbp-9h] BYREF
  char v25[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v26; // [rsp+A8h] [rbp+7h] BYREF

  v21 = a1;
  v5 = a3 & 1;
  v26 = 0LL;
  v9 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, *((HSEMAPHORE *)v9 + 10));
  v24 = *((_QWORD *)v9 + 15);
  GreAcquireSemaphore(v24);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v21);
  v11 = v21;
  v12 = 0;
  if ( *((_QWORD *)v21 + 155) )
  {
    v13 = (unsigned int)(*((_DWORD *)v21 + 315) - *((_DWORD *)v21 + 313));
    v14 = (unsigned int)(*((_DWORD *)v21 + 316) - *((_DWORD *)v21 + 314));
    v15 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v16 = *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4);
    v22.cx = v15;
    v22.cy = v16;
    if ( *((_DWORD *)v21 + 297) )
    {
      if ( (_DWORD)v13 || (_DWORD)v14 )
      {
        v17 = (void *)UserReferenceDwmApiPort(v14, v13, v10);
        v18 = 1;
      }
      else
      {
        v17 = (void *)UserReferenceDwmApiPort(v14, v13, v10);
        v18 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v17, v18, a4, (__int128 *)a2, a5) >= 0;
    }
    else if ( v15 == (_DWORD)v13 && v16 == (_DWORD)v14 )
    {
      v26 = *(_OWORD *)a2;
      updated = GreUpdateSprite(
                  (HDEV)a1,
                  0LL,
                  *((void **)v21 + 155),
                  0LL,
                  (struct tagPOINT *)&v26,
                  &v22,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  v5,
                  0,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((Gre::Base *)((char *)v21 + 80), (const struct _RECTL *)a2);
    }
    if ( updated )
      *(_OWORD *)((char *)v11 + 1252) = *(_OWORD *)a2;
    v12 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v12;
}
