/*
 * XREFs of DesktopAlloc @ 0x1C00C2D40
 * Callers:
 *     _InitPwSB @ 0x1C006884C (_InitPwSB.c)
 *     DefSetText @ 0x1C00689C0 (DefSetText.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxConsoleControl @ 0x1C007A708 (xxxConsoleControl.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00C2B30 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C011190C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2)
{
  PVOID Heap; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 128), 0, a2);
  if ( !Heap && (*gpsi & 0x100) != 0 )
  {
    _InterlockedAnd(gpsi, 0xFFFFFEFF);
    UserLogError(2147483891LL);
  }
  return Heap;
}
