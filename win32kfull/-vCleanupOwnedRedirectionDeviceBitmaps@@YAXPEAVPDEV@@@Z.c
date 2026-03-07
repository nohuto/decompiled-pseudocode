void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(struct PDEV *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 i; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v2 + 10));
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v10,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v4) = 5;
  HmgPrefetchAllObjt(v4, 1112LL);
  GreAcquireHmgrSemaphore();
  v11 = 0LL;
  for ( i = 0LL; ; i = v7 )
  {
    LOBYTE(v5) = 5;
    v7 = HmgSafeNextObjt(i, v5, &v11);
    if ( !v7 )
      break;
    if ( (struct PDEV *)v11[6] == a1 && (*((_DWORD *)v11 + 29) & 1) != 0 && !*((_DWORD *)v11 + 2) )
    {
      v8 = *v11;
      GreMarkDeletableBitmap(*v11);
      LOBYTE(v9) = 5;
      v12 = HmgShareLockCheck(v8, v9);
      SURFREF::bDeleteSurface((SURFREF *)&v12, 0);
      if ( v12 )
        DEC_SHARE_REF_CNT(v12);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v10);
}
