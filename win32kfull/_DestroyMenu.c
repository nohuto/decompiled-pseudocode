/*
 * XREFs of _DestroyMenu @ 0x1C00A77C0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     MNFreeItem @ 0x1C00A25D0 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserDestroyMenu @ 0x1C00DDD10 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C00E8094 (xxxLoadSysDesktopMenu.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     xxxSetSystemMenu @ 0x1C0234C74 (xxxSetSystemMenu.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A8678 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E6550 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyMenu(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // r15d
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  void *v6; // r8
  __int64 v7; // rsi
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  if ( !a1 )
    return 0LL;
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v23, (void *)a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *(_QWORD **)(a1 + 88);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    while ( v3 )
    {
      --v3;
      v4 = 0LL;
      *(_QWORD *)(*v2 + 96LL) = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
      v19 = gSmartObjNullRef;
      v19 = *(_QWORD *)(a1 + 152);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL);
      v20[0] = *(_QWORD *)(v4 + 1512);
      *(_QWORD *)(v4 + 1512) = v20;
      v6 = (void *)v2[3];
      v20[1] = 0LL;
      if ( v6 )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v19 + 24LL) + 128LL), 0, v6);
      v7 = 0LL;
      *(_QWORD *)(*v2 + 40LL) = 0LL;
      v2[3] = 0LL;
      v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v8 )
        v7 = *v8;
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v19);
      v9 = *(_QWORD **)(v7 + 1512);
      if ( v9 )
        *(_QWORD *)(v7 + 1512) = *v9;
      v10 = 0LL;
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
        v10 = *v11;
      v21 = gSmartObjNullRef;
      v21 = *(_QWORD *)(a1 + 152);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL);
      v22[0] = *(_QWORD *)(v10 + 1512);
      *(_QWORD *)(v10 + 1512) = v22;
      v22[1] = 0LL;
      if ( v2[2] )
      {
        RemoveParentMenu(&v21, v2);
        *(_QWORD *)(*v2 + 16LL) = 0LL;
        v12 = HMAssignmentUnlock(v2 + 2);
      }
      else
      {
        v12 = 0LL;
      }
      v13 = 0LL;
      v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v14 )
        v13 = *v14;
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v21);
      v15 = *(_QWORD **)(v13 + 1512);
      if ( v15 )
        *(_QWORD *)(v13 + 1512) = *v15;
      if ( v12 )
        DestroyMenu(v12);
      v2 += 12;
    }
    if ( *(_QWORD *)(a1 + 88) )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
      Win32FreePool(*(void **)(a1 + 88));
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) = 0LL;
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) = 0;
    }
    v16 = *(_QWORD *)(a1 + 24);
    v24 = 0LL;
    LockObjectAssignment(&v24, v16);
    HMAssignmentUnlock(a1 + 80);
    v17 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)v17 = 0LL;
    *(_BYTE *)(v17 + 12) = 1;
    if ( !*(_DWORD *)(v17 + 8) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v17);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v24);
    if ( v23 )
      gphePrimaryDestroyTarget = 0LL;
  }
  else if ( v23 )
  {
    gphePrimaryDestroyTarget = 0LL;
  }
  return 1LL;
}
