void __fastcall CleanupCursorObject(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  Gre::Base *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // r14
  __int64 HDEV; // rax
  __int64 v14; // rbp
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  char v18; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((void **)a1 + 8));
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v5 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v5 )
  {
    UserDeleteAtom(v5, a2, a3, a4);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    v7 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
    if ( *(struct tagCURSOR **)(v7 + 8624) == (struct tagCURSOR *)((char *)a1 + 80) )
    {
      v12 = Gre::Base::Globals(v6);
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v18, *((HSEMAPHORE *)v12 + 10));
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        v16 = HDEV;
        v14 = *(_QWORD *)(HDEV + 56);
        v15 = v7;
        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
        {
          lambda_a958981e61cb814173376795bd306db4_::operator()(&v15, v14, (char *)a1 + 80);
        }
        else
        {
          v17 = *((_QWORD *)v12 + 15);
          GreAcquireSemaphore(v17);
          lambda_a958981e61cb814173376795bd306db4_::operator()(&v15, v14, (char *)a1 + 80);
          SEMOBJ::vUnlock((SEMOBJ *)&v17);
        }
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v18);
    }
    v8 = *((_QWORD *)a1 + 11);
    if ( v8 )
    {
      GreDereferenceObject(v8, 0LL);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v9 = *((_QWORD *)a1 + 12);
    if ( v9 )
    {
      GreDereferenceObject(v9, 0LL);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v10 = *((_QWORD *)a1 + 16);
    if ( v10 )
    {
      GreDeleteObject(v10);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v11 = *((_QWORD *)a1 + 13);
    if ( v11 )
    {
      GreDeleteObject(v11);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
