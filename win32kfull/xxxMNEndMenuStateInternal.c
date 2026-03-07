// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  int v6; // eax
  int IsEnabledDeviceUsage; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v13; // [rsp+40h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 608);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 608) = *(_QWORD *)(a2 + 48);
  }
  else
  {
    while ( v4 )
    {
      v5 = (_QWORD *)(v4 + 48);
      v4 = *(_QWORD *)(v4 + 48);
      if ( v4 == a2 )
      {
        *v5 = *(_QWORD *)(a2 + 48);
        break;
      }
    }
  }
  if ( IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1352) )
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 0x100) == 0 && (v6 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v6 & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    IsEnabledDeviceUsage = Feature_439792958__private_IsEnabledDeviceUsage();
    v8 = gMenuState[17];
    if ( IsEnabledDeviceUsage )
      GreCleanDCAndSetOwnerEx(v8, 2147483666LL, 0LL, 1LL);
    else
      GreSetDCOwnerEx(v8, 0LL, 0LL, 1LL);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 136);
    if ( v9 )
      GreDeleteDC(v9);
    Win32FreePool((void *)a2);
  }
  v10 = *(_QWORD *)(a1 + 608);
  if ( v10 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v13,
      *(struct tagMENUSTATE **)(a1 + 608));
    v11 = *(_QWORD *)v10;
    if ( (*(_DWORD *)(v10 + 8) & 0x100) != 0 )
    {
      xxxActivateWindow(*(struct tagWND **)(v11 + 56));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, v11);
      xxxMNSetCapture(v12, v10);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v13);
  }
}
