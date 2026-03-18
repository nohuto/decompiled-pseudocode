/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z @ 0x1C0086C68
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C0086C50 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0054688 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0087BD0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0087C8C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(struct PDEV *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 i; // rcx
  HSURF v7; // rbx
  unsigned int v8; // edi
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+60h] [rbp+8h] BYREF
  HSURF *v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v2 + 10));
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v11,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v4) = 5;
  HmgPrefetchAllObjt(v4, 1112LL);
  GreAcquireHmgrSemaphore();
  v12 = 0LL;
  for ( i = 0LL; ; i = v8 )
  {
    LOBYTE(v5) = 5;
    v8 = HmgSafeNextObjt(i, v5, &v12);
    if ( !v8 )
      break;
    if ( v12[6] == (HSURF)a1 && (*((_DWORD *)v12 + 29) & 1) != 0 && !*((_DWORD *)v12 + 2) )
    {
      v7 = *v12;
      GreMarkDeletableBitmap(*v12);
      SURFREF::SURFREF((SURFREF *)v9, v7);
      SURFREF::bDeleteSurface((SURFREF *)v9, 0);
      if ( v10 )
        DEC_SHARE_REF_CNT(v10);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v11);
}
