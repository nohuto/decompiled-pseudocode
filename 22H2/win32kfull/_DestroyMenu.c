/*
 * XREFs of _DestroyMenu @ 0x1C0048990
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026774 (xxxUpdatePerUserSystemParameters.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0048BE8 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNFreeItem @ 0x1C0049080 (MNFreeItem.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxGetSystemMenu @ 0x1C00DC574 (xxxGetSystemMenu.c)
 *     NtUserDestroyMenu @ 0x1C011D610 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01291D4 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C01554D8 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C0049080 (MNFreeItem.c)
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C0102C08 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  void **v3; // r14
  char *v4; // rdi
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v3 = (void **)(a1 + 88);
    v4 = *(char **)(a1 + 88);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( v5 )
    {
      do
      {
        MNFreeItem(a1, v4, 1LL);
        v4 += 96;
        --v5;
      }
      while ( v5 );
      v4 = (char *)*v3;
    }
    if ( v4 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
      Win32FreePool(*v3);
      tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(a1 + 88, 0LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) &= v6;
    }
    v7 = *(_QWORD *)(a1 + 24);
    v10 = 0LL;
    LockObjectAssignment(&v10, v7);
    HMAssignmentUnlock(a1 + 80);
    v8 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)v8 = 0LL;
    v9 = *(_DWORD *)(v8 + 8) == 0;
    *(_BYTE *)(v8 + 12) = 1;
    if ( v9 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v8);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v10);
  }
  return 1LL;
}
