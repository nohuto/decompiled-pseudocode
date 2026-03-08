/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C00B7D80 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001F240 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     UserOnGreTextReady @ 0x1C00B8554 (UserOnGreTextReady.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00B8C30 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 */

char __fastcall UmfdHostLifeTimeManager::AddInitialFonts(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  bool v3; // si
  __int64 v4; // rcx
  __int64 HDEV; // rbx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  struct _KEVENT *v8; // rcx
  bool v9; // bl
  __int64 v11; // rax
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( KeReadStateEvent(*(PRKEVENT *)(v1 + 23568)) )
    return 1;
  v2 = KeWaitForSingleObject(*(PVOID *)(v1 + 23576), Executive, 1, 0, 0LL);
  if ( v2 < 0 || v2 == 192 )
  {
    KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
    return 0;
  }
  else
  {
    v3 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV(v4);
    v7 = Gre::Base::Globals(v6);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v12, *((HSEMAPHORE *)v7 + 10));
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2148);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v12);
    FinishStockFontInit(HDEV);
    if ( !*(_QWORD *)(v1 + 19504) )
    {
      v11 = *(_QWORD *)(v1 + 20272);
      if ( !v11 || !*(_DWORD *)(v11 + 28) )
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL, 0LL, 0LL, 0LL, 0LL, 0LL, 1);
    }
    v8 = *(struct _KEVENT **)(v1 + 23552);
    *(_BYTE *)(v1 + 23560) = 1;
    KeSetEvent(v8, 0, 0);
    v9 = (unsigned int)UserOnGreTextReady() != 0 && v3;
    KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
    return v9;
  }
}
