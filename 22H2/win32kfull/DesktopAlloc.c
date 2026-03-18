/*
 * XREFs of DesktopAlloc @ 0x1C0065280
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C006224C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0065078 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C009DCA4 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 *     _InitPwSB @ 0x1C00C7998 (_InitPwSB.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     xxxConsoleControl @ 0x1C00E3258 (xxxConsoleControl.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2)
{
  PVOID Heap; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 136), 0, a2);
  if ( !Heap && (*gpsi & 0x100) != 0 )
  {
    _InterlockedAnd(gpsi, 0xFFFFFEFF);
    UserLogError(2147483891LL);
  }
  return Heap;
}
