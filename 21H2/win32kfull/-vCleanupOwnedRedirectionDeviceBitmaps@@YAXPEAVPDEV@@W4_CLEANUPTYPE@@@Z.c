/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00F3208
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C00F31F0 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C000B438 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0027858 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(__int64 a1, unsigned int a2)
{
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  HSURF i; // rcx
  HSURF v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 Objt; // rax
  _BYTE v16[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]
  char v18; // [rsp+60h] [rbp+8h] BYREF

  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v18,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v5) = 5;
  HmgPrefetchAllObjt(v5, SURFACE::tSize + 256);
  GreAcquireHmgrSemaphore(v7, v6, v8, v9);
  for ( i = 0LL; ; i = v12 )
  {
    LOBYTE(v10) = 5;
    Objt = HmgSafeNextObjt(i, v10);
    if ( !Objt )
      break;
    v12 = *(HSURF *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1 && (*(_DWORD *)(Objt + 116) & 1) != 0 && !*(_DWORD *)(Objt + 8) )
    {
      GreMarkDeletableBitmap(*(_QWORD *)Objt);
      SURFREF::SURFREF((SURFREF *)v16, v12);
      v13 = SURFACE::bDeleteSurface(v17, a2, 0LL);
      v14 = v17;
      if ( v13 )
        v14 = 0LL;
      v17 = v14;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v18);
}
