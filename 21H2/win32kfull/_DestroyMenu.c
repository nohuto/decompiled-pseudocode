/*
 * XREFs of _DestroyMenu @ 0x1C0063B20
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     MNFreeItem @ 0x1C0065704 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     NtUserDestroyMenu @ 0x1C01082A0 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C01468C8 (xxxSetSystemMenu.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     MNFreeItem @ 0x1C0065704 (MNFreeItem.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyMenu(PVOID *a1)
{
  char *v2; // rdi
  int v3; // esi
  PVOID v4; // rdx
  _DWORD *v5; // rdx
  bool v6; // zf
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v8, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = (char *)a1[11];
    v3 = *((_DWORD *)a1[5] + 11);
    if ( v3 )
    {
      do
      {
        MNFreeItem(a1, v2, 1LL);
        v2 += 96;
        --v3;
      }
      while ( v3 );
      v2 = (char *)a1[11];
    }
    if ( v2 )
    {
      RtlFreeHeap(*((PVOID *)a1[3] + 16), 0, a1[12]);
      Win32FreePool(a1[11]);
      *((_QWORD *)a1[5] + 4) = 0LL;
      a1[11] = 0LL;
      *((_DWORD *)a1[5] + 11) = 0;
    }
    v4 = a1[3];
    v9 = 0LL;
    LockObjectAssignment(&v9, v4);
    HMAssignmentUnlock(a1 + 10);
    v5 = a1[19];
    *(_QWORD *)v5 = 0LL;
    v6 = v5[2] == 0;
    *((_BYTE *)v5 + 12) = 1;
    if ( v6 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v5);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v9);
  }
  if ( v8 )
    gphePrimaryDestroyTarget = 0LL;
  return 1LL;
}
